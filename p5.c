#include <stdio.h>

int main(){
    int input;
    while(scanf("%d", &input) != EOF){
        int bit = 1 << 7;
        for (int i = 0; i < 8; i++, bit >>= 1){
            if(input & bit){
                printf("1");
            }else{
                printf("0");
            }
        }
        printf("\n");
    }
    return 0;
}