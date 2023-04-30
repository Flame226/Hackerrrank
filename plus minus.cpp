#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    int positive = 0, negative = 0, zero = 0;

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] > 0) {
            positive++;
        } else if (arr[i] < 0) {
            negative++;
        } else {
            zero++;
        }
    }

    float positive_fraction = (float) positive / n;
    float negative_fraction = (float) negative / n;
    float zero_fraction = (float) zero / n;

    printf("%.6f\n%.6f\n%.6f", positive_fraction, negative_fraction, zero_fraction);

    return 0;
}

