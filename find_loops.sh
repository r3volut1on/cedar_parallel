#!/bin/sh

LOCATION="cedar/processing/."

#Spring 2018/COEN 4998/cedar_parallel

grep -Ril "for (" "${LOCATION}"  > ~/Desktop/for_files.txt
grep -Ril "for(" "${LOCATION}" >> ~/Desktop/for_files.txt
