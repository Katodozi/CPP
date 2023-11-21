#include<iostream>
using namespace std;
int main()
{
	int m1, m2, m3, m4, m5, p;
	cout<<"Enter the marks of health."<<endl;
	cin>>m1;
	cout<<"Enter the marks of science."<<endl;
	cin>>m2;
	cout<<"Enter the marks of math."<<endl;
	cin>>m3;
	cout<<"Enter the marks of moral."<<endl;
	cin>>m4;
	cout<<"Enter the marks of social studies."<<endl;
	cin>>m5;
    	 p = ((m1+m2+m3+m4+m5)*100)/500;
    	 
    	 cout<<"The marks of a student and 5 given subjects are:"<<endl;
    	 cout<<"________________________________________________"<<endl;
    	 cout<<"Health  => "<<m1<<endl;
    	 cout<<"Science => "<<m2<<endl;
    	 cout<<"Math    => "<<m3<<endl;
    	 cout<<"Moral   => "<<m4<<endl;
    	 cout<<"Social  => "<<m5<<endl;
    	 cout<<"________________________________________________"<<endl;
    	 cout<<"The total percentage of the student is ="<<p<<endl;
    	 return 0;
}
