#!/bin/sh
read -p "x>" x
  if [[ "$x" -lt "0" ]]; then
    y=$((x*(-1)));
    z=1;
  elif [[ "$x" == "0" ]]; then
    z=0;
  else
    y=$x;
    z=1;
  fi
  for ((;y;)); do
    z=$((z*(y%10)));
    y=$((y/10));
  done;
  if [[ "$x" -lt "0" ]]; then
    z=$((z*(-1)));
  fi

echo $z
