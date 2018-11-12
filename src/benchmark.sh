#!/usr/bin/env bash

TIME=$(which time)

for D in build/*; do
    echo "Using programs in ${D}"
    OLDIFS=${IFS}
    IFS="/"
    read -ra FLAG <<< "${D}"
    DATAFILE="./data/${FLAG[1]}.csv"
    echo "writing to ${DATAFILE}"
    echo "program,utime" > "${DATAFILE}"
    IFS=${OLDIFS}
    for I in ${D}/*; do
        for iter in $(seq 10); do
            $( { ${TIME} -f "${I},%U" "./${I}" > /dev/null ; } 2>> "${DATAFILE}" );
        done;
    done;
    echo "Done."
    echo ""
done;
