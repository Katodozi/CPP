#include<iostream>
using namespace std;
int main()
{
	int length, breadth, perimeter, area;
	cout<<"Enter the lenght and the breadth of the rectangle:"<<endl;
	cin>>length>>breadth;
	
	area = length * breadth;
	perimeter = 2 * (length + breadth);
	
	cout<<"The area of the rectangle is "<<area<< endl<<"The perimeter of the rectangle is "<<perimeter<<endl;
	return 0;
}
