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

  string line2;
  string ans2 = "";
  int blocks = 0;
  while(getline(cin, line2)){
    blocks -= countChar(line2, '}');
    //cout << blocks << endl;
    ans2 +=  addspace(line2, blocks);
    blocks += countChar(line2, '{');
    ans2 += "\n";
  }
  cout << ans2 << endl;

  
  return 0;
}
