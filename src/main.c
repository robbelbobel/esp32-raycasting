#include <zephyr/devicetree.h>
#include <zephyr/device.h>
#include <zephyr/logging/log.h>
#include <zephyr/sleep.h>

#include "game/game.h"

int main () {
    // Initialize Game
    game_init();

    return 0;
}