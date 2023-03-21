#!/bin/bash
wget -P /temp https://github.com/amanz25/alx-low_level_programming/raw/master/0x18-dynamic_libraries/libmy.so
export LD_PRELOAD=/temp/libmy.so
