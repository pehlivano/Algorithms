#include <stdio.h>
#include <stdlib.h>

// Compute last digit of sum of fibonacci numbers.

int ldsum(long n);

int main() {
  long n;
  scanf("%lli",&n);
  int result = ldsum(n+2);
  if(result == 0)
    printf("%d",9);
  else
    printf("%lli",result-1);
  return 0;
}


int ldsum(long n){

  // Pisano period is 60 for module of ten.
  n = n % 60;
  int fib[n];
  fib[0]=0;
  fib[1]=1;
  int sum = 0;

  for(int i=2;i<=n;i++){
    fib[i] = ((fib[i-1]%10) + (fib[i-2]%10))%10;
  }

  return fib[n];

}

