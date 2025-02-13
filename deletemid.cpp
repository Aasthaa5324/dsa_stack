#include<iostream>
#include<stack>
using namespace std;

void deletemid(stack<int>&stk,int size,int count)
{
  if(count==size/2)
  {
    stk.pop();
    return;
  }

  int temp = stk.top();
  stk.pop();
  count++;

  deletemid(stk,size,count);

  stk.push(temp);
  return;
}

int main(){
  int count=0;

  stack<int> s;

  int size=5;

  for(int i=0;i<size;i++){
    int n;
    cin>>n;
    s.push(n);
  }
  deletemid(s,size,count);

  while(!s.empty()){
    cout<<s.top()<<" ";
    s.pop();
  }
}


