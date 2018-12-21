# show number on OLED

Displays a number on the OLED module.

```sig
OLED_SSD1306.showNumber(number)
```

The ``init`` block must be placed before this.

## Parameters

* **number**: the number to display.

## Example

```blocks
OLED_SSD1306.init(64, 128)
OLED_SSD1306.showNumber(100)
```

# See also
[``||init||``](/reference/oled/init),[``||showString||``](/reference/oled/showstring)
