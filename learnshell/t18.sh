#!/bin/sh
echo -en "What is your name [ `whoami` ] "
read myname
if [ -z "$myname" ]; then
  myname=`whoami`
fi
echo "Your name is : $myname"

# if nothing entered, then $myname is set to 'whoami'
# https://www.shellscript.sh/variables3.html

