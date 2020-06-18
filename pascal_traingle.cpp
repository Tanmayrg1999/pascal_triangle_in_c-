#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter the rows to display";
	cin>>n;
	int arr[20]={1,1};
	int temp[20]={1,1};
	cout<<"1"<<endl;
	cout<<"1	1"<<endl;
	for(int i=2;i<n;i++)
	{
		cout<<arr[0]<<"\t";
		for(int j=1;j<i;j++)
		{
			temp[j]=arr[j]+arr[j-1];
			cout<<temp[j]<<"\t";
		}
		for(int j=1;j<i;j++)
		{
			arr[j]=temp[j];
		}
		temp[i]=1;
		arr[i]=1;	
		cout<<arr[i];
		cout<<"\n";

	}	
}
