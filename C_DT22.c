#include <stdio.h>
#include <string.h>

int main(){
    char str[1000];
    while(scanf("%s", str) != EOF){
        if(strcmp(str, "end") == 0)
            break;
        
        int len = strlen(str);
        if(len % 2 == 1){
            printf("-1\n");
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
                printf("1\n");
            }else{
                printf("-1\n");
            }
        }
    }
    
    return 0;
}