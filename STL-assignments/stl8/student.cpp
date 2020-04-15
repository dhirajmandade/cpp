#include <iostream>
#include "student.h"
#include <cstring>
using namespace std;

student::student(){
	this->rollNo=1;
	strcpy(this->name,"xyz");
	this->marks=1.1;
}
int student::getrollNo(){
	return rollNo;
}
void student::setrollNo(int rollNo){
	this->rollNo=rollNo;

}
const char* student::getname(){
	return name;

}
void student::setname(char* name){
	strcpy(this->name,name);


}
float student::getmarks(){
	return marks;

}
void student::setmarks(float marks){
	this->marks=marks;

}
void student::accept(){
	cout<<"Enter the details of student"<<endl;
	cout<<"Enter roll no:"<<endl;
	//this->setrollNo(rollNo);
	cin>>rollNo;
	cout<<"Enter name:"<<endl;
	//this->setname(name);
	cin>>name;
	cout<<"Enter marks:"<<endl;
	//this->setmarks(marks);
	cin>>marks;

}
void student::display(){
	cout<<"Details of student->"<<endl;
	cout<<"Roll no:"<<this->getrollNo()<<endl;
	cout<<"Name of student:"<<this->getname()<<endl;
	cout<<"Marks:"<<this->getmarks()<<endl;

}
