#!/bin/sh
find . -type f -execdir basename '{}' ';' | grep .sh$ | sed 's/\.sh.*//'