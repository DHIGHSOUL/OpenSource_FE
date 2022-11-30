#!/bin/bash
# 사용법 : ./wc2.bash 파일
# 명령줄 인수 개수를 확인하고 wc 명령어를 실행한다.

if (( $# != 1 ))
then
echo 사용법: $0 파일
exit 1
fi
file=$1
wc $1