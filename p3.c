#include <stdio.h>

int main(){
    int x, y;
    while(scanf("%d%d", &x,&y) != EOF){
        if(x*x+y*y <= 40000){
            printf("inside\n");
        }else{
            printf("outside\n");
        }
    }
    return 0;
}