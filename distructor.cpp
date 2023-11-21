#include <iostream>
using namespace std;
class test {
	private:
		static int count;//always initialized to 0 and all the objects of the given class share the same value:
	public:
		test(){
			count++;
			cout<<"Object: "<<count<<"created"<<endl;
		}
		//disructor;
		~test(){
			cout<<"Object:"<<count<<"destroyed"<<endl;
			count--;
		}
};
//static variable must be defined outside the class
     int test::count;

int main(){
	cout<<"Inside main block...."<<endl;
	test t1;
	{
		cout<<"Inside block 1."<<endl;
		test t2,t3;
		cout<<"leaving block 1...."<<endl;
	}
	cout<<"Back to main block..."<<endl;
	return 0;
}
