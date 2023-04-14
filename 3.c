#include <stdio.h>
int main()
{
int x, y, sum, max;
scanf("%d %d", &x, &y);
sum = x + y;
if (x > y) max = x;
else max = y;
printf ("Sum = %d\n", sum);
printf ("Larger = %d\n", max);
return 0;
}