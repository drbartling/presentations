#include "mcu.h"
#include <stdint.h>

// TPS = Temperature Sensor

static int const TPS_adc_counts_to_F(int const adc_sample) {
    return ((ADC1_sample_get() * 53) / 7);
}

static int const TPS_F_to_C(int const temperature_F) {
    return ((temperature_F - 32) * 5) / 9;
}

int TPS_temperature_F(int const adc_sample) {
    return TPS_adc_counts_to_F(adc_sample);
}

int TPS_temperature_C(int const adc_sample) {
    int temperature_F = TPS_temperature_F(adc_sample);
    return TPS_F_to_C(temperature_F);
}
