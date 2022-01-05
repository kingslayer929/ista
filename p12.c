#include <stdio.h>

int f(int num){
    if(num == 0 || num == 1){
        return num + 1;
    }else{
        return f(num - 1) + f(num / 2);
    }
}
int main(){
    int input;
    scanf("%d", &input);
    printf("%d\n", f(input));
    return 0;
}