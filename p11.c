#include <stdio.h>

int main(){
    int m, n;
    int table[100][100];
    while(scanf("%d%d", &m, &n) != EOF){
        for (int i = 0; i < m; i++){
            for (int j = 0; j < n; j++){
                scanf("%d", &table[i][j]);
            }
        }
        for (int i = 0; i < n; i++){
            for (int j = 0; j < m-1; j++){
                printf("%d ", table[j][i]);
            }
            printf("%d\n", table[m-1][i]);
        }
    }
    return 0;
}