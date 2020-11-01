#include <stdio.h>
#include <stdlib.h>

void sort(long long dizi[], int n)
{
    int i,j;
    for (i = 0; i < n; ++i){
        for (j = i + 1; j < n; ++j){
            if (dizi[i] < dizi[j]){
                long long a = dizi[i];
                dizi[i] = dizi[j];
                dizi[j] = a;
            }
        }
    }
}

int main()
{
    int n;
    scanf("%d",&n);
    long long a[n];
    long long b[n];
    int i;
    for(i = 0; i < n ; i++){
        scanf("%lli",&a[i]);
    }
    for(i = 0; i < n ; i++){
        scanf("%lli",&b[i]);
    }

    sort(a,n);
    sort(b,n);
    long long toplam = 0;

    for(i = 0; i < n ; i++){
        toplam = toplam + (a[i] * b[i]);
    }

    printf("%lli",toplam);
    return 0;
}
