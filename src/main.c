#include <zephyr/devicetree.h>
#include <zephyr/device.h>
#include <zephyr/logging/log.h>
#include <zephyr/sleep.h>

#define DISPLAY_NODE DT_NODELABEL(display)

const struct device* display = DEVICE_DT_GET(DISPLAY_NODE);

LOG_MODULE_REGISTER(display);

int main () {
    if (!device_is_ready(display)) {
       LOG_ERR_DEVICE_NOT_READY(display);
       return 0; 
    }

    for (uint16_t i = 0; i < 255; i++) {

        k_msleep(100);
    }

    return 0;
}