#include <stdio.h>

int main(){
    int input;
    while(scanf("%d", &input) != EOF){
        if(input >= 3 && input <= 5){
            printf("Spring\n");
        }else if(input >= 6 && input <= 8){
            printf("Summer\n");
        }else if(input >= 9 && input <= 11){
            printf("Autumn\n");
        }else{
            printf("Winter\n");
        }
    }
    return 0;
}