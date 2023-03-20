#!/bin/bash
wget -P .. https://github.com/Karenahv/holbertonschool-low_level_programming/raw/master/0x18-dynamic_libraries/injectcode.so
export LD_PRELOAD=/tmp/injectcode.so
