#include<iostream>
using namespace std;
int main(){
	int a=10, b=20, temp; 
	cout<<"before swapping:"<<endl<<a<<" "<<b<<endl;
	temp=a;
	a=b;
	b=temp;
	
	cout<<"after swapping:"<<endl<<a<<" "<<b<<endl;
	return 0;
}
