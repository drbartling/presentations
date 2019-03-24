// temperature_sensor.h

typedef int (*counts_to_F_function)(int const /*adc_counts*/);
...

// temperature_sensor.c
#include <assert.h>
#include <stddef.h>

static counts_to_F_function adc_counts_to_degrees_F = NULL;

void
TPS_set_temperature_conversion(counts_to_F_function user_function) {
    adc_counts_to_degrees_F = user_function;
}

int
TPS_temperature_F(int const adc_sample) {
    assert(
        (NULL != adc_counts_to_degrees_F)
        && "You must call TPS_set_temperature_conversion first");
    return adc_counts_to_degrees_F(adc_sample);
}
