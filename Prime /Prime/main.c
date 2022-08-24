//
//  main.c
//  Prime and fibbonacci
//
//  Created by Aryan on 5/26/21.
//

#include <stdio.h>

int main() {
    int i=0 , num , c=0 ; //here c is flag 
    printf("Enter a number:");
    scanf("%d",&num);
    for (i=2; i<=num/2 ; i++){
        if(num%i==0){
            c=1;
        }
    }
    if(c==0){
        printf("It is a prime number\n");
    }else{
        printf("It is not a prime number\n");
    }
    return 0;
}
