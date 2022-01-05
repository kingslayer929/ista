#include <stdio.h>
#include <string.h>

int main(){
    char str[500];
    fgets(str, 499, stdin);
    while(fgets(str, 499, stdin)){
        str[strcspn(str, "\n")] = '\0';
        int len = strlen(str), cnt = 0;
        for (int i = 0; i < len; i++){
            if(str[i] >= 32)
                cnt += (int)str[i];
        }
        printf("%d\n", cnt);
    }
    return 0;
}