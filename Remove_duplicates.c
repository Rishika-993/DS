#include<stdio.h>

void main(){
    int a[10], b[10], i, n, c, j;
    printf("Enter the size of array");
    scanf("%d",&n);
    printf("Enter elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    int k=0;
    for (i = 0; i < n; i++) {
        c = 0;
        for (j = 0 ; j < i; j++){
            if(a[i]==a[j]){
                c = 1;
                break;
            }
        }
        if(c == 0){
            b[k] = a[i];
            k++;
        }
    }  
    for (i =0; i<k; i++){
        printf("%d",b[i]);
    }  
}