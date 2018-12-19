//% icon="\uf26c"
//% color="255" weight="90" block="OLED_SSD1306"
namespace OLED_SSD1306 {

    
    /**
     * Initialises the i2c OLED display driven by SSD1306 controller
     * @param height height (in pixels)
     * @param width width (in pixels)
     */
    //% weight=102
    //% blockId=oled_init_terminal
    //% block="initialize OLED with height %height|width %width"
    //% icon="\uf1ec" 
    //% shim=OLED_SSD1306::init_terminal
    export function init(height: number = 64, width: number = 128): void {
        return;
    }

    
    /**
     * Clear OLED display
     */
    //% weight=101
    //% blockId=oled_clear_screen
    //% block="clear OLED display"
    //% icon="\uf1ec" 
    //% shim=OLED_SSD1306::clearDisplay
    export function clear(): void {
        return;
    }

    /**
     * Sets the text cursor to absolute position x/y
     * @param x x (in pixels)
     * @param y y (in pixels)
     */
    //% weight=100 blockGap=8
    //% block="set text cursor to position x %x|y %y" 
    //% async
    //% blockId=oled_settextcursor_xy
    //% icon="\uf1ec"
    //% shim=OLED_SSD1306::setTextCursorXY
    export function setTextCursorXY(x: number, y:number): void {
        return;
    }

    /**
     * Sets the text cursor to absolute row/column
     * @param row row (in pixels)
     * @param column column (in pixels)
     */
    //% weight=99 blockGap=8
    //% block="set text cursor to row %row|column %column" 
    //% async
    //% blockId=oled_settextcursor_row_col
    //% icon="\uf1ec"
    //% shim=OLED_SSD1306::setTextCursorRowColumn
    export function setTextCursorRowColumn(row: number, column:number): void {
        return;
    }
    
    /**
     * Prints a string on the OLED display at the current text cursor position
     * @param text text to display
     */
    //% weight=98 blockGap=8
    //% block="show|string %text" 
    //% async
    //% blockId=oled_print_string
    //% icon="\uf1ec"
    //% shim=OLED_SSD1306::showString
    export function showString(text: string): void {
        console.log("display: " + text);
        return;
    }

    /**
     * Prints a number on the OLED display at the current text cursor position
     * @param number number to display
     */
    //% weight=97
    //% blockId=oled_print_number
    //% block="show|number %number" blockGap=8
    //% async 
    //% shim=OLED_SSD1306::showNumber
    export function showNumber(number: number): void {
        console.log("display: " + number);
        return;
    }


    /**
     * Switch OLED display on/off
     * @param onOffDisplay onOffDisplay to on or off display
     */
    //% weight=96
    //% blockId=oled_onOffDisplay
    //% block="show|onOff %onOff" blockGap=8
    //% async 
    //% shim=OLED_SSD1306::onOffDisplay
    export function onOffDisplay(onOff: boolean = true): void {
        console.log("display: " + onOff );
        return;
    }

    /**
     * Draws a circle on the OLED display at absolute coordinates x/y with radius r
     * @param x x (in pixels)
     * @param y y (in pixels)
     * @param r r (in pixels)
     */
    //% weight=95
    //% blockId=oled_drawCircle
    //% block="draw circle with x %x|y %y|r %r"
    //% icon="\uf1ec" 
    //% shim=OLED_SSD1306::drawCircle
    export function drawCircle(x: number = 6, y: number = 6, r: number = 3): void {
        return;
    }

    /**
     * Draws a filled circle on the OLED display at absolute coordinates x/y with radius r
     * @param x x (in pixels)
     * @param y y (in pixels)
     * @param r r (in pixels)
     */
    //% weight=94
    //% blockId=oled_fillCircle
    //% block="fill circle with x %x|y %y|r %r"
    //% icon="\uf1ec" 
    //% shim=OLED_SSD1306::fillCircle
    export function fillCircle(x: number = 6, y: number = 6, r: number = 3): void {
        return;
    }

    /**
     * Draws a line on the OLED display from absolute coordinates x0/y0 to x1/y1
     * @param x0 x0 (in pixels)
     * @param y0 y0 (in pixels)
     * @param x1 x1 (in pixels)
     * @param y1 y1 (in pixels)
     */
    //% weight=93
    //% blockId=oled_drawLine
    //% block="draw line with x0 %x0|y0 %y0|x1 %x1|y1 %y1"
    //% icon="\uf1ec" 
    //% shim=OLED_SSD1306::drawLine
    export function drawLine(x0: number = 1, y0: number = 1, x1: number = 3, y1: number = 3): void {
        return;
    }

    /**
     * Draws a rectangle on the OLED display at absolute coordinates x/y with with w and height h
     * @param x x (in pixels)
     * @param y y (in pixels)
     * @param w w (in pixels)
     * @param h h (in pixels)
     */
    //% weight=92
    //% blockId=oled_drawRect
    //% block="draw rect with x %x|y %y|w %w|h %h"
    //% icon="\uf1ec" 
    //% shim=OLED_SSD1306::drawRect
    export function drawRect(x: number = 1, y: number = 1, w: number = 3, h: number = 3): void {
        return;
    }

    /**
     * Draws a filled rectangle on the OLED display at absolute coordinates x/y with with w and height h
     * @param x x (in pixels)
     * @param y y (in pixels)
     * @param w w (in pixels)
     * @param h h (in pixels)
     */
    //% weight=91
    //% blockId=oled_fillRect
    //% block="fill rect with x %x|y %y|w %w|h %h"
    //% icon="\uf1ec" 
    //% shim=OLED_SSD1306::fillRect
    export function fillRect(x: number = 1, y: number = 1, w: number = 3, h: number = 3): void {
        return;
    }

    /**
     * Draws a round(?) rectangle on the OLED display at absolute coordinates x/y with with w and height h and radius r
     * @param x x (in pixels)
     * @param y y (in pixels)
     * @param w w (in pixels)
     * @param h h (in pixels)
     * @param r r (in pixels)
     */
    //% weight=90
    //% blockId=oled_drawRoundRect
    //% block="draw round rect with x %x|y %y|w %w|h %h|r %r"
    //% icon="\uf1ec" 
    //% shim=OLED_SSD1306::drawRoundRect
    export function drawRoundRect(x: number = 1, y: number = 1, w: number = 3, h: number = 3, r: number = 2): void {
        return;
    }

    /**
     * Draws a filled round(?) rectangle on the OLED display at absolute coordinates x/y with with w and height h and radius r
     * @param x x (in pixels)
     * @param y y (in pixels)
     * @param w w (in pixels)
     * @param h h (in pixels)
     * @param r r (in pixels)
     */
    //% weight=89
    //% blockId=oled_fillRoundRect
    //% block="fill round rect with x %x|y %y|w %w|h %h|r %r"
    //% icon="\uf1ec" 
    //% shim=OLED_SSD1306::fillRoundRect
    export function fillRoundRect(x: number = 1, y: number = 1, w: number = 3, h: number = 3, r: number = 2): void {
        return;
    }

    /**
     * Draws a triangle on the OLED display with points x0/y0, x1/y1, x2/y2
     * @param x0 x0 (in pixels)
     * @param y0 y0 (in pixels)
     * @param x1 x1 (in pixels)
     * @param y1 y1 (in pixels)
     * @param x2 x2 (in pixels)
     * @param y2 y2 (in pixels)
     */
    //% weight=88
    //% blockId=oled_drawTriangle
    //% block="draw triangle with x0 %x0|y0 %y0|x1 %x1|y1 %y1|x2 %x2|y2 %y2"
    //% icon="\uf1ec" 
    //% shim=OLED_SSD1306::drawTriangle
    export function drawTriangle(x0: number = 1, y0: number = 1, x1: number = 3, y1: number = 3, x2: number = 1, y2: number = 3): void {
        return;
    }

    /**
     * Draws a filled triangle on the OLED display with points x0/y0, x1/y1, x2/y2
     * @param x0 x0 (in pixels)
     * @param y0 y0 (in pixels)
     * @param x1 x1 (in pixels)
     * @param y1 y1 (in pixels)
     * @param x2 x2 (in pixels)
     * @param y2 y2 (in pixels)
     */
    //% weight=87
    //% blockId=oled_fillTriangle
    //% block="fill triangle with x0 %x0|y0 %y0|x1 %x1|y1 %y1|x2 %x2|y2 %y2"
    //% icon="\uf1ec" 
    //% shim=OLED_SSD1306::fillTriangle
    export function fillTriangle(x0: number = 1, y0: number = 1, x1: number = 3, y1: number = 3, x2: number = 1, y2: number = 3): void {
        return;
    }
}
