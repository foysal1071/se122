#include <stdio.h>
int main ()
{
    int n,i,sum=0;
    float avg;
    printf("enter any  10 number:");
    for(i=1;i<=10;i++)
    {
        scanf("%d",&n);
        sum=sum+n;
        avg=sum/10;
    }
    printf("sum of 10 numbers:%d\n",sum);
    printf("avg of 10 numbers:%.3f\n",avg);
}