#include <stdio.h>
#include <stdlib.h>

// Compute last digit of n'th fibonacci number.

int fibonacci(int n);

int main(void) {
  int n;
  scanf("%d",&n);
  int result = fibonacci(n);
  printf("%d",result);
  
  
  return 0;
}

int fibonacci(int n) {
  int fibo[n];
  fibo[0] = 0;
  fibo[1] = 1;
  for(int i=2; i<=n; i++) {
    fibo[i] = ((fibo[i-1]%10) + (fibo[i-2]%10))%10;
  }
  return fibo[n];
}
