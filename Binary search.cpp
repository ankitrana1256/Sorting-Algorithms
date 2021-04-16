#include<iostream>
using namespace std;
int main()
{
int i, n, a[10], first, last, mid, key;

cout<<"Enter the size of array :"<<endl;
cin>>n;

cout<<"Enter the elements :"<<endl;
for(i=0;i<n;i++)
{
cin>>a[i];
}

cout<<"Enter the element to be searched :"<<endl;
cin>>key;

first=0;
last=n-1;
mid=(first+last)/2;

while(first<=last)
{
    if(a[mid]<key)
    {
        first=mid+1;
    }
    else if(a[mid]==key)
    {
        cout<<key<<" found in the array at the location "<<mid+1<<endl;
        break;
    }
    else
    {
        last=mid-1;
    }
    mid=(first+last)/2;
}
if(first>last)
{
    cout<<"Element not present"<<endl;
}
return 0;
}