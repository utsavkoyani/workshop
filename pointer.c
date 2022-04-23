#include<stdio.h>
int main()
{
    int a=21;
    int *ptr;
    ptr=&a;
    printf("A is %d\n",a);
    printf("ptr is %d\n",ptr);
    printf("ptr is %d\n",*ptr);
    printf("A is %d\n",&a);
    printf("ptr stored at %d\n",&ptr);
}
