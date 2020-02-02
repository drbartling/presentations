#include "mcu.h"

void sdcard_init(void) {
    spi_init(mode_0);
    fat_init();
}

void sensor_init(void) {
    spi_init(mode_1); // Breaks the sd card
    spi_write(SENSOR_CONFIGURATION, sensor_cs_pin);
}
