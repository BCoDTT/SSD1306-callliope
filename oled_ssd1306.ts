/**
 * Blocks for driving OLED using SSD1306 controllers
 */
 
//% weight=91 color=#00A654 icon="\uf26c" block="OLED:SSD1306"

namespace oled_ssd1306 {


  /**
   * micro:bit/calliope OLED:SSD1306 / :PXT blocks
   *
   */

   
   	// ### Initialisation ####################################################################################################

	
    /**
     * Initializes the I2C OLED display driven by SSD1306 controller
     * @param height        - height of display (in pixels); eg: 64
     * @param width         - width of display (in pixels); eg: 128
     * @param i2c_address	- module's I2C address (in HEX); eg: 120
     */
    //% blockId=oled_init_display block="initialize OLED with height %height|width %width|address %i2c_address"
    //% blockGap=6
    //% shim=oled_ssd1306::initDisplay
    export function initDisplay(height: number = 64, width: number = 128, i2c_address: number = 120): void {
        return;
    }
	
    
    /**
     * Clear OLED display
     */
    //% blockId=oled_clear_screen block="clear OLED display"
    //% blockGap=6
    //% shim=oled_ssd1306::clearDisplay
    export function clearDisplay(): void {
        return;
    }

	
	/**
     * Switch OLED display on/off
     * @param on - switch display on or off (boolean); eg: true
     */
    //% blockId=oled_switch_display_to_on block="switch OLED display on %on"
    //% blockGap=12
    //% shim=oled_ssd1306::switchDisplayToOn
    export function switchDisplayToOn(on: boolean = true): void {
        return;
    }
	
 
	// ### Printing of text / numbers ######################################################################################


	/**
     * Set text foreground and background color (currently Black or White)
     * @param fgColor    - text fg color; eg: Colors.White
     * @param bgColor    - text bg color; eg: Colors.Black
     */
    //% blockId=oled_set_text_color block="Set text color to fgColor %fgColor|bgColor %bgColor"
    //% blockGap=6
    //% shim=oled_ssd1306::setTextColor
    export function setTextColor(fgColor: Colors, bgColor: Colors): void {
        return;
    }
	
	
    /**
     * Sets the text cursor to absolute position x/y
     * @param x         - absolute x-position (in pixels)
     * @param y         - absolute y-position (in pixels)
     */
    //% blockId=oled_settextcursor_xy block="set text cursor to position x %x|y %y"
    //% blockGap=6
    //% shim=oled_ssd1306::setTextCursorXY
    export function setTextCursorXY(x: number, y: number): void {
        return;
    }

    
    /**
     * Sets the text cursor to absolute row/column
     * @param row       - row
     * @param column    - column
     */
    //% blockId=oled_settextcursor_row_col block="set text cursor to row %row | column %column"
    //% blockGap=6
    //% shim=oled_ssd1306::setTextCursorRowColumn
    export function setTextCursorRowColumn(row: number, column: number): void {
        return;
    }
	

     /**
     * Sets the text size
     * @param size	- text size; eg: 1
     */
    //% blockId=oled_set_text_size block="set text size to size %size"
    //% blockGap=6
    //% shim=oled_ssd1306::setTextSize
    export function setTextSize(size: number): void {
        return;
    }

	
    /**
     * Prints a string on the OLED display at the current text cursor position
     * @param text - text to display on OLED display
     */
    //% blockId=oled_print_string block="print|string %text | %newLine"
    //% blockGap=6
    //% shim=oled_ssd1306::printString
    export function printString(text: string, newLine : PrintModes): void {
        return;
    }

    
    /**
     * Prints a number on the OLED display at the current text cursor position
     * @param number - number to display on OLED display
     */
    //% blockId=oled_print_number block="print|number %number | %newLine"
    //% blockGap=12
    //% shim=oled_ssd1306::printNumber
    export function printNumber(number: number, newLine : PrintModes): void {
        return;
    }

	
	// ### Drawing of lines, circles, rectangles etc. ######################################################################

	
	/**
     * Set line color for drawing (currently Black or White)
     * @param color    - draw color for lines, boxes etc.; eg: 01
     */
    //% blockId=oled_set_draw_color block="set draw color to %color"
    //% blockGap=6
    //% shim=oled_ssd1306::setDrawColor
    export function setDrawColor(color: Colors) : void {
        return;
    }

	
    /**
     * Draws a line on the OLED display from absolute coordinates x0/y0 to x1/y1 and draw color set.
     * @param x0    - x-position of start coordinate (in pixels)
     * @param y0    - y-position of start coordinate (in pixels)
     * @param x1    - x-position of end coordinate (in pixels)
     * @param y1    - y-component of vector of end coordinate (in pixels)
     */
    //% blockId=oled_drawLine block="draw line with x0 %x0|y0 %y0|x1 %x1|y1 %y1"
    //% blockGap=6
    //% shim=oled_ssd1306::drawLine
    export function drawLine(x0: number, y0: number, x1: number, y1: number): void {
        return;
    }

	
	/**
     * Initialises function drawLine2 - a line on the OLED display from absolute coordinates x0/y0 with width and direction (angle alpha; anti-clockwise)
     * @param x0    - x-position of start coordinate (in pixels)
     * @param y0    - y-position of start coordinate (in pixels)
     * @param width - width of line (in pixels)
     */
    //% blockId=oled_init_drawLine2 block="init draw line using angle with x0 %x0|y0 %y0|width %width"
    //% blockGap=6
    //% shim=oled_ssd1306::initDrawLine2
    export function initDrawLine2(x0: number, y0: number, width: number): void {
        return;
    }
	
	
    /**
     * Draws a line on the OLED display from absolute coordinates x0/y0 with width and direction (angle alpha; clockwise / anticlockwise).
	 * Function init draw line has to be called first!
     * @param alpha - direction of line (in degree). alpha=0 is horizontal.
     */
    //% blockId=oled_drawLine2 block="draw line using angle with alpha %alpha| %directionOfRotation"
    //% blockGap=6
    //% shim=oled_ssd1306::drawLine2
    export function drawLine2(alpha: number, directionOfRotation: DirectionsOfRotation): void {
        return;
    }
	
	
	/**
     * Init circle draw mode (filled or not, radius)
     * @param filled    - to fill or not to fill the circle (boolean); eg: false
     * @param radius    - radius of the rectangle's edges; eg: 5
     */
    //% blockId=oled_init_circle block="init circle filled %filled|radius %radius"
    //% blockGap=6
    //% shim=oled_ssd1306::initCircle
    export function initCircle(filled: boolean = false, radius: number = 5): void {
        return;
    }


    /**
     * Draws a circle on the OLED display at absolute coordinates x/y with mode set with initCircle.
	 * The function initCircle has to be called first!
     * @param x0    - x-position (in pixels); eg: 63
     * @param y0    - y-position (in pixels); eg: 31
     */
    //% blockId=oled_draw_circle block="draw circle at x0 %x0|y0 %y0"
     //% blockGap=6
    //% shim=oled_ssd1306::drawCircle
    export function drawCircle(x0: number = 63, y0: number = 31): void {
        return;
    }
	
	
	/**
     * Init rectangle draw mode (filled or not, radius, color)
     * @param filled     - to fill or not to fill the rectangle (boolean); eg: false
     * @param edgeRadius - radius of the rectangle's edges; eg: 0
     */
    //% blockId=oled_init_rectangle block="init rectangle filled %filled|edgeRadius %edgeRadius"
    //% blockGap=6
    //% shim=oled_ssd1306::initRectangle
    export function initRectangle(filled: boolean = false, edgeRadius: number = 0): void {
        return;
    }
	
    
     /**
     * Draw a rectangle using the draw mode set by initRectangle at position x0/0y with width w, height h.
	 * initRectangle must be called prior to this call!
     * @param x0     - x-position of left lower corner (in pixels)
     * @param y0     - y-position of left lower corner (in pixels)
     * @param width  - width of rectangle (in pixels)
     * @param height - height of rectangle (in pixels)
     */
    //% blockId=oled_drawRectangle block="draw rectangle with x0 %x0|y0 %y0|width %width|height %height"
    //% blockGap=6
    //% shim=oled_ssd1306::drawRectangle
    export function drawRectangle(x0: number, y0: number, width: number, height: number): void {
        return;
    }
	

	// ### Drawing a progressbar ######################################################################

		
     /**
     * Init a progress bar on position x/y with width w, height h
     * @param x0         - x-position of left lower corner (in pixels); eg: 34
     * @param y0         - y-position of left lower corner (in pixels); eg: 50
     * @param width     - width of progress bar (in pixels); eg: 60
     * @param height    - height of progressbar (in pixels; eg: 7
     */
    //% blockId=oled_init_progress_bar block="init progress bar with x0 %x0|y0 %y0|width %width|height %height"
    //% blockGap=6
    //% shim=oled_ssd1306::initProgressBar
    export function initProgressBar(x0: number, y0: number, width: number, height: number = 7): void {
        return;
    }
 

     /**
     * Draw a progress bar with percentage of progress. initProgressBar must be called prior to this call!
     * @param percentage   - degree of done
     */
    //% blockId=oled_draw_progress_bar block="draw progress bar with percentage %percentage"
    //% blockGap=12
    //% shim=oled_ssd1306::drawProgressBar
    export function drawProgressBar(percentage: number): void {
        return;
    }
   
   
   	// ### Drawing a bitmap ######################################################################

	
     /**
     * Init a bitmap with ref to name and width/height
     * @param nameRef   - nameRef of bitmap to draw
     * @param width     - width of bitmap to draw (in pixels); eg: 40
     * @param height    - height of bitmap to draw (in pixels; eg: 40
     */
    //% blockId=oled_init_bitmap block="init bitmap with name %nameRef|width %width|height %height"
    //% blockGap=6
    //% shim=oled_ssd1306::initBitmap
    export function initBitmap(nameRef: string, width: number, height: number): void {
        return;
    }
 

     /**
     * Draw a bitmap at position xp/y0 with draw color. initBitmap must be called prior to this call!
     * @param x0         - x-position of left lower corner (in pixels); eg: 31
     * @param y0         - y-position of left lower corner (in pixels); eg: 63
     */
    //% blockId=oled_draw_bitmap block="draw bitmap x0 %x0|y0 %y0"
    //% blockGap=12
    //% shim=oled_ssd1306::drawBitmap
    export function drawBitmap(x0 : number, y0 : number): void {
        return;
    } 
   
   
   	// ### Version info ######################################################################
   
   
     /**
     * Indicates versionId
     */
    //% blockId=oled_version_id block="version id 20190102-1423"
    //% blockGap=6
    export function versionId(): void {
        return;
    }

	// #
	
}











