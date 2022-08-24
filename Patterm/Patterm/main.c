//
//  main.c
//  Patterm
//
//  Created by Aryan on 5/26/21.
//

#include <stdio.h>

int main() {
    for(int i=1; i<=4 ; i++){
        int f=11;
        for (int j=1 ; j<=i ; j++){
            printf("%d\t",f);
            f-=1;
        }
        int t=f+2;
        for(int k=1; k<i ; k++){
            printf("%d\t",t);
            t+=1;
        }
        printf("\n");
    }
    return 0;
}
