#include <stdio.h>
#include<stdlib.h>

void update(int *a,int *b) {
    int y = *a + *b;
    int z = abs(*a - *b);
    // updating a and b now with their addition and absolute difference value
    *a = y;
    *b = z;

}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}