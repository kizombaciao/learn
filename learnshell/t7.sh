#!/bin/sh
while read f
do
  case $f in
	hello)		echo English	;;
	howdy)		echo American	;;
	gday)		echo Australian	;;
	bonjour)	echo French	;;
	"guten tag")	echo German	;;
	*)		echo Unknown Language: $f
		;;
   esac
done < myfile

# above code didn't work !
# https://www.shellscript.sh/loops.html
