#include <linux/init.h>
#include <linux/module.h>
#include <linux/sched.h>

extern int hello_print_comm_init(void);
extern void hello_print_comm_exit(void);

static int __init hello_init(void)
{
    printk(KERN_INFO "Hello Weitries!\n");
    printk(KERN_INFO "Nice to meet you!\n");
    hello_print_comm_init();
    return 0;
}

static void __exit hello_exit(void)
{
    hello_print_comm_exit();
    printk(KERN_INFO "Goodbye! Weitries!\n");
    return;
}

module_init(hello_init);
module_exit(hello_exit);

MODULE_LICENSE("GPL");


