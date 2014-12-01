#!/bin/bash

MINTUTES=$1

for i in `seq $MINTUTES -1 1`; do echo $i; sleep 60; done

paplay /usr/share/sounds/ubuntu/stereo/phone-incoming-call.ogg
