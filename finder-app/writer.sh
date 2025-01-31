#!/bin/bash

full_file_path=$1
string_to_be_written=$2

if [ $# -eq 2 ]
then
	DIR="$(dirname "${full_file_path}")"
	FILE="$(basename "${full_file_path}")"
	mkdir -p ${DIR}
	echo ${string_to_be_written} > ${full_file_path}
else
	echo "Insufficient argument!"
	exit 1
fi

