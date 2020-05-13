#include<iostream>
using namespace std;

int main (){
	for(int a=1; a <=5; a++){
		for (int b=5; b> a; b--){
			cout << " ";
		}
	for (int c=1 ; c<= a; c++){
		cout << "*";
	}
	cout <<endl;
	}
	return 0;
}
