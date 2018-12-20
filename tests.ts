// tests go here; this will not be compiled when this package is used as a library

OLED_SSD1306.init(64, 128)
OLED_SSD1306.showString("Hello world from calliope!")
OLED_SSD1306.showString("counter:")
let item = 0
basic.forever(() => {
    basic.pause(1000)
    item += 1
    OLED_SSD1306.showNumber(item)
})
