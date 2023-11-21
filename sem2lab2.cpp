#include<iostream>
using namespace std;

class employee{
    private:
    int employee_no;
    char name[20];
    char address[100];
    int salary;

    public:
    void readdata(){
        cout<<"Enter the employee no. of employee:"<<endl;
        cin>>employee_no;
         cout<<"Enter the name of employee:"<<endl;
        cin>>name;
         cout<<"Enter the adddress of employee:"<<endl;
        cin>>address;
         cout<<"Enter the salary of employee:"<<endl;
        cin>>salary;
    }
    void displaydata(){
        cout<<"The details of the employee are:"<<endl;
        cout<<"________________________________"<<endl;
        cout<<"Employee no. => "<<employee_no<<endl;
        cout<<"Name         => "<<name<<endl;
        cout<<"Address      => "<<address<<endl;
        cout<<"Salary       => "<<salary<<endl;
    }};
    int main()
    {
        employee e1;
            cout<<"Enter the details of the Employee "<<endl;
            e1.readdata();
            e1.displaydata();
            
            cout<<"_________________________________________________________"<<endl;
        
         return 0;
    }
