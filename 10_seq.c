#include <stdio.h>
#include <math.h>

int main(){
    int n;
    float sum=0;
    scanf("%d",&n);

    for (int i = 1; i <=n; i++)
    {
        printf("1/%d^2 + ",i);
        sum+=1/pow(i,2);
    }
    
    printf("\nThe Sum of the Sequence : %.2f",sum);

    return 0;
}