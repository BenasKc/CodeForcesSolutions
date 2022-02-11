#include<bits/stdc++.h>

using namespace std;

int main(){
  int x;
  cin >> x;
  double sum = x*100;
  double sum0 = 0;
  for(int i = 0;i < x;i++){
    int a;
    cin >> a;
    sum0 += a;
  }
  cout << fixed << setprecision(12) << double((sum0/sum)*100);
}

