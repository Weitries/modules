KERNEL_DIR = /home/lwc/developer/imx6/linux-4.1.15
CROSS_COMPILE = arm-poky-linux-gnueabi-
ARCH = arm

obj-m := hello.o

all:
	make -C $(KERNEL_DIR) M=`pwd` modules

clean:
	rm *.o *.ko *.order *.symvers .*.cmd *.mod.c *.mod.o  .tmp_versions -rf 


