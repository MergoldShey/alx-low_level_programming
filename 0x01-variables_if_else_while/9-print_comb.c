#include <stdio.h>
/**
* main - represent Entry Point to the program
* Return: 0 to stop the program
*/
int main(void)
{
int i;
for (i = 0; i < 10; i++)
{
putchar (i);
if (i == 9)
{
putchar(',');
putchar('0');
}
}
putchar('\n');
return (0);
}
