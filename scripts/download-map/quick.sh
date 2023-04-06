#!/bin/bash
# this file gives as argumans: minX maxX minY maxY
						for ((x=$1; x<=$2; x++))
						do
							for ((y=$3; y<=$4; y++))
							do
								echo -e "downloading picture pos $x - $y"
								wget "https://storage.googleapis.com/tiles-bucket/dota2/7.24/4/tile_${x}_${y}.jpg" 1>/dev/null
							done
						done
						echo -e "this script is done with x:($minx)($maxx) y:($miny)($maxy)"
