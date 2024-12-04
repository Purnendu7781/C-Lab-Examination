#include <stdio.h>

int main(){
    int n;
    printf("Enter Number of Subjects : ");
    scanf("%d",&n);
    float arr[n];
    float sum=0;
    float avg;

    for(int i=0;i<n;i++){
        printf("%d. Enter the Subject : ",i+1);
        scanf("%f",&arr[i]);
        sum+=arr[i];
    }
    avg = sum/n;

    printf("The Average is : %.2f\n",avg);

    if(avg<100 && avg>=90){
        printf("Grade A");
    }
    else if(avg<90 && avg>=80){
        printf("Grade B");
    }
    else if(avg<80 && avg>=70){
        printf("Grade C");
    }
    else if(avg<70 && avg>=60){
        printf("Grade D");
    }
    else if(avg<60 && avg>=50){
        printf("Grade E");
    }
    else if(avg<50){
        printf("Grade F");
    }

    return 0;
}