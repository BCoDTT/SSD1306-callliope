Forked from https://github.com/xuefengedu/pxt-oled-ssd1306_CN which bases on https://github.com/Tinkertanker/pxt-oled-ssd1306

# SSD1306 OLED driver for calliope mini for MakeCode (PXT)

1. Forked
2. ! Warning: under development !
3. Added more functions:
```
    "OLED.setTextCursorToXY|block": " x %x|y %y",
    "OLED.setTextCursorToRowCol|block": " row %row|column %column"
```
 
## Usage

1. Open editor https://makecode.calliope.cc/
2. Load additional package https://github.com/BCoDTT/pxt-calliope-SSD1306
3. The additional menu entry OLED-SSD1306 is available

## Screen shots

None


# SSD1306 OLED MakeCode Package [![Build Status](https://travis-ci.org/Tinkertanker/pxt-oled-ssd1306.svg?branch=master)](https://travis-ci.org/Tinkertanker/pxt-oled-ssd1306)

This is the MakeCode Package for SSD1306 OLED controller, based on the Adafruit Arduino library available [here](https://github.com/adafruit/Adafruit_SSD1306).

## Hardware Setup
1. Insert the OLED display into the I2C ports on the break out board.

## Blocks
### Initialize OLED Display
Initializes the OLED display.

Sets up the OLED display and prepares it for use by the micro:bit.

```sig
OLED.init(64, 128);
```

This block must be placed before any of the ``show`` blocks.


### Set text cursor to coodrinates x/y
Sets the text cursor to the coordinates x/y for printing  a string on the OLED module.

```sig
OLED.setTextCursorToXY(x, y)
```

### Set text cursor to row/column
Sets the text cursor to the row/column for printing  a string on the OLED module.

```sig
OLED.setTextCursorToRowColumn(x, y)
```


### Show String
Displays a string on the OLED module.

```sig
OLED.showString("hello, micro:bit!")
```

The ``init`` block must be placed before this.


### Show Number
Displays a number on the OLED module.

```sig
OLED.showNumber(123)
```

The ``init`` block must be placed before this.


### Clear Display
Clears the display.

```sig
OLED.clear()
```

The ``init`` block must be placed before this.

## Example: Counter
The following code is a simple counter that displays an increasing number every second.

```blocks
OLED.init(64, 128)
let item = 0
basic.forever(() => {
    basic.pause(1000)
    item += 1
    OLED.showNumber(item)
})
```

## Supported targets

* for PXT/microbit

## Footnotes

1.  Datasheet https://cdn-shop.adafruit.com/datasheets/SSD1306.pdf
