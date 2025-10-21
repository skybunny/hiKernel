# hiKernel
This Repository is about my studies in Driver Development


This is my little driver, created just to show messages when it is installed and when it is uninstalled.

To compile this, we need to create a Makefile:

'''Makefile
obj-m += my_drive.o

all:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) modules

clean:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) clean
'''

To install the driver, use the following command: **sudo insmod my_driver.ko**

**BUT** in another terminal, you need to use the command **dmesg -W** to see the messages.

So, when we install the driver, we can see the messages in the terminal. :)
And when the driver is uninstalled, we will also see exit messages.
