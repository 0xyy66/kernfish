#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("0xyy6");
MODULE_DESCRIPTION("Fish Kernel Module");
MODULE_VERSION("0.01");

const char R[] = "\e[31m";
const char Y[] = "\e[0;33m";
const char B[] = "\e[0;34m";
const char G[] = "\e[0;32m";
const char RST[] = "\e[0;37m";

static int __init fish_init(void)
{
        printk("kernfish:\t%s O o%s                     O\n", Y, RST);
        printk("kernfish:\t%s_|/_%so%s                   o\n", B, Y, RST);
        printk("kernfish:\t%s>('>%s         .%sKernFish%s °\n", G, RST, R, RST);
        printk("kernfish:\t%s /|\\%s\n", B, RST);
        printk("kernfish:\t%s° ° °%s\n", Y, RST);
        return 0;
}

static void __exit fish_exit(void)
{
        printk(KERN_INFO "kernfish: module removed, koi koi\n");
}

module_init(fish_init);
module_exit(fish_exit);
