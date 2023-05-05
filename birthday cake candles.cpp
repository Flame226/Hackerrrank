#include <stdio.h>

int main() {
    int n, height, maxheight = 0, count = 0;
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &height);
        if(height > maxheight) {                 //increasing count of maxheight candles by comparing with current height
            maxheight = height;          
            count = 1;
        }
        else if(height == maxheight) {
            count++;                            
        }
    }
    printf("%d\n", count);   //output count of candles with maximum height
    return 0;
