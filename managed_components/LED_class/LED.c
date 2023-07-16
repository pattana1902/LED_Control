#include "LED.h"
#include "driver/gpio.h"

void LED_init(void)
{
    
}

void LED_set(int pin, int state)
{
    gpio_set_direction(pin, GPIO_MODE_OUTPUT);
    gpio_set_level(pin, state);
}

void LED_toggle(int pin)
{
    gpio_set_direction(pin, GPIO_MODE_OUTPUT);
    int state = gpio_get_level(pin);
    gpio_set_level(pin, !state);
}
