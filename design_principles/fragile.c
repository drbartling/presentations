void
sdcard_init(void) {
    spi_init(mode_0, card_cs_pin);
    fat_init();
}

void
sensor_init(void) {
    spi_init(mode_0, sensor_cs_pin);
    spi_write(SENSOR_CONFIGURATION, sensor_cs_pin);
}
