#include <stdio.h>

int main(){
    int tot, a, b, c;
    scanf("%d,%d,%d,%d", &tot, &a, &b, &c);
    if(tot - 15 * a - 20 * b - 30 * c < 0){
        printf("0\n");
        return 0;
    }
    printf("%d,%d,%d\n", (tot - 15 * a - 20 * b - 30 * c) % 5, (tot - 15 * a - 20 * b - 30 * c) % 50 / 5, (tot - 15 * a - 20 * b - 30 * c) / 50);
    return 0;
}