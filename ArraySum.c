#include<stdio.h>

int main() {
    int a[10], b[10], i, s, t, j, n;
    printf("Enter Size: ");
    scanf("%d", &n);
    printf("Enter elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++) {
        scanf("%d", &b[i]);
    }
    printf("Enter target value: ");
    scanf("%d", &t);
    int found = 0; 

    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {                  // (Start the inner loop from i + 1 to avoid using the same element twice)
            s = a[i] + b[j];
            if (s == t) {
                printf("%d%d", i, j);
                return 0;
            }
        }
    }

    return 0;
}