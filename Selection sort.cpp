#include<iostream>
using namespace std;
int main()
{
int i, j, n, a[10], m, temp, l;

cout<<"Enter the size of array :"<<endl;
cin>>n;

cout<<"Enter the elements :"<<endl;
for(i=0;i<n;i++)
{
    cin>>a[i];
}

for(i=0;i<n-1;i++)
{
	m=a[i];
	l=i;
	for(j=i+1;j<n;j++)
	{
		if(a[j]<m)
		{
			m=a[j];
			l=j;
		}
	}
	temp=a[i];
	a[i]=a[l];
	a[l]=temp;
}
cout<<"Updated array :"<<endl;
for(i=0;i<n;i++)
{
    cout<<a[i]<<endl;
}

return 0;
}