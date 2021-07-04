#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char num[1001];
    scanf("%[^\n]%*c" , num);
    int array[10] = {0};
    for (int i = 0; i < strlen(num); i++)
    {
        if (num[i] >= '0' && num[i] <= '9')
        {
            array[num[i] - '0']++;
        }
    }
    for (int j = 0; j < 10; j++)
    {
        printf("%d " , array[j]);
    }
    printf("\n");
    
    return 0;
}
