#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>
#include <linux/utsname.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Sam");
MODULE_DESCRIPTION("Sam Methuselah-19BCE1698");

static int __init kmm_init(void)
{
   	printk(KERN_INFO "Kernel version: %s\n", utsname()->version);
        printk(KERN_INFO "OS system: %s\n",utsname()->sysname) ;
	return 0;
}

static void __exit kmm_cleanup(void)
{
	printk(KERN_INFO "Cleaning up module.\n");
}

module_init(kmm_init);
module_exit(kmm_cleanup);
