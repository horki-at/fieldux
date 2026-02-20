#include <stdio.h>

#include <kernel/tty.h>

void kernel_main(void)
{
	terminal_initialize();
  terminal_putchar('h');
  terminal_putchar('e');
  terminal_putchar('l');
  terminal_putchar('l');
  terminal_putchar('o');
}
