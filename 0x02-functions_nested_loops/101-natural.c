#include <stdio.h>
/**
* main - prints the first 50 Fibonacci numbers, starting with 1 and 2
* followed by a new line
* Return: Always 0 (Success)
*/
int main(void)
{
int i = 0;
long int a = 0, b = 1, next;
while (i < 50)
{
next = a + b;
a = b;
b = next;
printf("%lu", next);
if  (i < 49)
{
printf(",");
}
i++;
}
putchar('\n');
return (0);
}
