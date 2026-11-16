#ifndef RENDER_H
#define RENDER_H

#include <zephyr/drivers/display.h>
#include <zephyr/device.h>

/*
    Initialize Renderer

    @retval Error during initialization process
*/
int rndr_init();

int draw_wall(uint8_t length);

#endif