#include <stdio.h>

int main() {
    int arr[5];
    long int sum = 0;
    int i;

    for (i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    int max = arr[0], min = arr[0];

    for (i = 1; i < 5; i++) {
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }

    printf("%ld %ld", sum - max, sum - min);

    return 0;
}

