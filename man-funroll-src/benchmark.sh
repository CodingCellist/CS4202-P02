#!/usr/bin/env bash

echo "Using programs in build"
DATAFILE="./data/manual_optim.csv"
echo "writing to ${DATAFILE}"
echo "program,utime" > "${DATAFILE}"
for I in build/*; do
    echo "on program '${I}'"
    for iter in $(seq 10); do
        $( { TIMEFORMAT="${I},%4U" ; time "./${I}" > /dev/null ; } 2>> "${DATAFILE}" );
    done;
    echo "done"
done;
echo ""
echo "Done."
