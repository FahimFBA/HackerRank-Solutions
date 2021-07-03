#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



void calculate_the_maximum(int n, int k) {
  int a, b, MaxOfAnd = 0, MaxOfOr = 0, MaxOfXor = 0;
  for(a = 1; a <= n; a++)
  {
      for(b = a + 1; b <= n; b++)
      {
          if(MaxOfAnd < (a & b) && (a & b) < k)
          {
              MaxOfAnd = a & b;
          }
          if(MaxOfOr < (a | b) && (a | b) < k)
          {
              MaxOfOr = a | b;
          }
          if(MaxOfXor < (a ^ b) && (a ^ b) < k)
          {
              MaxOfXor = a ^ b;
          }
      }
  }
  printf("%d\n" , MaxOfAnd);
  printf("%d\n" , MaxOfOr);
  printf("%d\n" , MaxOfXor);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
