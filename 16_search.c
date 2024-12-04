#include <stdio.h>

int main(){
    int n,target;
    printf("Enter the size of the array : ");
    scanf("%d",&n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Enter the target : ");
    scanf("%d",&target);

    for(int i=0;i<n;i++){
        if(arr[i]==target){
            printf("Element present at index : %d",i);
            return 7;
        }
    }

    for (int i = 0; i < n; i++)
    {
       if(arr[i]!=target){
            printf("Element not present");
            return 7;
        }
    }
    return 0;
}