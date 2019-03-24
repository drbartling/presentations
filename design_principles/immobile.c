#include "temperature_sensor.h"

#include <mcu.h>
#include <stdint.h>

uint16_t
oven_temperature(void) {
    adccon |= 1 << 3;              // Start adc conversion
    while(!(adccon & (1 << 0))) {} // While not done
    return ((adcsamp * 53) / 7);
}