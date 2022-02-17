#include <bits/stdc++.h>

using namespace std;

int main(){
  int x;
  cin >> x;
  while(x--){
    long long int a, b, c;
    cin >> a >> b >> c;
    long long int d = (c/a);
    while(d * a + b > c){
      d--;
    }
    if(d * a + b < 0){
      cout << "0\n";
    }
    else cout << d*a+b << endl;
  }
}

