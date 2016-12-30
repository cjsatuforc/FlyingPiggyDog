obj-m := gps.o

KERNEL_DIR	:= /home/joseph/Workspaces/BBB/buildroot-2016.05/output/build/linux-4.2
PWD			:= $(shell pwd)

CC =$(BBB_CC)/arm-linux-gnueabihf-gcc
LD =$(BBB_CC)/arm-linux-gnueabihf-ld
CPP =$(BBB_CC)/arm-linux-gnueabihf-g++

LIBS1 = /home/joseph/Workspaces/BBB/buildroot-2016.05/output/build/linux-4.2/include/linux/
LIBS2 = /home/joseph/Workspaces/BBB/buildroot-2016.05/output/build/linux-4.2/include/
LIBS3 = /home/joseph/Workspaces/BBB/buildroot-2016.05/output/build/linux-4.2/arch/arm/include/asm/
LIBS4 = /home/joseph/Workspaces/BBB/buildroot-2016.05/output/build/linux-4.2/drivers/tty/serial/

.PHONY: all clean

all:
	$(MAKE) -I$(LIBS1) -I$(LIBS2) -I$(LIBS3) -I$(LIBS4) -C $(KERNEL_DIR) SUBDIRS=$(PWD) ARCH=arm modules CROSS_COMPILE=$(BBB_CC)/arm-linux-gnueabihf-
	cp -f gps.ko /home/joseph/NFS

#gps : gps.c
#	$(CC) -I$(LIBS1) -I$(LIBS2) -I$(LIBS3) -g -o $@ $^

clean:
	rm -f *.o *.ko *.order *.symvers *.mod.*
