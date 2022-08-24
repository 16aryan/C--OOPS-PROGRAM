//
//  main.c
//  Generate every 3rd integer
//
//  Created by Aryan on 5/26/21.
//

#include <stdio.h>

int main() {
    int i , sum=0 , j=0 , sumz=0 ;
    for (i= 2 ; i<=150 ; i+=3){
        if(i%2==0)
        printf("%d\n",i);
        sum+=i;
    }
    for(j=2; j<=150 ;j+=3){
        if(j%5==0)
        sumz+=j;
    }
        printf("The sum of the numbers divisible by 5 is ::: %d\n",sumz);
    
    return 0;
}
