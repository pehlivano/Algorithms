#include <stdio.h>
#include <stdlib.h>

int fibonacci(long n){
  //Pisano period
  n = n%60;
  if(n<=1){
    return n;
  }
  int first=0;
  int second=1;
  int current=0;

  for(int i=0;i<n-1;i++){
    current = ((first%10 + second%10)) % 10;
    first = second;
    second = current;
  }

  return current;

}

int main()
{
  long n;
  scanf("%li",&n);
  int res1 = fibonacci(n);
  int res2 = fibonacci(n+1); 
  int res =(res1*res2)%10;

  printf("%d",res);


  return 0;
}
