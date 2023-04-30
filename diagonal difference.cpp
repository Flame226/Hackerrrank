#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    int n, i, j;
    int primary = 0, secondary = 0;

    scanf("%d",&n);
    int arr[n][n];

    // Read in the array elements
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            scanf("%d",&arr[i][j]);
        }
    }

    // Calculate the diagonal differences
    for(i=0; i<n; i++){
        primary += arr[i][i];
        secondary += arr[i][n-i-1];
    }

    // Print the absolute difference
    printf("%d", abs(primary - secondary));

    return 0;
}

