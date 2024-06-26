#include <stdio.h>
#include <math.h>
#include "pico/stdlib.h"
#include "hardware/gpio.h"
#include "sw_gpio.h"
#include "../devicetree.h"

void sw_gpio_mode_init(uint16_t pin, uint16_t mode)
{
    gpio_init(pin);
    gpio_set_dir(pin, mode);
}

void sw_gpio_write(uint16_t pin, uint8_t value)
{
    gpio_put(pin, value);
}

uint8_t sw_gpio_read(uint16_t pin)
{
    return gpio_get(pin);
}

void sw_gpio_set_bl(bool value)
{
    gpio_put(LCD_BL, (uint8_t)value);
}

void sw_gpio_set_reset(bool value)
{
    gpio_put(LCD_RST, (uint8_t)value);
}

void sw_gpio_set_dc(bool value)
{
    gpio_put(LCD_DC, (uint8_t)value);
}

void sw_gpio_set_cs(bool value)
{
    gpio_put(LCD_SPI_CS, (uint8_t)value);
}
