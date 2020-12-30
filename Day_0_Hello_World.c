
[ --> Click here to go to the problem link directly](www.hackerrank.com/challenges/30-hello-world/problem)
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
	
    char s[100];
    scanf("%[^\n]%*c", &s); // This will work as a substitution for gets(s)
  	
    printf("Hello, World!\n") ;   
    printf("%s\n" , s);
    return 0;
}
