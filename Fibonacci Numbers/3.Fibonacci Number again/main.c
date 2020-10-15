#include <stdio.h>
#include <stdlib.h>

// Compute Fn modulo m

int pisano(int m);
long fibonacciFast(long n, int m);

int main() {
  long n;
  int m;
  scanf("%li %d",&n,&m);
  int result = fibonacciFast(n,m);
  printf("%d",result);
  return 0;
}

int pisano(int m){
  int a=0;
  int b=1;
  int c=a+b;

  for(int i=0;i<m*m;i++){
    c = (a+b) % m;
    a = b;
    b = c;
    if(a==0 && b==1){
      return i+1;
    }
  }
}

long fibonacciFast(long n,int m){

  int pisanoPeriod = pisano(m);
  int remainder;
  remainder = n % pisanoPeriod;

  long a=0;
  long b=1;
  long res = remainder;

  for(int i=1;i<remainder;i++){
    res = (a+b)%m;
    a = b;
    b = res;
  }

  return res;
}
