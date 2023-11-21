#include<iostream>
using namespace std;
int main(){
	int profit, time, rate;
	float SI;
	
	cout<<"Enter the profit:"<<endl;
	cin>>profit;
	cout<<"Enter the time:"<<endl;
	cin>>time;
	cout<<"Enter the rate:"<<endl;
	cin>>rate;
	
	SI = (profit * time * rate)/100;
	
	cout<<"The simple intrest of the given data is "<<SI<<endl;
	return 0;
}
