// tests go here; this will not be compiled when this package is used as a library

oles_ssd1306.init(64, 128)
oled_ssd1306.showString("Hello world from calliope!")
oled_ssd1306.showString("counter:")
let item = 0
basic.forever(() => {
    basic.pause(1000)
    item += 1
    oled_ssd1306.showNumber(item)
})
