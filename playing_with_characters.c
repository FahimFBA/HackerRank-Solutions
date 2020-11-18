#include<stdio.h>
int main()
{
    char ch;
    scanf("%c" , &ch);
    char str1[100], str2[100];
    scanf("%s" , &str1);
    scanf("\n");
    scanf("%[^\n]%*c", str2);
    printf("%c\n" , ch);
    printf("%s\n" , str1);
    printf("%s\n" , str2);
    return 0;
}