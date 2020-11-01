#include <stdio.h>
#include <stdlib.h>


void result(long long n){
    long long gercekn=n;
    long long k=0;
    for(int i=1;i<=n;i++){
        if(n-i>i){
            k++;
            n-=i;
        }
        else{
            k++;
            break;
        }
    }
    n=gercekn;
    long long dizi[k];

    for(int i=1;i<=n;i++){
        if(n-i>i){
            dizi[i-1] = i;
            n-=i;
        }
        else{
            dizi[i-1]= n;
            break;
        }
    }


    printf("%lli\n",k);
    for(int i=0;i<k;i++){
        printf("%lli ",dizi[i]);
    }
}

int main()
{
    long long n;
    scanf("%lli",&n);
    result(n);

    return 0;
}
