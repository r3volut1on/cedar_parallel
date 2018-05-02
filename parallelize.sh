#!/bin/sh

find . -type f -print0 | xargs -0 gawk -i inplace '/for \(/ {print "#pragma acc kernels"}1'
find . -type f -print0 | xargs -0 gawk -i inplace '/for\(/ {print "#pragma acc kernels"}1'
