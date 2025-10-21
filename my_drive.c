// This imports or #includes :) and is necessary for programming drivers in the Linux kernel
#include <linux/module.h>
#include <linux/init.h>

// This function is activated when the driver is loaded
static int __init my_init(void){

	// In the kernel driver, printk is similar to printf :)
	printk("hello, hello Kernel!\n");
	return 0;
}

// This function is activated when the driver is unloaded
static void __exit my_exit(void){

	// Print to show a message when the driver is unloaded
	printk("bye kernel :( I will miss you \n");
}

// This part sets the driver functions: init function and exit function
module_init(my_init);
module_exit(my_exit);

// License settings
MODULE_LICENSE("GPL");

// Me
MODULE_AUTHOR("Sky");

// Description
MODULE_DESCRIPTION("Just a Kernel for Fun!");
