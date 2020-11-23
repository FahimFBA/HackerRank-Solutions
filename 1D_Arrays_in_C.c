#include<stdio.h>
int main()
{
    int i,n,sum;
    int arr[1000];
    scanf("%d" ,&n);
    for (i=0,sum=0; i<n; i++)
    {
        scanf("%d" , &arr[i]);
        sum=sum+arr[i];
    }
    printf("%d\n" ,sum);
}