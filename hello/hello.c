#include <linux/init.h>
#include <linux/module.h>

static int hello_init(void)
{
    printk("Hello Weitries!\n");
    printk("Nice to meet you!\n");
    return 0;
}

static void hello_exit(void)
{
    printk("Goodbye! Weitries!\n");
    return;
}

module_init(hello_init);
module_exit(hello_exit);

MODULE_LICENSE("GPL");


