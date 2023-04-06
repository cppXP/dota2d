#!/bin/bash
source ./quickDownload.sh
source ./regularDownload.sh

#main page is https://statbanana.com/dota2/viewer
#download from https://storage.googleapis.com/tiles-bucket/dota2/7.24/4/tile_63_61.jpg


#size 1 max size = https://storage.googleapis.com/tiles-bucket/dota2/7.24/1/tile_7_0.jpg
#size 2 max size = 15
#size 3 max size = 31
#size 4 max size = 63

read -p "enter miniumum x: " minx
read -p "enter maximum x: " maxx

read -p "enter miniumum y: " miny
read -p "enter maximum y: " maxy

read -p "enter picture size (1-4): " picsize

echo -e "values are x = $minx , $maxx and y = $miny ,$maxy and picture size directory = $picsize"

read -p "Regular or Quick download? [R/q] " download_mode
case $download_mode in
	R|r|regular|REGULAR|Regular)
		regularDownload $minx $maxx $miny $maxy $picsize
	;;

	Q|q|quick|QUICK|Quick)
		quickDownload $minx $maxx $miny $maxy $picsize
	;;

	*)
		echo -e "cant undrestand your input.. bye."
		;;
esac
