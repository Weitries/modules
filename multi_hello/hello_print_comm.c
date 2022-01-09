#include <linux/init.h>
#include <linux/module.h>
#include <linux/sched.h>

static int hello_print_comm_init(void)
{
    printk(KERN_INFO "This process is \"%s\" (pid %i) \n", current->comm, current->pid);
    return 0;
}

static void hello_print_comm_exit(void)
{
    printk(KERN_INFO "This process is \"%s\" (pid %i) \n", current->comm, current->pid);
    return;
}

EXPORT_SYMBOL_GPL(hello_print_comm_init);
EXPORT_SYMBOL_GPL(hello_print_comm_exit);

module_init(hello_print_comm_init);
module_exit(hello_print_comm_exit);

MODULE_LICENSE("GPL");


