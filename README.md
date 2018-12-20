Forked from https://github.com/xuefengedu/pxt-oled-ssd1306_CN which bases on https://github.com/Tinkertanker/pxt-oled-ssd1306

# Handles OLED using controller chip SSD1306 for calliope mini in MakeCode (PXT)


1. Forked
2. Changed name space to OLED_SSD1306
3. ! Warning: under development !
4. Added more functions:
```
    "OLED_SSD1306.setTextCursorToXY|block": " x %x|y %y",
    "OLED_SSD1306.setTextCursorToRowCol|block": " row %row|column %column"
```
 
## Usage

1. Open editor https://makecode.calliope.cc/
2. Load additional package https://github.com/BCoDTT/pxt-calliope-SSD1306
3. The additional menu entry OLED_SSD1306 is available

## Screen shots

None


# SSD1306 OLED MakeCode Package [![Build Status](https://travis-ci.org/Tinkertanker/pxt-oled-ssd1306.svg?branch=master)](https://travis-ci.org/Tinkertanker/pxt-oled-ssd1306)

This is the MakeCode Package for SSD1306 OLED controller, based on the Adafruit Arduino library available [here](https://github.com/adafruit/Adafruit_SSD1306).

## Hardware Setup
1. Connect the OLED display with the I2C (A0) port on the calliope mini or in one of the I2C ports on a break out board.

! Attention: The pinout of the (my) OLED board is GND | VCC | SCL | SDA, so to connect it correctly to the calliope mini I2C port (A0) the wires for SCL and SDA have to be crossed.

## Blocks
### Initialize OLED Display
Initializes the OLED display.

Sets up the OLED display and prepares it for use by the micro:bit.

```sig
OLED_SSD1306.init(64, 128);
```

This block must be placed before any of the ``show`` blocks.


### Set text cursor to coodrinates x/y
Sets the text cursor to the coordinates x/y for printing  a string on the OLED module.

```sig
OLED_SSD1306.setTextCursorToXY(x, y)
```

### Set text cursor to row/column
Sets the text cursor to the row/column for printing  a string on the OLED module.

```sig
OLED_SSD1306.setTextCursorToRowColumn(row, column)
```


### Show String
Displays a string on the OLED module.

```sig
OLED_SSD1306.showString("hello, micro:bit!")
```

The ``init`` block must be placed before this.


### Show Number
Displays a number on the OLED module.

```sig
OLED_SSD1306.showNumber(123)
```

The ``init`` block must be placed before this.


### Clear Display
Clears the display.

```sig
OLED_SSD1306.clear()
```

The ``init`` block must be placed before this.

## Example: Counter
The following code is a simple counter that displays an increasing number every second.

```blocks
OLED_SSD1306.init(64, 128)
let item = 0
basic.forever(() => {
    basic.pause(1000)
    item += 1
    OLED_SSD1306.showNumber(item)
})
```

## Supported targets

* for MakeCode (PXT) / calliope mini (and micro:bit) boards.

## Footnotes

1.  Datasheet https://cdn-shop.adafruit.com/datasheets/SSD1306.pdf

