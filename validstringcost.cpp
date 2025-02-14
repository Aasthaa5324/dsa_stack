#include<iostream>
#include<stack>
using namespace std;

int countRev (string s){
  if(s.size()%2)
      return -1;
      
  int open=0,close=0;
  
  for(int t:s){
      if(t=='{')
          open++;
      else{
          if(open>0)
              open--;
          else
              close++;
      }
  }
  return (open+1)/2 + (close+1)/2;
}


int main(){
  string s="{{{}";

  int ans=countRev(s);
  cout<<ans;

}
