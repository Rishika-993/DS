#include <stdio.h>
#include<stdlib.h>

int main() {
    int nums[100], n, i, s, k, j;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    printf("Enter elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    
    for (i = 0; i < n; i++) {
        if(nums[i] == nums[i+1]){
            nums[i]=nums[i]*2;
            nums[i+1]= 0;
        }
        if(nums[i]==0){
            for(j=i; j<n; j++){
                nums[j]=nums[j+1];
            }
            nums[n - 1] = 0;
            i--; 
            n--; 
        }
    } 
    
    printf("%d",n);
    
    for (i = 0; i < 5; i++) {
        printf("%d", nums[i]);     
    }
    return 0; 
}  
