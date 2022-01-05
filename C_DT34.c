#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_LEN 1024

typedef struct list list;
struct linked_list{
	char *key;
	struct linked_list *next;
	struct linked_list *pre;
};
struct list{
	struct linked_list *begin;
	struct linked_list *end;
	struct linked_list *it;
};

list li;

void push(char *key){
	if(!li.begin){
        li.begin = (struct linked_list *) malloc(sizeof(struct linked_list));
		li.end = li.begin;
		li.end->next = NULL;
	}else{
		struct linked_list *tmp = li.begin;
		tmp->pre = li.begin = (struct linked_list *) malloc(sizeof(struct linked_list));
		li.begin->next = tmp;
		li.begin->pre = NULL;
	}
	li.begin->key = strdup(key);
}

void print(struct linked_list *it){
	li.it = li.begin;
	while(li.it->next){
		printf("%s ", li.it->key);
		li.it = li.it->next;
	}
	if(li.it){
		printf("%s\n", li.it->key);
	}
}

int main(){
	char input[MAX_LEN];
	
	while(scanf("%s", input) != EOF){
		push(input);
	}
	
	li.it = li.begin;
	print(li.it);
	
	return 0;
}
