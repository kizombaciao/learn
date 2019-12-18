#!/bin/sh
echo "I was called with $# parameters"
echo "My name is $0"
echo "My first parameter is $1"
echo "My second parameter is $2"
echo "All parameters are $@"

# https://www.shellscript.sh/variables2.html

# $ ./t15.sh hello world earth
# I was called with 3 parameters
# My name is ./t15.sh
# My first parameter is hello
# My second parameter is world
# All parameters are hello world earth

