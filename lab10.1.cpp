#include<iostream>
#include<cstring>
using namespace std;

class Employee
{
	private:
		    char name[30];
		    char gender[10];
		    double id;
		    int age;
	public:
	       Employee();
		   Employee(char [], char [],int,double);
		   void setName(char[]);
		   void setGender(char[]);
		   void setAge(int);
		   void setId(double);
		   
		   char* getName();
		   char* getGender();
		   int getAge();
		   double getId();
		   void display();
		   	    
};
Employee :: Employee(){
	strcpy(name,"ALI AHMAD");
	strcpy(gender,"Male");
	age = 20;
	id = 166;
}
Employee :: Employee(char Name[], char Gender[],int Age,double Id)
{
	strcpy(name, Name);
	strcpy(gender, Gender);
	age = Age;
	id =  Id;
}
void Employee ::setName(char Name[])
{
	strcpy (name, Name) ;
}
void Employee :: setGender(char Gender[])
{
	strcpy(gender, Gender);
}
void Employee :: setAge(int Age)
{
	age = Age;
}
void Employee :: setId(double Id)
{
	id = Id;
}
char* Employee::getName()
{
	return name;
}
char* Employee ::getGender()
{
	return gender;
}
int Employee ::getAge()
{
	return age;
}
double Employee :: getId()
{
	return id;
}
void Employee :: display()
{
		cout<<endl<< "The name of the Employee is " << name <<endl;
		cout<< "The gender of the Employee is " << gender <<endl;
		cout<< "The age of the Employee is " << age <<endl;
		cout<< "The Id of the Employee is " << id <<endl;
}
int main(){
	Employee e1;
	
	Employee e2("uzair", "Male", 30, 14.);
	e1.display();
	e2.display();
	e1.setName("Hanzla");
	e1.setGender("Male");
	e1.setAge(40);
	e1.setId(300);
	cout<<endl;

    cout<< "The name of the Employee 1 is " << e1.getName() <<endl; // displaying Name of employee
    cout<< "The gender of the Employee 1 is " << e1.getGender() <<endl; // displaying gender of employee
    cout<< "The age of the Employee 1 is " << e1.getAge() <<endl; // displaying age of employee
	system("pause");
	return 0;
	}
