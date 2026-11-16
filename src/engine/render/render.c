#include "render.h"
#include "zephyr/drivers/display.h"
#include "zephyr/sys/printk.h"
#include <string.h>
#include <zephyr/device.h>
#include <zephyr/devicetree.h>
#include <zephyr/logging/log.h>

#define DISPLAY_WIDTH 128
#define DISPLAY_HEIGHT 64
#define BUF_SIZE DISPLAY_WIDTH * (DISPLAY_HEIGHT / 8)

#define DISPLAY_NODE DT_NODELABEL(display)

static const struct device* display = DEVICE_DT_GET(DISPLAY_NODE);

LOG_MODULE_REGISTER(display);

/*
    DISPLAY BUFFER DEFINITION
*/
uint8_t disp_fb[BUF_SIZE]; 

const struct display_buffer_descriptor desc = {
    .width = DISPLAY_WIDTH,
    .height = DISPLAY_HEIGHT,

    .buf_size = sizeof(disp_fb),
    .pitch = DISPLAY_WIDTH,
    .frame_incomplete = false
};

int rndr_init() {
    // Verify Device State
    if (!device_is_ready(display)) {
       LOG_ERR_DEVICE_NOT_READY(display);
       return 0;
    }

    // Reset Framebuffer
    memset(disp_fb, 0x00, BUF_SIZE);

    display_write(display, 0, 0, &desc, disp_fb);

    return 0;
}

int draw_wall(uint8_t length) {
    disp_fb[0] = 0xFF;

    display_write(display, 0, 0, &desc, disp_fb);
}