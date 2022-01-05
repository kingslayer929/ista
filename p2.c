#include <stdio.h>

int main(){
    int input;
    while(scanf("%d", &input) != EOF){
        printf("%.1f\n", 1.6 * input);
    }
    return 0;
}