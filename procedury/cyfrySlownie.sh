#!/bin/bash#!/bin/bash

declare -a digits=("zero" "jeden" "dwa" "trzy" "cztery" "pięć" "sześć" "siedem" "osiem" "dziewięć")
read -p "string> " string
output=""
regexp="^[0-9]+$"
for((i=0; i<${#string};i++)); do
  if [ ${string:$i:1}  -eq ${string:$i:1}  2>/dev/null ]; then
      output="$output ${digits[${string:$i:1}]}";
  else
    echo "\"${string:$i:1}\" nie jest cyfrą i został pominięty"
  fi
done
echo $output

declare -a digits=("zero" "jeden" "dwa" "trzy" "cztery" "pięć" "sześć" "siedem" "osiem" "dziewięć")
read -p "string> " string
output=""
regexp="^[0-9]+$"
for((i=0; i<${#string};i++)); do
  if [ ${string:$i:1}  -eq ${string:$i:1}  2>/dev/null ]; then
      output="$output ${digits[${string:$i:1}]}";
  else
    echo "\"${string:$i:1}\" nie jest cyfrą i został pominięty"
  fi
done
echo $output
