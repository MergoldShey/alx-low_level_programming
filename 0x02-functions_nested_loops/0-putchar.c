#include "main.h"
/**
* main - Check the code
*
* Return: Always 0.
*/
int main(void)
{
char test[9] = "_putchar";
int i;
i = 0;
while (i < 8)
{
_putchar (test[i]);
i++;
}
putchar("\n");
return (0);
}
