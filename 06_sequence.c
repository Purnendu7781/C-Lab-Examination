#include <stdio.h>

int main(){
    int n,sum=0;
    printf("Enter the range : ");
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        if(i%2!=0){
            printf("%d + ",i);
            sum +=i;
        }
    }
    printf("\nThe Sum of the Sequence is %d",sum);
    return 0;
}   