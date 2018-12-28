let alpha = 0
oled_ssd1306.initDisplay(64, 128, 120)
oled_ssd1306.printString("Hallo")
oled_ssd1306.initDrawLine2(63, 31, 30)
alpha = 0
while (alpha < 360) {
    oled_ssd1306.drawLine2(alpha)
    alpha += 10
}
basic.forever(() => {
    basic.showLeds(`
        . . . . .
        . # . # .
        . . . . .
        # . . . #
        . # # # .
        `)
    basic.showLeds(`
        . . . . .
        . . . . .
        . . . . .
        . . . . .
        . . . . .
        `)
})