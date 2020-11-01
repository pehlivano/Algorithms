#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int numberOfDigits(int n){
    int counter=0;
    while(n!=0){
        counter++;
        n=n/10;
    }
    return counter;
}

int isGreatOrEqual(int a,int b){
    if(( a*pow(10,numberOfDigits(b)) + b ) >= ( b*pow(10,numberOfDigits(a))+a )){
        return 1;
    }
    else{
        return 0;
    }
}


int main()
{
    int n;
    scanf("%d",&n);
    int dizi[n];

    for(int i=0;i<n;i++)
        scanf("%d",&dizi[i]);

    int j=0;

    while(j<n){

        int maxdigitt;
        maxdigitt=-99999;
        for(int i=0;i<n;i++){
            if(isGreatOrEqual(dizi[i],maxdigitt)){
                maxdigitt=dizi[i];
            }
        }
        printf("%d",maxdigitt);

        for(int i=0;i<n;i++){
            if(dizi[i]==maxdigitt){
                dizi[i]=-1;
                break;
            }
        }
        j++;
    }
    return 0;
}
