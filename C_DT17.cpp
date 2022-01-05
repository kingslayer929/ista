#include <iostream>
#include <string>
using namespace std;

int main(){
    string str;
    cin >> str;
    int len = str.length();
    if(len % 2 == 1){
        cout << "No\n";
    }else{
        int cnt = 0;
        for (int i = 0; i < len; i++){
            if(cnt < 0){
                break;
            }else{
                if(str[i] == '('){
                    cnt++;
                }else{
                    cnt--;
                }
            }
        }
        if(cnt == 0){
            cout << "Yes\n";
        }else{
            cout << "No\n";
        }
    }
    return 0;
}