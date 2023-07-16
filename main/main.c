#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "driver/gpio.h"
#include "LED.h"

#define LED_PIN_1 GPIO_NUM_2
#define LED_PIN_2 GPIO_NUM_4
#define LED_PIN_3 GPIO_NUM_5
#define LED_PIN_4 GPIO_NUM_12
#define LED_PIN_5 GPIO_NUM_13
#define LED_PIN_6 GPIO_NUM_14
#define LED_PIN_7 GPIO_NUM_15
#define LED_PIN_8 GPIO_NUM_16

void app_main(void)
{
    LED_init();

    while (1)
    {
        LED_toggle(LED_PIN_1); // Toggle LED 1
        vTaskDelay(1000); // Delay for 1000 milliseconds (1 second)
        
        LED_toggle(LED_PIN_2); // Toggle LED 2
        vTaskDelay(1000); // Delay for 1000 milliseconds (1 second)
       
    }
}
