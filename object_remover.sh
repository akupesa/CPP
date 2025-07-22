#!/bin/bash
MAIN_DIRECTORY=/home/akupesa/_cursus/CPP/

if [[ "$1" == "-d" ]]; then

	echo "!Object Files Remover!"
	rm -rf $MAIN_DIRECTORY/*/*/*.o > /dev/null
	rm -rf $MAIN_DIRECTORY/*/*.o > /dev/null
	echo "All objects were removed!"
else
	if [[ "$2" == "" ]];then
		MAIN_DIRECTORY="$2"
		echo "!Object Files Remover!"
		rm -rf $MAIN_DIRECTORY/*/*/*.o > /dev/null
		rm -rf $MAIN_DIRECTORY/*/*.o > /dev/null
		echo "All objects were removed!"
	else
		echo "./$0 -d 'DIR'"
	fi
fi
