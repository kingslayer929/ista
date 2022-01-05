#include <stdio.h>

int main(){
    double r;
    int n, p;
    scanf("%lf%d%d", &r, &n, &p);
    double sum = 0;
    while(n--){
        sum += p;
        sum = sum + sum * r;
    }
    printf("%lld\n", (long long)sum);
    return 0;
}