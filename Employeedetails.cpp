/*create a class called 100  employee with data members (empleyee no., name , address , salary). A 
function called readdata() to take the details of the employee from the user and a function called display
data() to display the details of the employee. In main create two objects of the class employee and for 
object call the readdata() and displaydata() function.*/

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
        employee e[50];
        int i;
        for(i=0;i<50;i++){
            cout<<"Enter the details of the Employee "<<i+1<<endl;
            e[i].readdata();
            e[i].displaydata();
            cout<<"_________________________________________________________"<<endl;
        }
         return 0;
    }
