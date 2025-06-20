/*
 * Copyright (c) 2025 Nexus Machina LLC
 */

#include <zephyr/kernel.h>

int main(void)
{
	printk("Hello World! %s\n", CONFIG_BOARD_TARGET);

	return 0;
}
