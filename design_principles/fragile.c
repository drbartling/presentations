#include "mcu.h"

void sdcard_init(void) {
    spi_init(mode_0);
    fat_init();
}

void sensor_init(void) {
    spi_init(mode_0);
    spi_write(SENSOR_CONFIGURATION, sensor_cs_pin);
}
