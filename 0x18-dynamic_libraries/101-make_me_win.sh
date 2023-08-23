#!/bin/bash
wget -P /tmp https://github.com/ugwujustine/alx-low_level_programming/raw/master/0x18-dynamic_libraries/let_me_win.so
export LD_PRELOAD=/tmp/let_me_win.so
