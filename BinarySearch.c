#include<stdio.h>
#include<stdlib.h>

void main(){
    int beg, end,  a[100], mid, n, loc, flag=0, item;
    printf("Enter");
    scanf("%d", &n);
    printf("Enter");
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    printf("Enter");
    scanf("%d", &item);
    beg=0;
    end=n;
    mid = (beg + end)/2 ; 
    while( beg<=end){
        if (a[mid] == item){
            loc = mid;
            printf("%d",loc);
            flag = 1;
            exit(0);
        }
        else if(a[mid]<item){
            beg = mid+1;
        }
        else{
            end = mid-1;
        }
        mid = (beg + end)/2 ;
    }
    
    if(flag==0){
        printf("-1");
    }
}