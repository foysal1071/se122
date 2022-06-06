#include<stdio.h>
int main()
{
    int a,b,count;
    printf("prime number from 1 to 200 are = \n");
    for(a=1;a<=200;a++)
    {
        count=0;
        for(b=2;b<=a/2;b++)
        {
            if(a%b==0)
            {
              count++;
              break;
            }
            
        }
        if(count==0 && a!=1)
    {
        printf("%d\n",a);
    }
    }
    
}