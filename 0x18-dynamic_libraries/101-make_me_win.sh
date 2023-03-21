#!/bin/bash
wget -P .. https://github.com/amanz25/0x18.c/blob/master/libmy.so
export LD_PRELOAD=/tmp/libmy.so
