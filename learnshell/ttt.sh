!/bin/bash

MD5SUM='cat /root/crontabsum'
NEWSUM='md5sum /etc/crontab | cut -d " " -f 1'

if [ "$MD5SUM" != "$NEWSUM" ]
then
	md5sum /etc/crontab | cut -d " " -f 1 > /root/crontabsum
	mail -s "The file crontab was modified" root@localhost.com < /etc/crontab
fi

# add this line to /etc/crontab
# 0 0    0 * 0-6   root    sh /root/crontab_check.sh

