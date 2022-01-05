#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>

using namespace std;

int r[105];
int s[105];

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
	cin >> m;
	vector<pair<int, pair<int, int> > > p;
	for (int i = 0; i <= m; i++){
		for (int j = 0; j <= m; j++){
			int tmp;
			cin >> tmp;
			if(tmp > 0 && tmp < 100000)
				p.push_back({tmp, {i, j}});
		}
		s[i] = 1;
		r[i] = i;
	}
	sort(p.begin(), p.end());
	long long cnt = 0;
	for(auto i : p){
		if(find(i.second.first) != find(i.second.second)){
			U(i.second.first, i.second.second);
			cnt += i.first;
		}
	}
	cout << cnt << "\n";

	return 0;
}