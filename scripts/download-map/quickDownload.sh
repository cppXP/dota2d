source ./regularDownload.sh

function quickDownload()
{
	echo -e "recived parameters are : $1 $2 $3 $4"

	echo -e "quick-download : (run task via more than one terminal)"
	read -p "Are you sure to start (quick-download)? [Y/n] " response
	case $response in
		y|Y|yes|YES)
            default_terminal_count=0
            # read -t 15 -p "enter integer value of how many terminals you want to run this proccess(default is your value will divide by 5)\n you have 15 seconds left to enter a value or automatically will use default: " terminal_count
            # if [[ $terminal_count = $default_terminal_count ]]
            # then
							# echo -e "im after if condition"
              terminal_count=`expr $2 - $1`
							terminal_count=`expr $terminal_count / 5`
							echo -e "terminal count = $terminal_count"
              for ((x=0; x<=terminal_count; x++))
              do
								echo -e "passing values are : $1 `expr $x \* 6` $3 $4 ."
								# gnome-terminal -e "./quick.sh $1  `expr $x \* 6` $3 $4"
								# terminator --new-tab
              done
            # else
            # fi
						;;
		*)
				echo -e "you didnt enter y to start."
		;;
	esac
}
