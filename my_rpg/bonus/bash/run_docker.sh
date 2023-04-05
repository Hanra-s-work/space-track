#!/bin/bash

function display_help() {
    if [ $1 == "-h" ] || [ $1 == "--help" ] || [ $1 == "/?" ]; then
        echo "Usage: $0 [command]"
        echo "Runs the specified command in the Epitech Docker container."
        echo "If no command is specified, the container will not be run and the return code will be 1."
        echo "The current directory will be mounted to /home/code in the container."
        echo "The container will be removed after the command is run."
        exit 0
    fi
}

if [ $# -ge 1 ]; then
    display_help $1
    sudo docker run --rm -v $(pwd):/home/code -w /home/code epitechcontent/epitest-docker /bin/bash -c "$@;exit $?"
else
    echo "::error file='<not found>',line=1,endLine=0,title='<command not found>'::There was no command specified"
    exit 1
fi