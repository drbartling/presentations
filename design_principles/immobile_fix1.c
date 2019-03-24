#include "temperature_sensor.h"

#include <mcu.h>
#include <stdint.h>

uint16_t
oven_temperature(void) {
    ADC1_start_conversion();
    while(!ADC1_done()) {}
    return ((ADC1_sample_get() * 53) / 7);
}