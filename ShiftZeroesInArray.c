#include <stdio.h>

int main()
{
    int i, j;
    int nums[] = {0, 0, 2, 0, 4, 5};
    int numsSize = 6;
    for (i = 0; i < numsSize; i++) {
        if (nums[i] == 0) {   //when any zero occurs
            for (j = i; j < numsSize ; j++) {
                nums[j] = nums[j + 1];
            }
            nums[numsSize - 1] = 0; // Set the last element to 0
            i--; // Decrement i to recheck the current position as we move zero from that position to the end
            numsSize--;  // Decrease the array size after moving elements   
        }
    }
    for (i = 0; i < 6; i++) {
        printf("%d", nums[i]);      //printing the resultant array
    }
    return 0;
}
