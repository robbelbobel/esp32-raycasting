cmake_minimum_required(VERSION 4.4.0)

find_package(Zephyr)
project(raycasting)

target_sources(app PRIVATE src/main.c)
