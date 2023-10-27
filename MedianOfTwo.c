#include <stdio.h>
#include <stdlib.h>

int main() {
    int Nums1[1000], Nums2[1000], Nums3[2000], m, n, i, j, k;

    // First array
    printf("Insert the length of the first array: ");
    scanf("%d", &m);
    printf("Insert the elements of the first array: ");
    for (i = 0; i < m; i++) {
        scanf("%d", &Nums1[i]);
    }

    // Second array
    printf("Insert the length of the second array: ");
    scanf("%d", &n);
    printf("Insert the elements of the second array: ");
    for (j = 0; j < n; j++) {
        scanf("%d", &Nums2[j]);
    }

    // Entering elements in the merged array
    for (k = 0; k < (m + n); k += 2) {
        Nums3[k] = Nums1[k / 2];
        Nums3[k + 1] = Nums2[k / 2];
    }

    // Sorting the merged array
    for (i = 0; i < (m + n); i++) {
        for (j = 0; j < (m + n - 1); j++) {
            if (Nums3[j] > Nums3[j + 1]) {
                int temp = Nums3[j];
                Nums3[j] = Nums3[j + 1];
                Nums3[j + 1] = temp;
            }
        }
    }

    // printing merged array:
    printf("The merged array is:");
    for(i=0; i<(m+n); i++){
        printf("%d", Nums3[i]);
    }
    
    int median;
    // Calculate the median
    int c = (m + n) % 2;
    if (c == 0) {
        median = (Nums3[(m + n) / 2 - 1] + Nums3[(m + n) / 2]) / 2;
    } else {
        median = Nums3[(m + n) / 2];
    }
    printf("\nMedian = %d\n", median);
    return 0;
}
