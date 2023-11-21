#include <iostream>
using namespace std;
int main()
{
	float p, t, r, SI;
	cout<<"Enter the profit:"<<endl;
	cin>>p;
	cout<<"Enter the time and rate:"<<endl;
	cin>>t>>r;
	
	SI = (p * t * r)/100;
	
	cout<<"The simple intrest ="<<SI;
	
	return 0;
}
