CC = $(BBB_CC)/arm-linux-gnueabihf-gcc
LD = $(BBB_CC)/arm-linux-gnueabihf-ld
CPP= $(BBB_CC)/arm-linux-gnueabihf-g++

#LDFLAG= -L /home/joseph/toolchain/linaro-4.9/sysroot/lib/

cdev_test: cdev_test.c
	$(CC) -o $@ $^


clean:
	rm -f *.o cdev_test


