#!/bin/bash
echo "$(git log -5 --pretty=format:"%H")"
