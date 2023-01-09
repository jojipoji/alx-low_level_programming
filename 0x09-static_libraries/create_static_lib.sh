#!/bin/bash
gcc -c *.c
ar -rc libmy.a *.c
ranlib libmy.a
