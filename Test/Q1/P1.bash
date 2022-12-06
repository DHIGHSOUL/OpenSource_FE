#!/bin/bash
# 메뉴에 따라 해당 명령어를 실행한다.

echo 명령어 메뉴
cat << MENU
    p : 현재 디렉터리의 절대 경로 보여주기
    w : 현재 userid 보여주기
    u : 시스템정보 보여주기
    q : 끝냄
MENU
stop=0

while (( $stop == 0 ))
do
    echo -n '? '
    read reply
    case $reply in
        "p") pwd;;
        "w") whoami;;
        "u") uname -a;;
        "q") stop=1;;
        *) echo 잘못된 선택::
    esac
done