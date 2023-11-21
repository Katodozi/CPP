/* wap using dynamic memory allocation which should input calculation 
of marks of 3 subjects of n student and displayinng the result as pass
 or fail and name, roll no.( pass marks is 45 out of 100in each subject.)*/

#include<iostream>
using namespace std;

class student{
	private:
		char name[20];
		int roll;
		float m1, m2, m3;
		
	public:
		void getdata(){
			cout<<"Enter the name:"<<endl;
			cin>>name;
			cout<<"Enter the roll no:"<<endl;
			cin>>roll;
			cout<<"Enter the marks of three subjects:"<<endl;
			cin>>m1>>m2>>m3;\
			}
		void display(){
			cout<<"Name: "<<name<<endl;
			cout<<"Roll no: "<<roll<<endl;
			if(m1>=45 && m2>=45 && m3>=45){
				cout<<"PASS!!"<<endl;
			}else cout<<"FAIL!!"<<endl;
		}
};
int main(){
	int n, i;
	cout<<"Enter the number of students:"<<endl;
	cin>>n;
	student *ptr;
	ptr = new student[n];//as n numbers of memory space is created and are denoted by ptr[0], ptr[1], etc. 
	for(i=1; i<=n; i++){
		cout<<"Enter the details of "<<i<<"th student:"<<endl;
	
		ptr[i].getdata();
		cout<<"The information of the "<<i<<"th student:"<<endl;
				ptr[i].display();
	}delete[] ptr;
	   
	   return 0;
	
}
