#!/bin/bash
read -p "enter minimum: " minval
read -p "enter maximum: " maxval

for ((x=minval; x<=maxval; x++))
do
  echo -e "x= $x and count = `ls tile_${x}_* | wc -l` " 
done
