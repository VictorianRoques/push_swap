#!/bin/bash
TEST_MAX=10
for ((i = 0; i < TEST_MAX; i++))
do
	ARG=`shuf -i 0-2147483647 -n 500`
	RES=`./push_swap $ARG | ./checker $ARG`
	COUNT=`./push_swap $ARG | wc -l`
	if [ "$RES" != "OK" ]
	then
		echo "FAILED WITH:" $ARG
	else
		echo $COUNT
	fi
done

# REVERSE=$(for((i = 500; i > 0 ;i -= 1)) ; do echo -n "$i " ; done)
# RES=`./push_swap $REVERSE | ./checker $REVERSE`
# COUNT=`./push_swap $REVERSE | wc -l`
# if [ "$RES" != "OK" ]
# then
# 	echo "FAILED REVERSE:" $ARG
# else
# 	echo $COUNT "REVERSE"
# fi