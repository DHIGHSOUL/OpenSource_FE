#!/bin/bash
# 사용법 : ./reply.bash
# 계속 입력여부를 확인하고 프린트한다.

echo -n "계속 하시겠습니까? [Y/n]"
read reply
if [ $reply == "Y" ]
then
echo 예
elif [ $reply == "n" ]
then
echo 아니오
fi