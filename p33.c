#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    char str[1000];
    while(fgets(str, 999, stdin)){
        int cnt = 0, sum = 0;
        for (char *p = strtok(str, " \n"); p; p = strtok(NULL, " \n")){
            sum += atoi(p);
            cnt++;
        }
        printf("Size: %d\nAverage: %.3f\n", cnt, (float)sum / cnt);
    }

    return 0;
}