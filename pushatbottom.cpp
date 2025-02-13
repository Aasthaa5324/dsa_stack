#include<iostream>
#include<stack>
using namespace std;

void solve(stack<int>&s,int num){
  //base case
  if(s.empty())
  {
    s.push(num);
    return;
  }
  
  int temp=s.top();
  s.pop();

  solve(s,num);

  s.push(temp);
}

void pushatBottom(stack<int>&s,int num){
  solve(s,num);
}

int main(){
  stack<int>s;

  s.push(1);
  s.push(2);
  s.push(3);

  int num=0;

  pushatBottom(s,num);

  while(!s.empty())
  {
    cout<<s.top()<<endl;
    s.pop();

  }

}