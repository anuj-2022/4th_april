#include <linux/kdev_t.h> // MKDEV
#include <linux/types.h> // dev_t
#include <stdio.h> // I/O

int main(void)
{
    int device_id = MKDEV(10, 249);
    printf("%d\n", device_id); // 2809
    return 0;
}
