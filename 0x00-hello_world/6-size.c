#include<stdio.h>
/*Description : this programme disply the size of various types*/
int main(void)
{
printf("Size of char is %zu byte(s)\n", sizeof(char));
printf("Size of int is %zu byte(s)\n", sizeof(int));
printf("Size of long int  is %zu byte(s)\n", sizeof(long int));
printf("Size of long long int  is %zu byte(s)\n", sizeof(long long int));
printf("Size  of float  is %zu byte(s)\n", sizeof(float));
return (0);
}
