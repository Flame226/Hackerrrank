#include<stdio.h>
#define ll long long

int main(){
    ll n, i, num;
    ll sum = 0;

    scanf("%lld",&n);
    
    for(i=0; i<n; i++){
        scanf("%lld",&num);
        sum += num;
    }
    
    printf("%lld",sum);

    return 0;
}

