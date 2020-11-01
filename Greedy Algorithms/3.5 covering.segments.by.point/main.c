#include <stdio.h>
#include <stdlib.h>

typedef struct segments{
    int start;
    int end;
}segment;

int checkOverlapping(segment x,segment y){
        if(x.end>=y.start && x.start<=y.end){
            return 1;
        }
        else{
            return 0;
        }
}


void sortSegmentsForEnd(segment elements[],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(elements[j].end>elements[j+1].end){
            segment temp = elements[j+1];
            elements[j+1] = elements[j];
            elements[j] = temp;

            }
        }
    }
}

int main()
{
    int n;
    scanf("%d",&n);

    segment periods[n];
    int points[n];
    int i=0;
    int j=0;
    int k=0;

    for(i=0;i<n;i++){
        scanf("%d %d",&periods[i].start,&periods[i].end);
    }

    sortSegmentsForEnd(periods,n);
    segment current;
    while(j<n){
        current = periods[j];
        points[k] = current.end;
        j++;
        k++;
        while(checkOverlapping(current,periods[j]) && j<n){
            j++;
        }
    }
    printf("%d\n",k);

    for(int a=0;a<k;a++){
        printf("%d ",points[a]);
    }


    return 0;
}
