#include<stdio.h>

int main()
{
    int i, sum=0, n;
    scanf("%d" , &n);
    while (n!=0)
    {
        sum=sum+(n%10);
        n=n/10;
    }
    
    
    
    printf("%d\n" , sum);
    
}