#include "temperature_sensor.h"

#include <mcu.h>
#include <stdint.h>

// TPS = Temperature Sensor

static uint16_t const
TPS_get_adc_sample(void) {
    ADC1_start_conversion();
    while(!ADC1_done()) {}
    return ADC1_sample_get();
}

static int const
TPS_adc_counts_to_F(uint16_t const adc_sample) {
    return ((ADC1_sample_get() * 53) / 7);
}

int
TPS_temperature_F(void) {
    uint16_t sample = TPS_get_adc_sample();
    return TPS_adc_counts_to_F(sample);
}

int
TPS_temperature_C(void) {
    int temperature_F = TPS_temperature_F();
    return ((temperature_F - 32) * 5) / 9
}
