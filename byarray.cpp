#include<iostream>
using namespace std;
class Stack{
  public:
  //attributes

  int top;
  int *arr;
  int size;

  Stack(int size){
    this->size=size;
    arr=new int[size];
    top=-1;
  }

  void push(int data){
    if(top==size-1){
      cout<<"overflow"<<endl;
    }
    else{
      top++;
      arr[top]=data;
    }
  }

  void pop(){
    if(top=-1){
      cout<<"underflow"<<endl;
    }
    else{
      top--;
    }
    }

    void peek(){
      if(top==-1)
      {
        cout<<"no element"<<endl;
      }
      else{
        cout<<arr[top]<<endl;
      }
    }

    bool isEmpty(){
      if(top==-1){
        return true;
      }
      else{
        return false;
      }
      }
      };

int main(){
  Stack st(6);

  st.push(10);
  st.push(20);
  st.isEmpty();
}