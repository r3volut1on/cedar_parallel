#!/bin/sh
CEDAR="/Users/matthewkinzler/OneDrive/Documents/Marquette/Senior_Year/Spring 2018/COEN 4998/cedar_parallel/cedar-release-0d012d4af2ba/cedar/"

#find . -type f -print0 | xargs -0 gawk -i inplace '/for \(/ {print "#pragma acc kernels{"}1' |
#find . -type f -print0 | xargs -0 gawk -i inplace '/for\(/ {print "#pragma acc kernels"}1'

find testfiles -type f -print0 | xargs -0 gawk -i inplace 'BEGINFILE{x=0} /for \(/ && !x {print "#pragma acc kernels"; x=1}1'
find testfiles -type f -print0 | xargs -0 gawk -i inplace 'BEGINFILE{x=0} /for\(/ && !x {print "#pragma acc kernels"; x=1}1'
