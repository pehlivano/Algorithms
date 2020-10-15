#include <stdio.h>
#include <stdlib.h>


int ldsum(long n);

int main() {
  long m;
  long n;
  scanf("%li %li",&m,&n);
  int res1=ldsum(n);
  int res2=ldsum(m-1);
  // If res2 is bigger than res1, the result will be negative so add 10 to res1 for positive number.
  if(res1>res2){
    int res = (res1-res2);
    printf("%d",res%10);
  }
  else{
    printf("%d",(res1+10-res2)%10);
  }


  return 0;
}

int ldsum(long n){
  //Pisano period is 60 for module of ten.
  // F(n+2) equals to sum of F(n)-1 so computing F(n+2) will be enough.
  n = (n+2) % 60;
  int fib[n+1];
  fib[0]=0;
  fib[1]=1;
  

  for(int i=2;i<=n;i++){
    fib[i] = ((fib[i-1]%10) + (fib[i-2]%10))%10;
  }
  // if last digit is zero, make sure its previous digit is nine.
  if(fib[n]==0){
    return 9;
  }

  return fib[n]-1;
}

