#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
struct pair{
    char first;
    int second;
};
int main(){
    int c, cnt = 0;
    char str[105];
    scanf("%d%s", &c, str);
    struct pair tree[100];
    for (char *p = strtok(str, ",()\n"); p != NULL; p = strtok(NULL, ",()\n")){
        tree[cnt].first = *p;
        p = strtok(NULL, ",()\n");
        tree[cnt].second = atoi(p);
        cnt++;
    }
    int i = 1;
    for (;; i++){
        if(abs(tree[(i-1)/2].second - tree[i].second) <= c){
            printf("%c%c", tree[(i - 1) / 2].first, tree[i].first);
            i++;
            break;
        }
    }
    for (; i < cnt; i++){
        if(abs(tree[(i-1)/2].second - tree[i].second) <= c){
            printf(" %c%c", tree[(i - 1) / 2].first, tree[i].first);
        }
    }
    printf("\n");

    return 0;
}