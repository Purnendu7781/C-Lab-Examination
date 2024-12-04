#include <stdio.h>

int main(){
    int n = 5,b;
    int arr[5];
    printf("Enter Elements of the array : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n ; j++)
        {   
            if(arr[i]>arr[j]){

             b = arr[i];
             arr[i]=arr[j];
             arr[j] = b;
            }
        }
        
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}