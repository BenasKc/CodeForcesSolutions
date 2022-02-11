#include<bits/stdc++.h>

using namespace std;

int main(){
  string a="I hate", b= "I love";
  int x;
  cin >> x;
  for(int i = 0;i < x;i++){
    if(i%2==0)cout << a;
    else cout << b;
    if(i != x-1)cout << " that ";
  }
  cout << " it";
}

