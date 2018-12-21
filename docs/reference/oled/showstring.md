# show string on OLED

Displays a string on the OLED module.

```sig
OLED_SSD1306.showString(text)
```

The ``init`` block must be placed before this.

## Parameters

* **text**: the string to display.

## Example

```blocks
OLED_SSD1306.init(64, 128)
OLED_SSD1306.showString("Hello from calliope!")
```

# See also
[``||init||``](/reference/oled/init),[``||showNumber||``](/reference/oled/shownumber)
