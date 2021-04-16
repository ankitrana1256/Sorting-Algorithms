#include <iostream>
using namespace std;
int a[20], n=100, x=-1;
void push(int val) {
   if(x>=n-1)
   cout<<"Stack Overflow"<<endl;
   else {
      x++;
      a[x]=val;
   }
}
void pop() {
   if(x<=-1)
   cout<<"Stack Underflow"<<endl;
   else {
      cout<<"The popped element is "<< a[x] <<endl;
      x--;
   }
}
void display() {
   if(x>=0) {
      cout<<"Stack elements are:";
      for(int i=x; i>=0; i--)
      cout<<a[i]<<" ";
      cout<<endl;
   } else
   cout<<"Stack is empty"<<endl;
}
int main() {
   int ch, val;
   cout<<"1) Push in stack"<<endl;
   cout<<"2) Pop from stack"<<endl;
   cout<<"3) Display stack"<<endl;
   cout<<"4) Exit"<<endl;
   do {
      cout<<"Enter choice: "<<endl;
      cin>>ch;
      switch(ch) {
         case 1: {
            cout<<"Enter value to be pushed:"<<endl;
            cin>>val;
            push(val);
            break;
         }
         case 2: {
            pop();
            break;
         }
         case 3: {
            display();
            break;
         }
         case 4: {
            cout<<"Exit"<<endl;
            break;
         }
         default: {
            cout<<"Invalid Choice"<<endl;
         }
      }
   }while(ch!=4);
   return 0;
}