#include <stdio.h>

int main(){
    int input;
    while(scanf("%d", &input) != EOF){
        while(input % 3 != 0){
            input--;
        }
        printf("%d\n", input / 3 * (input + 3) / 2);
    }
    return 0;
}