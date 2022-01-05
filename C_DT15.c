#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct node{
    char c;
    int w;
}nodes[100];
int cnt = 0;
char curr[100] = "\0";
char ans[100] = "\0";
int min_sum = 0x3f3f3f3f;

void f(int pos, int sum, int index){
    if(index >= cnt){
        if(sum < min_sum){
            strcpy(ans, curr);
            min_sum = sum;
        }
        return;
    }
    curr[pos] = nodes[index].c;
    curr[pos + 1] = '\0';
    f(pos + 1, sum + nodes[index * 2 + 1].w, index * 2 + 1);
    curr[pos + 1] = '\0';
    f(pos + 1, sum + nodes[index * 2 + 2].w, index * 2 + 2);
}

int main(){
    char str[105];
    
    fgets(str, 104, stdin);
    for (char *p = strtok(str, ",()\n"); p != NULL; p = strtok(NULL, ",()\n")){
        nodes[cnt].c = *p;
        p = strtok(NULL, ",()\n");
        nodes[cnt].w = atoi(p);
        cnt++;
    }
    f(0, nodes[0].w, 0);
    printf("%s\n", ans);
}