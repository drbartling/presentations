void
sdcard_init(void) {
    while(spi_success != spi_acquire(mode_0, card_cs_pin)) {}
    fat_init();
    spi_release();
}

void
sensor_init(void) {
    while(spi_success != spi_acquire(mode_1, sensor_cs_pin)) {}
    spi_write(SENSOR_CONFIGURATION, sensor_cs_pin);
    spi_release();
}
