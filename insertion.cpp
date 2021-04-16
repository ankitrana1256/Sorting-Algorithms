#include<iostream>
using namespace std;
int main()
{
int a[100], key, pos, i, n;

cout<<"Enter the size of array :"<<endl;
cin>>n;

cout<<"Enter the elements :"<<endl;
for(i=1;i<=n;i++)
{
cin>>a[i];
}

cout<<"Enter the element to be inserted :"<<endl;
cin>>key;

cout<<"Enter the position :"<<endl;
cin>>pos;

for(i=n;i>=pos;i--)
{
a[i+1]=a[i];
}
a[pos]=key;
n++;
cout<<"Updated array"<<endl;

for(i=1;i<=n;i++)
{
cout<<a[i]<<endl;
}
return 0;
}