#include <stdio.h>

void calculateRunningSum(int nums[], int n, int runningSum[]) {
    runningSum[0] = nums[0];
    for (int i = 1; i < n; i++) {
        runningSum[i] = runningSum[i - 1] + nums[i];
    }
}

int main() {
    int nums[] = {1, 2, 3, 4, 5};
    int n = sizeof(nums) / sizeof(nums[0]);
    int runningSum[n];
    calculateRunningSum(nums, n, runningSum);

    printf("Running Sum: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", runningSum[i]);
    }
    return 0;
}
