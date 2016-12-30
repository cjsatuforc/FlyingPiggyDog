obj-m       := chr_test.o

KERNEL_DIR  := /home/joseph/Workspaces/BBB/buildroot-2016.05/output/build/linux-4.2
PWD         := $(shell pwd)

CC := $(BBB_CC)/arm-linux-gnueabihf-gcc
LD := $(BBB_CC)/arm-linux-gnueabihf-ld
CPP:= $(BBB_CC)/arm-linux-gnueabihf-g++

default :
	$(MAKE) -C $(KERNEL_DIR) SUBDIRS=$(PWD) ARCH=arm modules

clean :
	$(MAKE) -C $(KERNEL_DIR) SUBDIRS=$(PWD) ARCH=arm clean
