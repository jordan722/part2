#include <iostream>
using namespace std;
#include "indent.h"
#include "unindent.h"


int main(){
  string line;
  string ans = "";

  
  while(getline(cin, line)){
    ans += removeLeadingSpaces(line) + "\n";
  }
  cout << ans << endl;

/*
  //Q: there's two declarations of line and ans strings
  string line;
  string ans = "";
  while(getline(cin, line)){
    ans += removeLeadingSpaces(line) + "\n";
  }
  cout << ans << endl;
  return 0;
  */
}
