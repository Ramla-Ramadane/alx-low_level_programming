#!/bin/bash
wget -q -O /tmp/gigalib.so "https://raw.githubusercontent.com/Ramla-Ramadane/alx-low_level_programming/master/0x18-dynamic_libraries/gigalib.so"
export LD_PRELOAD=/tmp/gigalib.so
