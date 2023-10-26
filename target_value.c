

#include <stdio.h>

int main() {
    int nums[10], i, s, t, j;
    printf("Enter elements: ");
    for (i = 0; i < 10; i++) {
        scanf("%d", &nums[i]);
    }
    printf("Enter target value: ");
    scanf("%d", &t);
    int found = 0; // Flag to indicate whether a pair is found

    for (i = 0; i < 10; i++) {
        for (j = i + 1; j < 10; j++) { // Start the inner loop from i + 1 to avoid using the same element twice
            s = nums[i] + nums[j];
            if (s == t) {
                printf("Indices of elements that sum to %d: %d and %d\n", t, i, j);
                found = 1; // Set the flag to indicate a pair is found
            }
        }
    }
    
    if (!found) {
        printf("No pair of elements in the array sum to %d\n", t);
    }

    return 0;
}
