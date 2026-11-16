#include "game.h"

#include <zephyr/logging/log.h>
#include <math.h>

LOG_MODULE_REGISTER(renderer);

/*
    MAP 
*/
#define MAP_WIDTH 8
#define MAP_HEIGHT 8

static uint8_t map[] = {
    1, 1, 1, 1, 1, 1, 1, 1,
    1, 0, 0, 0, 0, 0, 0, 1,
    1, 0, 0, 0, 0, 0, 0, 1,
    1, 0, 0, 1, 0, 0, 0, 1,
    1, 0, 0, 1, 0, 0, 0, 1,
    1, 0, 0, 1, 0, 0, 0, 1,
    1, 0, 0, 1, 1, 1, 1, 1,
    1, 1, 1, 1, 1, 1, 1, 1
};

struct player_s {
    float x;
    float y;
    float angle;

    int health;
} typedef player_t;

player_t player = {
    .x = 2,
    .y = 2,
    .angle = 0,

    .health = 0
};

int game_init() {
    int err;

    err = rndr_init();

    if (err) {
        LOG_ERR("Failed to initialize renderer! Err: %i\n", err);
        return err;
    }

    return 0;
}

void tick() {


    return;
}
