
#include "pxt.h"
#include "Adafruit_SSD1306.h"
#include "cmath"

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

	
	// Drawing specific name space global variables.
	// Will partly be set/reset with init functions
	
	// Colors
	int lineColor = 1;
	int txtFgColor = 1;
	int txtBgColor = 1;
	
	
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
	void printString(StringData *text) {
		oled->printf("%s\n", text->data);
		oled->display();
	}
    
	
	//%
	void printNumber(int number) {
		oled->printf("%d\n", number);
		oled->display();
	}
    

	// ### Drawing of lines, circles, rectangles etc. ######################################################################


	//%
	void setLineColor(int color){
		lineColor = color;
	}

	
	//%
	void drawLine(int x0, int y0, int x1, int y1) {
		oled->drawLine(x0, y0, x1, y1, lineColor);
		if(oled->isDisplay) {
			oled->display();
		}
	}

		
	//%
	void drawLine2(int x0, int y0, int width, int alpha) {
		int x1 = x0 + ( width - (width * std::sin(alpha)) );
		int y1 = y0 + ( width - (width * std::cos(alpha)) );
		oled->drawLine(x0, y0, x1, y1, lineColor);
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
				oled->drawCircle(x0, y0, circleRadius, lineColor);
		} else {
				oled->fillCircle(x0, y0, circleRadius, lineColor);
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
					oled->drawRect(x0, y0, width, height, lineColor);
			} else {
					oled->fillRect(x0, y0, width, height, lineColor);
			}
		} else {
			if (!rectangleFilled) {
					oled->fillRoundRect(x0, y0, width, height, rectangleEdgeRadius, lineColor);
			} else {
					oled->fillRoundRect(x0, y0, width, height, rectangleEdgeRadius, lineColor);
			}
		}
		
		if(oled->isDisplay) {
			oled->display();
		}				
	}
	
	
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
			oled->drawRect(progressBarX, progressBarY, progressBarWidth, progressBarHeight, lineColor);
			progressBarBoxDrawn = true;
		}
		
		oled->fillRect(progressBarFillX, progressBarFillY, progressBarActWidth, progressBarFillHeight, lineColor);

		if(oled->isDisplay) {
			oled->display();
		}						

	}

	
	// ## TEMP NEW FUNCTION
	
    /**
    * Gets the serial RX buffer size as number
    */
    //% blockId=serial_get_rx_buffer_size block="serial|get serial RX buffer size"
    int getSerialRxBufferSize() {
      int n = uBit.serial.getRxBufferSize();
      return n;
	}

	
	/**
    * Reads the buffered received data as a string
    */
    //% blockId=serial_read_rx_buffer block="serial|read RX buffer"
    StringData* readSerialRxBuffer() {
      int n = uBit.serial.getRxBufferSize();
      if (n == 0) return "";
      return uBit.serial.read(n, MicroBitSerialMode::ASYNC);
}

	
	// ### END #################################################################################################################
	
	
    #define printf(...) uBit.serial.printf(__VA_ARGS__)

}
