#include<bits/stdc++.h>

using namespace std;

int main(){
  string s;
  int a = 0, b = 0;
  cin >> s;
  for(int i = 0; i < s.size();i++){
    if(isupper(s[i]))a++;
    else b++;
  }
  for(int i = 0; i < s.size();i++){
    if(a > b){
      cout << (char)toupper(s[i]);
    }
    else cout << (char)tolower(s[i]);
  }
}

