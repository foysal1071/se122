#include <stdio.h>
int main ()
{
    int n,i,sum=0;
    printf("enter the value of n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i%2!=0)
        {
            printf("%d\n",i);
            sum=sum+i;
        }
        //sum=sum+i;
    }
    printf("sum of odd numbers:%d",sum);

}