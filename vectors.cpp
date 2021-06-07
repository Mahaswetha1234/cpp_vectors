#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int>ve;
	ve.push_back(10);
	ve.push_back(20);
	ve.push_back(30);
	cout<<"Elements in vector ve are:";
	for(int i=0;i<ve.size();i++)
	{
		cout<<ve[i]<<" ";
	}
	cout<<"\n";
	cout<<"Elements in the vector arr are:";
	vector<int>arr(3,100);  
	for(int i=0;i<arr.size();i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<"\n";
	arr.push_back(20);
	cout<<"Elements in vector arr after inserting another element:";
	for(int i=0;i<arr.size();i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<"\n";
	cout<<"Coping elements from vector ve to vel:";
	vector<int>vel(ve);
	for(int i=0;i<vel.size();i++)
	{
		cout<<vel[i]<<" ";
	}
	cout<<"\n";
	vector<int>::iterator a = arr.begin();
	cout<<"Address of the 1st element in arr vector:";
	cout<<&a<<"\n";
	cout<<"Element at the 1st address:";
	cout<<*(a)<<"\n";
	a++;
	cout<<"Element at 2nd address:";
	cout<<*(a)<<"\n";
	for(vector<int>::iterator a = arr.begin();a!=arr.end();a++);
	{
		cout<<*(a)<<" ";
	}
	cout<<"\n";
	for(vector<int>::iterator a = arr.begin();a!=arr.end();a++)
	{
		cout<<*(a)<<" ";
	}
	cout<<"\n";
	/*for(vector<int>::iterator a : arr)
	{
		cout<<a<<" ";
	}
	cout<<"\n";*/
	return 0;
}
