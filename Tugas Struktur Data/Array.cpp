#include<iostream>
using namespace std;

int data[50];
int n;

int main()
{
	cout<<"Masukan Jumlah Data :";
	cin>>n;
	cout<<endl;
	for(int i=0; i<n; i++)
	{
		cout<<"Masukan Data Ke : "<<i<<":";
		cin>>data[i];
		cout<<endl;
	}
	cout<<"Data Yang Dimasukkan :";
	for(int i=0;i<n;i++)
	{
		cout<<" "<<data[i];
	}
return 0;
}
