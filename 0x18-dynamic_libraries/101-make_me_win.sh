#!/bin/bash
wget -P .. https://github.com/amanz25/alx-low_level_programming/raw/master/0x18-dynamic_libraries/libmy.so
export LD_PRELOAD=/tmp/libmy.so
