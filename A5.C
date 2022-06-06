*#include <stdio.h>
int main ()
{
    int n;
    printf("enter the year:");
    scanf("%d",&n);
    if(n%4==0 && n%100!=0)
    { 
        printf("%d is a leap year\n",n);
    }
    
    else if (n%4==0 && n%100==0 && n%400==0)
    {
        printf("%d is  a leap year",n);
    }
    else
    {
        printf("%d is not a leap year ",n);
    } 
    
/*#include <stdio.h>
int main ()
{
    int r,c;
    for(r=1;r<=5;r++)
    {
        for(c=1;c<=r;c++)
        {
            printf("*",r);
        }
         printf(" \n",r);
    }
   // printf(" \n",r);
}*/