#include<iostream>
using namespace std;

class Node{
  public:
    int data;
    Node* next;


  
    Node(int val){
      this->data=val;
      this->next=NULL;
    }
};

Node* top=NULL;

void push(int val)
{
Node* ptr=new Node(val);
ptr->next=top;
top=ptr;
}
void pop(){
  if(top==NULL){
      cout<<"Stack is empty"<<endl;
  }
  else{
    Node* temp = top;
    top = top->next;
    delete temp;
  }
}


int peek() {
  if (top == NULL) {
    cout << "Stack is empty" << endl;
    return -1;
  }
  return top->data;
}

bool isEmpty(){
  if(top==NULL)
  {
   return true;
  }

  else{
    return false;
  }
}

int main(){
  cout << "Is stack empty? " << isEmpty() << endl;
  int n;
  cout << "Enter the number of elements to push into the stack: ";
  cin >> n;

  for(int i = 0; i < n; i++){
    int val;
    cout << "Enter value for element " << i + 1 << ": ";
    cin >> val;
    push(val);
  }

  cout << "Peeking and popping elements from the stack: " << endl;
  for(int i = 0; i < n; i++){
    cout << "Top element: " << peek() << endl;
    pop();
  }

  return 0;
}