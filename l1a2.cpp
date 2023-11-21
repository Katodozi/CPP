#include<iostream>
#define PI 3.1416
using namespace std;
int main()
{
	int radius;
	float area;
	cout<<"Enter the radius:"<<endl;
	cin>>radius;
	
	area = PI * radius * radius;
	
	cout<<"Area of the circle is "<<area<<endl;
	
	return 0;
	
}
