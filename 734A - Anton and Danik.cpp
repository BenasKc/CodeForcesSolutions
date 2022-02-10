#include<bits/stdc++.h>

using namespace std;

int main(){
  int x;
  cin >> x;
  string f;
  cin >> f;
  int a = count(f.begin(), f.end(), 'A');
  int b = count(f.begin(), f.end(), 'D');
  if(a > b){
    cout << "Anton";
  }
  else if(a < b){
    cout << "Danik";
  }
  else cout <<"Friendship";
}

