#include <stdio.h>

int main() {
    int nums[100], n, i, s, t, j;
    printf("Enter the size of array");
    scanf("%d",&n);
    printf("Enter elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    printf("Enter target value: ");
    scanf("%d", &t);
    int found = 0; // Flag to indicate whether a pair is found1

    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) { // Start the inner loop from i + 1 to avoid using the same element twice
            s = nums[i] + nums[j];
            if (s < t) {
                found++;
            }
        }
    }
    printf("Number of elements whose sum is less than %d: %d", t, found);

    return 0;
}