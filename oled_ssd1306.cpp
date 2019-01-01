
#include "pxt.h"
#include "Adafruit_SSD1306.h"
#include "Image_Bitmaps.h"
#include <cmath>


using namespace pxt;

namespace oled_ssd1306 {
	#define SSD1306_ADDRESS 0x78
	#define FONT_WIDTH 6
	#define FONT_HEIGHT 8
	// #define PI 3,1415926535897932384626433832795
	
	#undef printf

	// ################################## (Namespace) global variables  ##################################
	//
	MicroBitI2C i2c(I2C_SDA0, I2C_SCL0);
	Adafruit_SSD1306_I2C *oled;

	
	// Winkel
	const long double pi = std::acos(-1);
	
	// Drawing specific name space global variables.
	// Will partly be set/reset with init functions
	
	// Colors
	int drawColor = 1;
	int txtFgColor = 1;
	int txtBgColor = 0;

	// Variables for drawLine2
	int drawLine2_x0 = 0;
	int drawLine2_y0 = 0;
	int drawLine2_width = 0;
		
	// Variables for progress bar
	int progressBarX = 0;
	int progressBarY = 0;
	int progressBarWidth = 0;
	int progressBarHeight = 0;
	bool progressBarBoxDrawn = false;


	// Variables for circle
	bool circleFilled = false;
	int circleRadius = 0;

	
	// Variables for rectangle
	bool rectangleFilled = false;
	int rectangleEdgeRadius = 0;

	// Variables for bitmaps
	StringData *bmpName = "";
	int bmpWidth = 20;
	int bmpHeight = 20;
	
    

	
	
	
	// ################################## Functions ########################################################################
	//
	
	// ### Initialisation ##################################################################################################
	
	
	//%
	void initDisplay(int height = 64, int width = 128, int i2c_address = 0x78){
		// SSD1306_ADDRESS was changed to be setable!
		if (oled != NULL) delete oled;
		oled = new Adafruit_SSD1306_I2C(i2c, i2c_address, height, width);
		oled->clearDisplay();
		oled->display();
		oled->setTextCursor(0, 0);
	}


	//%
	void switchDisplayToOn(bool on = true) {
		oled->isDisplay = on;
		if(on) {
		    oled->display();
		}
	}

	
	//%
	void clearDisplay(){
		oled->clearDisplay();
		oled->display();
	}


	// ### Printing of text / numbers ######################################################################################

	
	//%
	void setTextColor(int fgColor, int bgColor){
		txtFgColor = fgColor;
		txtBgColor = bgColor;
		oled->setTextColor(fgColor, bgColor);
	}

	
	//%
	void setTextSize(int size) {
		oled->setTextSize(size);
	}
	
	
	//%
	void setTextCursorXY(int x, int y) {
		oled->setTextCursor(x, y);
	}
	
	
	//%
	void setTextCursorRowColumn(int row, int column) {
		row = row * FONT_HEIGHT;
		column = column * FONT_WIDTH;
		oled->setTextCursor(column, row);
	}
	
	
	//%
	void printString(StringData *text, int newLine) {
		
		if ( newLine == 0 ) {
			oled->printf("%s\n", text->data);
		}
		else {
			oled->printf("%s", text->data);
		}

		oled->display();
	}
    
	
	//%
	void printNumber(int number, int newLine) {
		
		if ( newLine == 0 ) {
			oled->printf("%d\n", number);
		}
		else {
			oled->printf("%d", number);
		}
		
		oled->display();
		
	}
    

	// ### Drawing of lines, circles, rectangles etc. ######################################################################


	//%
	void setDrawColor(int color){
		drawColor = color;
	}

	
	// Draw a line defined by start x0/y0 and end x1/y1 coordinates
	//
	//%
	void drawLine(int x0, int y0, int x1, int y1) {
		oled->drawLine(x0, y0, x1, y1, drawColor);
		if(oled->isDisplay) {
			oled->display();
		}
	}

	
	// Init draw a line defined by start x0/y0, width and an angle referring to horizontal
	//
	//%
	void initDrawLine2(int x0, int y0, int width) {		
		
		drawLine2_x0 = x0;
		drawLine2_y0 = y0;
		drawLine2_width = width;
	}
	

	// Draw a line defined by start x0/y0, width and an angle referring to horizontal clock/anti-clockwise
	// initDrawLine2 has to be called first
	//	
	//%
	void drawLine2(int alpha, int directionOfRotation ) {		
		
		// Get direction of rotation
		int directionOfRotationCoefficient;
		
		if (directionOfRotation == 0) {
			// alpha is counting clockwise
			directionOfRotationCoefficient = -1;
		}
		else {
			// alpha is counting anti-clockwise
			directionOfRotationCoefficient = 1;
		}
		
		
		// Calculate end coordinate x1/y1
		long double alphaRad = alpha * pi / 180;
		
		long double beta = 90 - alpha;
		long double betaRad = beta * pi / 180;
		
		int x1 = (int)(round( drawLine2_x0 + ( ( drawLine2_width * std::sin(alphaRad) ) * 1                              ) ) );
		int y1 = (int)(round( drawLine2_y0 + ( ( drawLine2_width * std::sin(betaRad)  ) * directionOfRotationCoefficient ) ) );
		
		
		// Actually draw line
		oled->drawLine(drawLine2_x0, drawLine2_y0, x1, y1, drawColor);
		
		if(oled->isDisplay) {
			oled->display();
		}
	}
	

	//%
    void initCircle(bool filled, int radius) {
		circleFilled = filled;
		circleRadius = radius;
        return;
    }
	
	
	//%
	void drawCircle(int x0, int y0){
		if (!circleFilled) {
				oled->drawCircle(x0, y0, circleRadius, drawColor);
		} else {
				oled->fillCircle(x0, y0, circleRadius, drawColor);
		}

		if(oled->isDisplay) {
			oled->display();
		}
	}

	
	//%
	void initRectangle(bool filled, int edgeRadius) {
		rectangleFilled = filled;
		rectangleEdgeRadius = edgeRadius;
	}	

	
	//%
	void drawRectangle(int x0, int y0, int width, int height) {
		if (rectangleEdgeRadius == 0) {
			if (!rectangleFilled) {
					oled->drawRect(x0, y0, width, height, drawColor);
			} else {
					oled->fillRect(x0, y0, width, height, drawColor);
			}
		} else {
			if (!rectangleFilled) {
					oled->fillRoundRect(x0, y0, width, height, rectangleEdgeRadius, drawColor);
			} else {
					oled->fillRoundRect(x0, y0, width, height, rectangleEdgeRadius, drawColor);
			}
		}
		
		if(oled->isDisplay) {
			oled->display();
		}				
	}
	

	// ### Drawing of a progress bar ######################################################################

	
	//%
	void initProgressBar(int x0, int y0, int width, int height) {
		progressBarX = x0;
		progressBarY = y0;
		progressBarWidth = width;
		progressBarHeight = height;
	}

	
	//%
	void drawProgressBar(int progress) {
		int progressBarActWidth = progress * (progressBarWidth-4)/100;		
		int progressBarFillX = progressBarX + 2;
		int progressBarFillY = progressBarY + 2;
		int progressBarFillHeight = progressBarHeight - 4;
		
		if (!progressBarBoxDrawn) { 
			oled->drawRect(progressBarX, progressBarY, progressBarWidth, progressBarHeight, drawColor);
			progressBarBoxDrawn = true;
		}
		
		oled->fillRect(progressBarFillX, progressBarFillY, progressBarActWidth, progressBarFillHeight, drawColor);

		if(oled->isDisplay) {
			oled->display();
		}						

	}


	// ### Drawing of a bitmap ######################################################################

	
	//%
	void initBitmap(StringData *name, int width, int height) {
		*bmpName = *name;
		int bmpWidth = width;
		int bmpHeight = height;	
	}
	
	
    void drawBitmap(int16_t x, int16_t y, const uint8_t *bitmap, int16_t w, int16_t h, uint16_t color);

	
	//%
	void drawBitmap(int x0, int y0) {

		oled->drawBitmap(x0, y0, *bmpName, bmpWidth, bmpHeight, drawColor);

		if(oled->isDisplay) {
			oled->display();
		}						

	}	
		
		
		
	// ### That's all ###############################################################################
    #define printf(...) uBit.serial.printf(__VA_ARGS__)

}
