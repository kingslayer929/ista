#include <stdio.h>
#include <string.h>

int main(){
    char str[1000];
    scanf("%s", str);
    int len = strlen(str);
    if(len % 2 == 1){
        printf("No\n");
    }else{
        int cnt = 0;
        for (int i = 0; i < len; i++){
            if(cnt < 0){
                break;
            }else{
                if(str[i] == '('){
                    cnt++;
                }else{
                    cnt--;
                }
            }
        }
        if(cnt == 0){
            printf("Yes\n");
        }else{
            printf("No\n");
        }
    }
    return 0;
}