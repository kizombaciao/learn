
MMM='cat aaa.txt'
NNN='cat bbb.txt'

if [ "$MMM" != "$NNN" ]
then
    echo "NOT SAME"
else
    echo "SAME"
fi

#echo cat aaa.txt | md5sum

echo "$MMM"
echo $MMM

# THIS DOES NOT WORK!
# SEE EX04 IN SCRIPTS SECTION