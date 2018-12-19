Forked from https://github.com/xuefengedu/pxt-oled-ssd1306_CN

# SSD1306 OLED driver for MakeCode (PXT) for the calliope mini board

1. Initial Upload
 
## Usage

1. Add as additional package in Editor https://makecode.calliope.cc

2. You'll get an additional menu entry "OLED"


## Screen shots

None


# SSD1306 OLED MakeCode Package [![Build Status](https://travis-ci.org/Tinkertanker/pxt-oled-ssd1306.svg?branch=master)](https://travis-ci.org/Tinkertanker/pxt-oled-ssd1306)


This is the MakeCode Package for SSD1306 OLED controller, based on the Adafruit Arduino library available [here](https://github.com/adafruit/Adafruit_SSD1306).

## Hardware Setup
1. Insert the OLED display into the I2C ports on the break out board.

## Blocks
### Initialize OLED Display
Initializes the OLED display.

Sets up the OLED display and prepares it for use by the calliope mini.

```sig
OLED.init(64, 128);
```

This block must be placed before any of the ``show`` blocks.


### Show String
Displays a string on the OLED module.

```sig
OLED.showString("Hello from calliope!")
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

* for PXT/calliope mini
## Footnotes

1.  Datasheet https://cdn-shop.adafruit.com/datasheets/SSD1306.pdf
