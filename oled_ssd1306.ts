/**
 * Blocks for driving OLED using SSD1306 controllers
 */
 
//% weight=91 color=#00A654 icon="\uf1b9" block="OLED:SSD1306"

namespace oled_ssd1306 {

  /***********************************************************************************************
   * micro:bit/calliope OLED:SSD1306 / :PXT blocks
   ***********************************************************************************************
   */

    /**
     * Initializes the I2C OLED display driven by SSD1306 controller
     * @param height        - height of display (in pixels)
     * @param width         - width of display (in pixels)
     * ToDo: @param address adddress (in HEX)       # Module's I2C address
     */
    //% blockId=oled_init_terminal block="initialize OLED with height %height|width %width"
    //% shim=OLED_SSD1306::init_terminal
    export function init(height: number = 64, width: number = 128): void {
        return;
    }

    
    /**
     * Clear OLED display
     */
    //% blockId=oled_clear_screen block="clear OLED display"
    //% shim=OLED_SSD1306::clearDisplay
    export function clear(): void {
        return;
    }

    
    /**
     * Sets the text cursor to absolute position x/y
     * @param x         - absolute x-position (in pixels)
     * @param y         - absolute y-position (in pixels)
     */
    //% blockId=oled_settextcursor_xy block="set text cursor to position x %x|y %y" 
    //% shim=OLED_SSD1306::setTextCursorXY
    export function setTextCursorXY(x: number, y: number): void {
        return;
    }

    
    /**
     * Sets the text cursor to absolute row/column
     * @param row       - row
     * @param column    - column
     */
    //% blockId=oled_settextcursor_row_col block="set text cursor to row %row|column %column" 
    //% shim=OLED_SSD1306::setTextCursorRowColumn
    export function setTextCursorRowColumn(row: number, column: number): void {
        return;
    }
   
    
    /**
     * Prints a string on the OLED display at the current text cursor position
     * @param text - text to display on OLED display
     */
    //% blockId=oled_print_string block="show|string %text" 
    //% shim=OLED_SSD1306::showString
    export function showString(text: string): void {
        console.log("display: " + text);
        return;
    }

    
    /**
     * Prints a number on the OLED display at the current text cursor position
     * @param number - number to display on OLED display
     */
    //% block="show|number %number" blockId=oled_print_number
    //% blockGap=8
    //% async 
    //% shim=OLED_SSD1306::showNumber
    export function showNumber(number: number): void {
        console.log("display: " + number);
        return;
    }


    /**
     * Switch OLED display on/off
     * @param on on     - switch display on or off
     */
    //% blockId=oled_onOffDisplay
    //% block="switch OLED display|on %on" 
    //% blockGap=8
    //% async 
    //% shim=OLED_SSD1306::onOffDisplay
    export function onOffDisplay(on: boolean = true): void {
        console.log("display: " + on );
        return;
    }

    
    /**
     * Draws a circle on the OLED display at absolute coordinates x/y with radius r
     * @param x     - x-position (in pixels)
     * @param y     - y-position (in pixels)
     * @param r     - radius of circle (in pixels)
     */
    //% blockId=oled_drawCircle block="draw circle with x %x|y %y|r %r"
    //% shim=OLED_SSD1306::drawCircle
    export function drawCircle(x: number, y: number, r: number): void {
        return;
    }

    
    /**
     * Draws a filled circle on the OLED display at absolute coordinates x/y with radius r
     * @param x     - x-position (in pixels)
     * @param y     - y-position (in pixels)
     * @param r     - radius of circle (in pixels)
     */
    //% blockId=oled_fillCircle block="fill circle with x %x|y %y|r %r"
    //% shim=OLED_SSD1306::fillCircle
    export function fillCircle(x: number, y: number, r: number): void {
        return;
    }

    
    /**
     * Draws a line on the OLED display from absolute coordinates x0/y0 to x1/y1
     * @param x0    - x-position of start coordinate (in pixels)
     * @param y0    - y-position of start coordinate (in pixels)
     * @param x1    - x-position of end coordinate (in pixels)
     * @param y1    - y-position of end coordinate (in pixels)
     */
    //% blockId=oled_drawLine block="draw line with x0 %x0|y0 %y0|x1 %x1|y1 %y1" 
    //% shim=OLED_SSD1306::drawLine
    export function drawLine(x0: number, y0: number, x1: number, y1: number): void {
        return;
    }

    
    /**
     * Draws a rectangle on the OLED display at absolute coordinates x/y, using width w and height h
     * @param x     - x-position of left lower corner (in pixels)
     * @param y     - y-position of left lower corner (in pixels)
     * @param w     - width of rectangle (in pixels)
     * @param h     - height of rectangle (in pixels)
     */
    //% blockId=oled_drawRect block="draw rect with x %x|y %y|w %w|h %h"
    //% shim=OLED_SSD1306::drawRect
    export function drawRect(x: number, y: number, w: number, h: number): void {
        return;
    }

    
    /**
     * Draws a filled rectangle on the OLED display at absolute coordinates x/y, using  width w and height h
     * @param x     - x-position of left lower corner (in pixels)
     * @param y     - y-position of left lower corner (in pixels)
     * @param w     - width of rectangle (in pixels)
     * @param h     - height of rectangle (in pixels)
     */
    //% blockId=oled_fillRect block="fill rect with x %x|y %y|w %w|h %h"
    //% shim=OLED_SSD1306::fillRect
    export function fillRect(x: number, y: number, w: number, h: number): void {
        return;
    }
    
    
    /**
     * Show a progress bar on position x/y with width w, height h and percentage of progress
     * @param x         - x-position of left lower corner (in pixels)
     * @param y         - y-position of left lower corner (in pixels)
     * @param w         - width of progress bar (in pixels)
     * @param h         - height of progressbar (in pixels)
     * @param progress  - progress (in percentage)
     */
    //% blockId=oled_show_progress block="show progress bar with x %x|y %y|width %width|height %height|progress %progress"
    //% async 
    //% shim=OLED_SSD1306::showProgress
    export function showProgress(x: number, y: number, width: number, height: number, progress: number): void {
        return;
    }
   
    
}
