#include <stdio.h>
char table[4][6] = {\
    "*****",\
    "*   *",\
    "*    ",\
    "    *"\
};
int num[10][5] = {\
    {0,1,1,1,0},\
    {3,3,3,3,3},\
    {0,3,0,2,0},\
    {0,3,0,3,0},\
    {1,1,0,3,3},\
    {0,2,0,3,0},\
    {2,2,0,1,0},\
    {0,3,3,3,3},\
    {0,1,0,1,0},\
    {0,1,0,3,3}\
};

int main(){
    char input[6];
    scanf("%c%c%c%c", &input[0], &input[1], &input[2], &input[3]);
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 3; j++){
            printf("%s ", table[num[input[j] - '0'][i]]);
        }
        printf("%s\n", table[num[input[3] - '0'][i]]);
    }
}