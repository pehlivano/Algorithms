#include <stdio.h>
#include <stdlib.h>

// Fibonacci Number

unsigned int fibonacci(int n);

int main(void) {
  int n;
  scanf("%d",&n);
  unsigned int result = fibonacci(n);
  printf("%u",result);

  return 0;
}

unsigned int fibonacci(int n) {
  unsigned int fibo[n];
  fibo[0] = 0;
  fibo[1] = 1;

  for(int i=2; i<=n; i++) {
    fibo[i] = fibo[i-1] + fibo[i-2];
  }

  return fibo[n];
}
