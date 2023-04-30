#include <stdio.h>

int main() {
    int n, height, max_height = 0, count = 0;
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &height);
        if(height > max_height) {
            max_height = height;
            count = 1;
        }
        else if(height == max_height) {
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}

