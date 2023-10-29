void kidsWithCandies(int* candies, int candiesSize, int extraCandies, bool* result) {
    // Find the maximum number of candies among all kids
    int maxCandies = 0;
    for (int i = 0; i < candiesSize; i++) {
        if (candies[i] > maxCandies) {
            maxCandies = candies[i];
        }
    }

    // Check if each kid, with extraCandies, can have the greatest number of candies
    for (int i = 0; i < candiesSize; i++) {
        if (candies[i] + extraCandies >= maxCandies) {
            result[i] = true;
        } else {
            result[i] = false;
        }
    }
}

int main() {
    int candies[] = {2, 3, 5, 1, 3};
    int extraCandies = 3;
    int candiesSize = sizeof(candies) / sizeof(candies[0]);
    bool result[candiesSize];

    kidsWithCandies(candies, candiesSize, extraCandies, result);

    printf("Boolean array result: [");
    for (int i = 0; i < candiesSize; i++) {
        printf(result[i] ? "true" : "false");
        if (i < candiesSize - 1) {
            printf(", ");
        }
    }
    printf("\n");

    return 0;
} 
