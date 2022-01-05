#include <stdio.h>
#include <stdbool.h>

bool isprime(int num){
    if(num % 2 == 0) return false;

    int limit = num / 2;
    bool flag = 1;
    for (int i = 3; i <= limit; i += 2){
        if(num % i == 0){
            flag = 0;
            break;
        }
    }
    if(flag) return true;
    else return false;
}

int main(){
    int input;
    while(scanf("%d", &input) != EOF){
        if(isprime(input)){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
    }
}