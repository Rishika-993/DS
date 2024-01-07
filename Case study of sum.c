#include<stdio.h>

void main(){
    int a[4], b[4], k, i, j;
    printf("Enter the elements of first array");
    for(i=0; i<4; i++){
        scanf("%d", &a[i]);
    }
    printf("Enter the element of second array");
    for(i=0; i<4; i++){
        scanf("%d", &b[i]);
    }
    printf("Enter the sum value");
    scanf("%d", &k);

    for(i=0; i<4; i++){
        for(j=0; j<4; j++){
            if(a[i]+b[j]==k){
                printf("%d,%d\n", a[i], b[j]);
            }
        }
    }
}