#include <linux/init.h>
#include <linux/module.h>
#include <linux/sched.h>

static int hello_init(void)
{
    printk(KERN_INFO "Hello Weitries!\n");
    printk(KERN_INFO "Nice to meet you!\n");
    printk(KERN_INFO "This process is \"%s\" (pid %i) \n", current->comm, current->pid);
    return 0;
}

static void hello_exit(void)
{
    printk(KERN_INFO "This process is \"%s\" (pid %i) \n", current->comm, current->pid);
    printk(KERN_INFO "Goodbye! Weitries!\n");
    return;
}

module_init(hello_init);
module_exit(hello_exit);

MODULE_LICENSE("GPL");


