#!/bin/bash

dir_path=$1
string_to_be_searched=$2

if [ $# -eq 2 ]
then
	if [ -d ${dir_path} ]
	then
		num_files=`grep -rl ${string_to_be_searched} ${dir_path}| wc -l`
		num_lines=`grep -rn ${string_to_be_searched} ${dir_path}| wc -l`
		echo "The number of files are ${num_files} and the number of matching lines are ${num_lines}"
	else
		echo "Directory ${dir_path} doesn't exist!"
		exit 1
	fi
else
	echo "Insufficient argument!"
	exit 1
fi

