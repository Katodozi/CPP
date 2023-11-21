#include<iostream>
using namespace std;
int main()
{
	int n1, n2, n3;
	cout<<"Enter the three numbers:"<<endl;
	cin>>n1>>n2>>n3;
	
	if(n1>n2 && n1>n3){
		cout<<"The maximum number is "<<n1<<endl;
	}else if(n2>n3){
		cout<<"The maximum number is "<<n2<<endl;
	}else{
		cout<<"The maximum number is "<<n3<<endl;
	}
	return 0;
}
