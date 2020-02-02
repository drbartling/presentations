#include "mcu.h"

void sys_init(void) { spi_init(mode_0); }

void sdcard_init(void) {
    assert(mode_0 == spi_mode_get() && "Wrong spi mode for sdcard");
    fat_init();
}

void sensor_init(void) {
    assert(mode_0 == spi_mode_get() && "Wrong spi mode for sensor");
    spi_write(SENSOR_CONFIGURATION, sensor_cs_pin);
}
