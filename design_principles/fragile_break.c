void sdcard_init(void) {
    spi_init(mode_0, card_cs_pin);
    fat_init();
}

void sensor_init(void) {
    spi_init(mode_1, sensor_cs_pin); // Breaks the sd card
    spi_write(SENSOR_CONFIGURATION, sensor_cs_pin);
}
