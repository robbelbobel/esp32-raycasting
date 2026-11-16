cmake_minimum_required(VERSION 3.20.0)

find_package(Zephyr)
project(raycasting)

target_sources(app PRIVATE src/main.c src/game/game.c src/engine/render/render.c)
