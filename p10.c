#include <stdio.h>

int gcd(int m, int n){
    int t = 1;
    while(n != 0){
        t = m % n;
        m = n;
        n = t;
    }
    return m;
}
int main(){
    int m, n;
    scanf("%d%d", &m, &n);
    printf("%d\n", gcd(m, n));
    return 0;
}
