#include <iostream>
#include <cstring>
using namespace std;
class Employee{
	public:
		int empId;
		string empName;
		int basicSalary;
		double DA;
		double HRA=800;
		double I_Tax;
		double totalSalary;

		void accept(){
			cout<<"Enter the name of the employee: ";
			getline(cin, empName);
			cout<<"Enter the ID number of the employee: ";
			cin>>empId;
			cout<<"Enter the basic salary of the employee: ";
			cin>>basicSalary;
		}

		void calculateDA(int salary){
			DA=salary*.25;
		}

		void calculateITax(int salary){
			I_Tax=salary*(.15);
		}

		void calculateTotalSalary(Employee obj){
			totalSalary=(obj.basicSalary+obj.DA+obj.HRA-obj.I_Tax);
		}

		void display(){
			cout<<"\nEmployee ID: "<<empId<<endl;
			cout<<"Employee Name: "<<empName<<endl;
			cout<<"Basic salary: "<<basicSalary<<endl<<endl;
			for(int i=0; i<(15+empName.size()); i++)
				cout<<"-";
			cout<<"\n\nDA(25%): "<<DA<<endl;
			cout<<"HRA: "<<HRA<<endl;
			cout<<"Income Tax: "<<I_Tax<<endl;
			cout<<"Net Salary: "<<totalSalary<<endl;
		}
};

int main(){
	Employee emp1;
	emp1.accept();
	emp1.calculateDA(emp1.basicSalary);
	emp1.calculateITax(emp1.basicSalary);
	emp1.calculateTotalSalary(emp1);
	emp1.display();
	return 0;
}