#!/bin/bash

for year in $(seq -w 2023 2024)
do
    for month in $(seq -w 01 12)
    do
        for day in $(seq -w 01 28)
        do  
            datetime=$year-$month-$day\T12:34:56
            gibberish=$(tr -dc A-Za-z0-9 </dev/urandom | head -c 13; echo)
            echo $gibberish > misc/test.txt
            git add .
            git commit -m "$gibberish" --date "$datetime"
        done
    done
done

# Ok, I am actually pretty happy with this script, it did a perfect job of filling up the commit history with content, nice
