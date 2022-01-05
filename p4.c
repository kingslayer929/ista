#include <stdio.h>

int main(){
    int a, b, c, d;
    scanf("%d%d%d%d", &a, &b, &c, &d);
    int diff = (c * 60 + d) - (a * 60 + b);
    if(diff <= 120){
        printf("%d\n", (diff / 30) * 30);
    }else if(diff <= 240){
        printf("%d\n", ((diff - 120) / 30) * 40 + 120);
    }else{
        printf("%d\n", ((diff - 240) / 30) * 60 + 280);
    }
}