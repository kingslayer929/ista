#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    while(n--){
        char op;
        int a, b, c, d;
        scanf(" %c%d%d%d%d", &op, &a, &b, &c, &d);
        if(op == '+'){
            printf("%d %d\n", a + c, b + d);
        }else if(op == '-'){
            printf("%d %d\n", a - c, b - d);
        }else{
            printf("%d %d\n", a * c - b * d, a * d + b * c);
        }
    }
    return 0;
}