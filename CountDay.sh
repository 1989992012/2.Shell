#!/bin/bash

function is_run () {
    if [[ $[ $1%4 ] -eq 0 ]] && [[ $[ $1%100 ] -ne 0 ]] || [[ $[ $1%400 ] -eq 0 ]]; then
        #echo "$1 是闰年"
        echo 0
    else 
        #echo "$1 不是闰年"
        echo 1
    fi
}
read y
read n
max=0
#is_run ${y}
for((i=0;i<n;i++));do
if [[ `is_run $y` -eq 0 ]]; then
    max=$[366+$max]
else 
    max=$[365+$max]
fi
y=$[$y+1]
done
echo $max

