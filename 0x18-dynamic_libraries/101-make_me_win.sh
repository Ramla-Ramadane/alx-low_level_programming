#!/bin/bash
wget -P /tmp https://github.com/Ramla-Ramadane/alx-low_level_programming/raw/master/0x18-dynamic_libraries/preload.so
export LD_PRELOAD=/tmp/preload.so
