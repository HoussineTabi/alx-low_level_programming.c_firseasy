#include<stdio.h>
/*Description : this programme disply the size of various types*/
int main(void)
{
printf("The size of char is %zu bytes\n", sizeof(char));
printf("The size of int is %zu bytes\n", sizeof(int));
printf("The size of long is %zu bytes\n", sizeof(long int));
printf("The size of float is %zu bytes\n", sizeof(long long int));
printf("The size of double is %zu bytes\n", sizeof(float));
return (0);
}
