#include <stdio.h>

int main(){
    int cnt = 0;
    int arr[105];
    for(int i = 0; cnt < 100; i++)
        for (int j = 0; i - 7 * j >= 0; j++)
            if((i - 7 * j) % 5 == 0){
                arr[cnt++] = i;
                break;
            }
    int input;
    while(scanf("%d", &input) != EOF){
        printf("%d\n", arr[input - 1]);
    }
    return 0;
}