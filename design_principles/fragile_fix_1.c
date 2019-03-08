void
sdcard_init(void) {
    if(spi_success != spi_acquire(mode_0, card_cs_pin)) { return; }
    fat_init();
    spi_release();
}

void
sensor_init(void) {
    if(spi_success != spi_acquire(mode_1, sensor_cs_pin)) { return; }
    spi_write(SENSOR_CONFIGURATION, sensor_cs_pin);
    spi_release();
}
