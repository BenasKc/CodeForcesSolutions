#include <bits/stdc++.h>

using namespace std;

int main(){
  int x;
  cin >> x;
  while(x--){
    int a;
    cin >> a;
    vector<int> sk;
    int siz = log10(a)+1;
    for(int i = 0;i < siz;i++){
        if(a % 10 != 0){
          sk.push_back((a%10)*(int)pow(10,i));
        }
        a/=10;
    }
    cout << sk.size() << '\n';
    for(auto i:sk){
      cout << i << " ";
    }
    cout << endl;
  }
}

