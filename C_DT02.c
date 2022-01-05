#include <stdio.h>
#include <stdlib.h>

struct node{
	int w, a, b;
};

int r[105];
int s[105];

int cmp(const void *a, const void *b){
	struct node *c = (struct node *) a;
	struct node *d = (struct node *) b;
	return (*c).w - (*d).w;
}

void swap(int *a, int *b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int find(int x){
    if(r[x] == x){
        return x;
    }else{
        return r[x] = find(r[x]);
    }
}

void U(int x, int y){
    x = find(x);
    y = find(y);
    if(s[x] < s[y])
        swap(&x, &y);
    r[y] = r[x];
    s[x]++;
}

int main(){
	int m;
	scanf("%d", &m);
	struct node p[10000];
	int size = 0;
	for (int i = 0; i <= m; i++){
		for (int j = 0; j <= m; j++){
			int tmp;
			scanf("%d", &tmp);
			if(tmp > 0 && tmp < 100000){
				p[size].w = tmp;
				p[size].a = i;
				p[size].b = j;
				size++;
			}
		}
		s[i] = 1;
		r[i] = i;
	}
	qsort(p, size, sizeof(p[0]), cmp);
	long long cnt = 0;
	for (int i = 0; i < size; i++){
		if(find(p[i].a) != find(p[i].b)){
			U(p[i].a, p[i].b);
			cnt += p[i].w;
		}
	}
	printf("%lld\n", cnt);

	return 0;
}