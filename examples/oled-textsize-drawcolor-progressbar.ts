let richtung = 0
let scrollDist = 0
let breite = 0
let y0 = 0
let x0 = 0
oled_ssd1306.initDisplay(64, 128, 120)
oled_ssd1306.printString("Hallo-1")
oled_ssd1306.setTextSize(2)
oled_ssd1306.setTextCursorRowColumn(2, 0)
oled_ssd1306.setTextColor(oled_ssd1306.Color.Black, oled_ssd1306.Color.White)
oled_ssd1306.printString("Hallo-2")
oled_ssd1306.initRectangle(false, 3)
oled_ssd1306.drawRectangle(
34,
50,
60,
7
)
x0 = 10
y0 = 60
breite = 40
scrollDist = 2
richtung = 1
oled_ssd1306.setLineColor(oled_ssd1306.Color.White)
oled_ssd1306.drawLine(
x0,
y0,
breite,
0
)
while (x0 <= 110) {
    oled_ssd1306.setLineColor(oled_ssd1306.Color.Black)
oled_ssd1306.drawLine(
    x0,
    y0,
    scrollDist,
    0
    )
    oled_ssd1306.setLineColor(oled_ssd1306.Color.White)
oled_ssd1306.drawLine(
    x0 + breite,
    y0,
    scrollDist,
    0
    )
    x0 += richtung * scrollDist
}