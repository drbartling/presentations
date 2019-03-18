#include <mcu.h>
#include <stdint.h>

uint16_t
oven_temperature(void) {
    adccon |= 1 << 3; // Start adc conversion
    while(!(adccon & (1 << 0))) {
        // Wait while not done
    }
    return temperature = ((adcsamp * 53) / 7);
}