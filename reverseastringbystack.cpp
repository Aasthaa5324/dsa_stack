#include<iostream>
#include<stack>
using namespace std;

string reverse(string str){
  string rev="";
  stack<char> stk;
  for(int i=0;i<str.length();i++){
    stk.push(str[i]);
  }
  while(!stk.empty()){
    rev=rev+stk.top();
    stk.pop();
  }

  return rev;
}

int main(){
  string str;
  cout<<"enter a string"<<endl;
  cin>>str;

  cout<<reverse(str)<<endl;
}