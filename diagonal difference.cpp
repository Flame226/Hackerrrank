#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    int n, i, j;
    int primary = 0, secondary = 0;

    scanf("%d",&n);
    int arr[n][n];

   
    for(i=0; i<n; i++){                                 //for reading array elements
        for(j=0; j<n; j++){
            scanf("%d",&arr[i][j]);             
        }
    }
                                                       
    
    for(i=0; i<n; i++){                              //to claculate diagonal difference
        primary += arr[i][i];
        secondary += arr[i][n-i-1];
    }

    
    printf("%d", abs(primary - secondary));         //printing difference abs!..absolute

    return 0;
}

