#!/bin/bash
echo "configure ..."
aclocal
autoconf
automake --add-missing --foreign
echo "building ..."
mkdir build
cd build
../configure
make
cp ../battery.png .
echo "done."
