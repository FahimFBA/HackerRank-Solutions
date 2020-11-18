#include<stdio.h>
int main()
{
    int a,b,c,d;
    float x,y,z,z2;
    scanf("%d%d" , &a, &b);
    scanf("%f%f" , &x, &y);
    c=a+b;
    d=a-b;
    printf("%d %d\n" , c, d);
    z=x+y;
    z2=x-y;
    printf("%.1f %.1f\n" , z, z2);

    return 0;
}
