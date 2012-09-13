#! /bin/bash
filelist=`cat filelist.txt`
for i in $filelist
do
  gnuplot << eof
  set term png
  set datafile separator ","
  set xlabel "time"
  set ylabel "lbn"
  set size 2,2
  !echo plotting $i
  set output "$i.png"
  plot "$i" using 1:5 with point pointtype 0 pointsize 1
eof
done
