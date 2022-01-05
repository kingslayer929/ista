#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	char str[4096] = {0};
	
	fgets(str, 4096, stdin);
    int num[1501] = {0};
    char *ptr = strtok(str, " ");
    int pos = 0;
    
    num[pos++] = atof(ptr);
    while(ptr = strtok(NULL, " ")){
        if(strchr("+-*/%%", *ptr)){
            switch(*ptr){
                case '+':
                    num[pos-2] = num[pos-2] + num[pos-1];
                    pos--;
                    break;
                case '-':
                    num[pos-2] = num[pos-2] - num[pos-1];
                    pos--;
                    break;
                case '*':
                    num[pos-2] = num[pos-2] * num[pos-1];
                    pos--;
                    break;
                case '/':
                    num[pos-2] = num[pos-2] / num[pos-1];
                    pos--;
                    break;
                case '%':
                    num[pos-2] = num[pos-2] % num[pos-1];
                    pos--;
                    break;
                default:
                    break;
            }
        }else{
            num[pos++] = atof(ptr);
        }
    }
    printf("%d\n", num[pos-1]);
	
	return 0;
} 
