#include<iostream>
using namespace std;
int main()
{
int a[100], i, n, del, temp=-2;

cout<<"Enter the array size"<<endl;
cin>>n;

cout<<"Enter the elements"<<endl;
for(i=1;i<=n;i++)
{
    cin>>a[i];
}

cout<<"Enter the element to be deleted"<<endl;
cin>>del;

for(i=1;i<=n;i++)
{
    if(a[i]==del)
    {
        temp=i;
    }
}

if(temp==-2)
{
    cout<<"Element not present"<<endl;
}
else
{
    cout<<"Element found at position"<<temp<<endl;
}

if(temp!=-2)
{
    for(i=temp;i<=n;i++)
    {
        a[i]=a[i+1];
    }
    n--;
}

cout<<"updated array is"<<endl;
for(i=1;i<=n;i++)
{
    cout<<a[i]<<endl;
}
return 0;
}