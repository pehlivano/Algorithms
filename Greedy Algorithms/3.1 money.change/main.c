#include <stdio.h>
#include <stdlib.h>
// Money Change

/*
   Compute minimum number of coins needed to change 'm' into coins with
   denominations 1,5, 10.
*/
int moneyChange(int m) {
    int result;
    result = m/10; // Number of tens
    result += (m%10)/5; // Plus number of fives
    result += (m%5); // Plus singles.
    return result;
}


int main()
{
    int m;
    scanf("%d",&m);
    printf("%d",moneyChange(m));
    return 0;
}
