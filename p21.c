#include <stdio.h>

int main(){
    float max = -100000;
    float min = -max;
    float input;
    while(scanf("%f", &input) != EOF){
        if(input > max)
            max = input;
        if(input < min)
            min = input;
    }
    printf("maximum:%.2f\nminimum:%.2f\n", max, min);
    return 0;
}