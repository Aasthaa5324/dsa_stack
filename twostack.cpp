#include<iostream>
using namespace std;

class stack{
  public:
  int *arr;
  int size;
  int top1;
  int top2;

  stack(int n){
    this->size=n;
    arr=new int[n];
    top1=-1;
    top2=n;
  }


void push1(int data){
if(top2-top1 > 1)
{
  top1++;
  arr[top1]=data;
}
else{
 cout<<"overflow"<<endl;
}
}

void push2(int data){
  if(top2 - top1>1){
    top2--;
    arr[top2]=data;
  }
  else{
cout<<"overflow"<<endl;
  }
}

int pop1(){
  if(top1>=0)
  {
    int ans=arr[top1];
    top1--;
    return ans;
  }

  else{
    cout<<"underflow"<<endl;
    return -1;
  }
}

int pop2(){
  if(top2<size){
    int ans=arr[top2];
    top2++;
    return ans;
  }

  else{
    cout<<"underflow"<<endl;
    return -1;
  }
  
}

int peek1(){
  if(top1>=0){
    return arr[top1];
  }
  else{
    cout<<"no element"<<endl;
    return -1;
  }
}

int peek2(){
  if(top2<size){
    return arr[top2];
  }
  else{
    cout<<"no element"<<endl;
    return -1;
  }
  }
};

int main() {
  stack s(8);  // Create a stack of size 8

  cout << "Enter 7 elements for stack 1:" << endl;
  for (int i = 0; i < 7; i++) {
      int n;
      cin >> n;
      s.push1(n);  // Push elements to stack 1
  }

  cout << "Enter 7 elements for stack 2:" << endl;
  for (int i = 0; i < 7; i++) {
      int n;
      cin >> n;
      s.push2(n);  // Push elements to stack 2
  }

  // Display the top elements
  cout << "Top of stack 1: " << s.peek1() << endl;
  cout << "Top of stack 2: " << s.peek2() << endl;

  // Pop elements from both stacks
  cout << "Popped from stack 1: " << s.pop1() << endl;
  cout << "Popped from stack 2: " << s.pop2() << endl;

  // Display the top elements after pop
  cout << "Top of stack 1 after pop: " << s.peek1() << endl;
  cout << "Top of stack 2 after pop: " << s.peek2() << endl;

  return 0;
}

