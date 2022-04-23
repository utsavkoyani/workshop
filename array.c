#include<stdio.h>
int main()
{
    int a[2][3],j;
    printf("Enter 10 data : \n");
    for(int i=0; i<2; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("your 10 data is: \n");
    for(int i=0; i<2; i++)
    {
        for(j=0; j<3; j++)
        {

            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
return 0;

}
