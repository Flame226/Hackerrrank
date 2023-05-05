#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        
        for (int j = 1; j <= n - i; j++) {  //for  space
            printf(" ");
        }
        
       
        for (int k = 1; k <= i; k++) { //for hashes
            printf("#");
        }
        
        printf("\n");
    }
    
    return 0;
}

