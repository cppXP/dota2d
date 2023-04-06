#!/bin/bash
# this file gives as argumans: minX maxX minY maxY

function regularDownload()
{
	echo -e "regular-download : (run task via only this terminal)"
	read -p "Are you sure to start (regular-download)? [Y/n] " response
	case $response in
		y|Y|yes|YES)
						for ((x=$1; x<=$2; x++))
						do
							for ((y=$3; y<=$4; y++))
							do
								echo -e "downloading picture pos $x - $y"
								wget "https://storage.googleapis.com/tiles-bucket/dota2/7.24/${5}/tile_${x}_${y}.jpg" 1>/dev/null
							done
						done
						echo -e "this script is done with x:($minx)($maxx) y:($miny)($maxy)"
						;;
		*)
				echo -e "you didnt enter y to start."
		;;
	esac
}
