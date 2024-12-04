#include <stdio.h>

int main(){
    char c;
    int age;
    scanf("%c",&c);
    scanf("%d",&age);
    if ((c=='y'|| c=='Y')&& age >=18)
    {
       printf("Eligible to vote");

    }
    else{
        printf("Not Eligible");
    }
    return 0;
}