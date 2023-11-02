    #include<stdio.h>
    #include<stdlib.h>
    void main(){
        int numsSize, nums[100];
        printf("Enter the size of array");
        scanf("%d", &numsSize);
        printf("Enter the elements of the array");
        for(int i=0; i<numsSize; i++){
            scanf("%d",&nums[i]);
        }
            
    for(int i =0; i<numsSize; i++){
        for(int j=i+1; j<numsSize; j++){
            if(nums[i]==nums[j]){
                printf("true");
                exit(1);
            }
            else{
                printf("False");
                exit(1);
            }
        }
    }
    return 0;
    }
    
    
