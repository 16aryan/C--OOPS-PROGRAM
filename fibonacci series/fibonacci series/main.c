//
//  main.c
//  fibonacci series
//
//  Created by Aryan on 5/26/21.
//

#include <stdio.h>

int main(){
    int a =0,b=1,sum=0,i,num;
    printf("Enter a number");
    scanf("%d",&num);
    for (i=1 ; sum<num ; i++){
        a=b;
        b=sum;
        sum=a+b;
    }
    if(sum==num)
        printf("The number is a part of the fibonacci series\n");
    else
        printf("Not a part of fibonacci series\n");
    return 0;
}
