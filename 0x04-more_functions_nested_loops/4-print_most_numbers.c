#include "main.h"

/**
* print_most_numbers - This function print numbers
*
* return: nothing
*/

void print_most_numbers(void)
{
char i = 0;

while (i <= 9)
{
if (i != 2 && i != 4)
{
putchar('0' + i);
}
i++;
}
putchar('\n');
}
