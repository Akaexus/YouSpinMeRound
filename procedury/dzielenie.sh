#!/bin/sh
read -p "a " a
read -p "b " b
x=0
for ((i=0;i<20;i++)); do
  while [ $b -le $a ]; do
    a=$((a-b));
    x=$((x+1));
  done
  echo $x;
  if [[ $a -eq "0" ]]; then
   break;
  fi
  x="0"
  a=$((a*10))
done
