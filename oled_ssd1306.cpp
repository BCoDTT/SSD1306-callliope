#include "pxt.h"
#include "Adafruit_SSD1306.h"
using namespace pxt;

namespace oled_ssd1306 {
	#define SSD1306_ADDRESS 0x78
	#define FONT_WIDTH 6
	#define FONT_HEIGHT 8
	#undef printf
	
	MicroBitI2C i2c(I2C_SDA0, I2C_SCL0);
	Adafruit_SSD1306_I2C *oled;

	void init(int height, int width){
		if (oled != NULL) delete oled;
		oled = new Adafruit_SSD1306_I2C(i2c, SSD1306_ADDRESS, height, width);
		oled->splash();
		oled->display();
	}
	
	
	//%
	void init_terminal(int height = 64, int width = 128){
		if (oled != NULL) delete oled;
		oled = new Adafruit_SSD1306_I2C(i2c, SSD1306_ADDRESS, height, width);
		oled->clearDisplay();
		oled->display();
		oled->setTextCursor(0, 0);
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
	void showString(StringData *text) {
		oled->printf("%s\n", text->data);
		oled->display();
	}
    
	
	//%
	void showNumber(int number) {
		oled->printf("%d\n", number);
		oled->display();
	}
    
	
	//%
	void onOffDisplay(bool onOff = true) {
		oled->isDisplay = onOff;
		if(onOff) {
		    oled->display();
		}
	}

	
	//%
	void clearDisplay(){
		oled->clearDisplay();
		oled->display();
	}

	
	//%
	void drawCircle(int x, int y, int r){
		oled->drawCircle(x, y, r, WHITE);
		if(oled->isDisplay) {
			oled->display();
		}
	}

	
	//%
	void fillCircle(int x, int y, int r){
		oled->fillCircle(x, y, r, WHITE);
		if(oled->isDisplay) {
			oled->display();
		}
	}

	
	//%
	void drawLine(int x0, int y0, int x1, int y1){
		oled->drawLine(x0, y0, x1, y1, WHITE);
		if(oled->isDisplay) {
			oled->display();
		}
	}

	
	//%
	void fillRect(int x, int y, int w, int h){
		oled->fillRect(x, y, w, h, WHITE);
		if(oled->isDisplay) {
			oled->display();
		}
	}

	
	//%
	void drawRect(int x, int y, int w, int h){
		oled->drawRect(x, y, w, h, WHITE);
		if(oled->isDisplay) {
			oled->display();
		}
	}

	
	//%
	void showProgressBarTest(int arr_params[]) {
		int x = arr_params[0];
		int y = arr_params[1];		
		oled->setTextCursor(x, y);
	}

	
	//%
	void showProgressBar(int x, int y, int width, int height, int progress){
		int dummy;
	}
	
	
	// ************************************************************************
	// THE FUNCTIONS BELOW DO NOT WORK CORRECTLY IN MAKECODE/CALLIOPE
	// ************************************************************************
	
	//%
	void fillRoundRect(int x, int y, int w, int h, int r){
		oled->fillRoundRect(x, y, w, h, r, WHITE);
		if(oled->isDisplay) {
			oled->display();
		}
	}

	
	//%
	void drawRoundRect(int x, int y, int w, int h, int r){
		oled->drawRoundRect(x, y, w, h, r, WHITE);
		if(oled->isDisplay) {
			oled->display();
		}
	}

	
	//%
	void drawTriangle(int x0, int y0, int x1, int y1, int x2, int y2) {
		oled->drawTriangle(x0, y0, x1, y1, x2, y2, WHITE);
		if(oled->isDisplay) {
			oled->display();
		}
	}

	
	//%
	void fillTriangle(int x0, int y0, int x1, int y1, int x2, int y2) {
		oled->fillTriangle(x0, y0, x1, y1, x2, y2, WHITE);
		if(oled->isDisplay) {
			oled->display();
		}
	}

	
    #define printf(...) uBit.serial.printf(__VA_ARGS__)

}

