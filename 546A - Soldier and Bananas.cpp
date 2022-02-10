#include<bits/stdc++.h>

using namespace std;

int main(){
  int a, b, c, sum = 0;
  cin >> a >> b >> c;
  for(int i = 0; i < c;i++){
    sum+= a*(i+1);
  }
  if(sum - b > 0){
    cout << sum - b;
  }
  else cout << 0;
}

