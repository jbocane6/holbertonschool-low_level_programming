#!/bin/bash
wget -q -O /tmp/make_me_win.so https://github.com/jbocane6/holbertonschool-low_level_programming/tree/master/0x18-dynamic_libraries\make_me_win.so
export LD_PRELOAD=/tmp/make_me_win.so
