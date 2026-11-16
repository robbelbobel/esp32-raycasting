#include "render.h"
#include <zephyr/device.h>
#include <zephyr/devicetree.h>
#include <zephyr/logging/log.h>

#define DISPLAY_NODE DT_NODELABEL(display)

static const struct device* display = DEVICE_DT_GET(DISPLAY_NODE);

LOG_MODULE_REGISTER(display);

void rndr_init() {
    if (!device_is_ready(display)) {
       LOG_ERR_DEVICE_NOT_READY(display);
    }
}
