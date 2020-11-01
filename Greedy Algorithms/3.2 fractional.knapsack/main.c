#include <stdio.h>
#include <stdlib.h>

// Fractional Knapsack
int maxIndexx(int arrValue[], int arrWeight[], int n) {
    double mostValuable = 0;
    int maxIndex = -1;
    for(int i=0;i<n;i++) {
        double currValue = arrValue[i]/(double)arrWeight[i];
        if(currValue>mostValuable) {
            mostValuable = currValue;
            maxIndex = i;
        }
    }
    return maxIndex;
}


double maxValueOfLoot(int n, int capacity, int arrValue[], int arrWeight[]) {

    double value = 0;
    while(capacity>0) {
        int maxIndex = maxIndexx(arrValue,arrWeight,n);
        if(capacity>arrWeight[maxIndex]) {
            value += arrValue[maxIndex];
            capacity -= arrWeight[maxIndex];
            arrValue[maxIndex] = 0;
        }
        else {
            value += (capacity/(double)arrWeight[maxIndex])*arrValue[maxIndex];
            return value;
        }
    }

    return value;
}


int main()
{
    int n; // Number of items
    int W; // Capacity
    scanf("%d%d",&n,&W);
    int arrValue[n];
    int arrWeight[n];

    for(int i=0; i<n; i++) {
        scanf("%d%d",&arrValue[i],&arrWeight[i]);
    }
    printf("%.4lf",maxValueOfLoot(n,W,arrValue,arrWeight));

    return 0;
}

