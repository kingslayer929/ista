#include <stdio.h>

int main(){
    int input;
    while(scanf("%d", &input) != EOF){
        if(input % 400 == 0) printf("Bissextile Year\n");
        else if(input % 100 == 0) printf("Common Year\n");
        else if(input % 4 == 0) printf("Bissextile Year\n");
        else printf("Common Year\n");
    }
}