#include <stdio.h>

int main(){
    int a, b;
    while(scanf("%d%d", &a, &b) != EOF){
        if(b == 1){
            printf("%.1f\n", 0.7 * (a - 80));
        }else{
            printf("%.1f\n", 0.6 * (a - 70));
        }
    }
    return 0;
}