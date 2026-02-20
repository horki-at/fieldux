#!/bin/sh
set -e
. ./config.sh 

qemu-system-$(./target-triplet-to-arch.sh $HOST) -kernel ${SYSROOT}/boot/fieldux.kernel
