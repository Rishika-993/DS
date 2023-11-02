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
    printf("Enter the integer: ");
     scanf("%d", &k);

    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++){
            if (nums[i]=nums[j]){
                s = i-j;
                if(abs(s)<=k){
                    printf("True");
                }
                exit(0);
            }
        }
}  
}  