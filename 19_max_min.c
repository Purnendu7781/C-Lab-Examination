#include <stdio.h>

int main(){
    int n = 5;
    int arr[5];
    printf("Enter Elements of the array : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int max,min;

    max = arr[0];
    min = arr[0];

    for (int i = 0; i < n; i++)
    {
        if(arr[i]>max){
            max = arr[i];
        }
    }

    printf("Max Element : %d\n",max);

    for (int i = 0; i < n; i++)
    {
        if(arr[i] < min){
            min = arr[i];
        }
    }

    printf("Min Element : %d",min);
    

    return 0;
}