#include <stdio.h>

int main(){
    int size;
    scanf("%d", &size);
    int queue[size];
    int head = 0, end = 0;
    int input;
    while(scanf("%d", &input) && input != -1){
        if(input == 1){
            if((end + 1) % size == head){
                int tmp;
                scanf("%d", &tmp);
                printf("FULL\n");
            }else{
                scanf("%d", &queue[end]);
                end = (end + 1) % size;
            }
        }else if(input == 0){
            if(head == end){
                printf("EMPTY\n");
            }else{
                printf("%d\n", queue[head]);
                head = (head + 1) % size;
            }
        }
    }
    return 0;
}