#include <stdio.h>
#include <stdlib.h>

int carfueling(int distance,int tank,int stations[],int n){

    int newStations[n+2];
    newStations[0]=0;
    for(int i=1;i<n+1;i++){
        newStations[i]=stations[i-1];
    }
    newStations[n+1]=distance;

    int numRefill=0;
    int currentRefill=0;
    int lastRefill=0;


    while(currentRefill<=n){
        lastRefill=currentRefill;
        while(currentRefill<=n && (newStations[currentRefill+1]-newStations[lastRefill])<=tank){
              currentRefill++;
        }
        if(currentRefill==lastRefill){
            return -1;
        }

        if(currentRefill<=n){
            numRefill++;
        }
    }

    return numRefill;

}



int main()
{
    int distance=0;
    scanf("%d",&distance);

    int tank=0;
    scanf("%d",&tank);

    int n=0;
    scanf("%d",&n);

    int dizi[n];
    for(int i=0;i<n;i++){
        scanf("%d",&dizi[i]);
    }

    int res=carfueling(distance,tank,dizi,n);
    printf("%d",res);

    return 0;
}
