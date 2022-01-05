#include <stdio.h>

int main(){
    int table[30];
    for (int i = 0; i < 30; i++)
        table[i] = 0;
    int n, cnt_max = 0;
    scanf("%d", &n);
    while(n--){
        int a, b;
        scanf("%d%d", &a, &b);
        for (int i = a; i < b; i++){
            table[i]++;
        }
    }
    for (int i = 0; i < 30; i++){
        if(table[i] > cnt_max){
            cnt_max = table[i];
        }
    }
    printf("%d\n", cnt_max);
    return 0;
}