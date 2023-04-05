#!/bin/bash

if [ $# -ge 1 ]; then
    EXECUTABLES=$@
else
    echo "::error file='<not found>',line=1,endLine=0,title='<file not found>'::There was no executable(s) specified for the check"
    exit 1
fi

for EXE in $EXECUTABLES; do
    if [ ! -e "$EXE" ]; then
        echo "::error file=$EXE,line=1,endLine=0,title='NOT FOUND' ::The file '$EXE' does not exist"
        exit 1
    fi
done