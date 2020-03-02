#include<iostream>
using namespace std;

int kj(int j,int m,int d){
	int k;
	k = (j*360)+(m*60)+d;
	return k;
}
int main ()
{
	int jam1,menit1,detik1;
	
	cout<<"Masukan Jam 1 :"; cin>>jam1;
	cout<<"Masukan Menit 1 :"; cin>>menit1;
	cout<<"Masukan Detik 1 :"; cin>>detik1;
	
	int jam2,menit2,detik2;
	
	cout<<"Masukan Jam 2 :"; cin>>jam2;
	cout<<"Masukan Menit 2 :"; cin>>menit2;
	cout<<"Masukan Detik 2 :"; cin>>detik2;
	
cout<<"Jumlah Detik 1 :"<<kj(jam1,menit1,detik1)<<endl;
cout<<"Jumlah Detik 2 :"<<kj(jam2,menit2,detik2)<<endl;
	int jumlah;
	jumlah = kj(jam1,menit1,detik1)+kj(jam2,menit2,detik2);
	cout<<"Hasil :"<<jumlah;
}
