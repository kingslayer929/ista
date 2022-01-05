#include <stdio.h>
#include <string.h>

int check(char *str){
    int str_len = strlen(str);
    int yes = 1;

    for(int i = 0, j = str_len - 1; i < str_len / 2; ++i, --j){
        if(str[i] != str[j]){
            yes = 0;
            break;
        }
    }

    return yes;
}

int main(){
    char str[1024];

    while(scanf("%s", str) != EOF){
        if(check(str))
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}