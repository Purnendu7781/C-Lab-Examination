#include <stdio.h>

int main(){
    int n, e=0,o=0;
    printf("Enter the no. of elements : ");
    scanf("%d",&n);
    int arr[n];
    int arr_even[n],arr_odd[n];

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            arr_even[e++]=arr[i];

        }else{
            arr_odd[o++] = arr[i];
        }
    }

        printf("Odd Array : ");
        for(int i=0;i<o;i++){
            printf("%d ",arr_odd[i]);
        }

        printf("\nEven Array : ");
        for(int i=0;i<e;i++){
            printf("%d ",arr_even[i]);
        }
    
    return 0;
}