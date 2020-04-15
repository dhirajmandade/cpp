/* Create a student class storing roll number, name (use char[] not string) and marks. Write a menu
driven File IO program using C++ library classes to add student, display all students, find student
by roll number and edit student.*/

#include <fstream>
#include "student.h"
#include <iostream>
using namespace std;
int menu_list()
{
	cout<<"0.EXIT"<<endl;
	cout<<"1.ADD STUDENT"<<endl;
	cout<<"2.DISPLAY ALL STUDENT"<<endl;
	cout<<"3.FIND STUDENT BY ROLL NO"<<endl;
	cout<<"4.EDIT STUDENT"<<endl;
	cout<<"ENTER CHOICE:\t";
	int choice;
	cin>>choice;
	return choice;
}

int main() {
	ofstream ofile;
	ifstream ifile;
	student s;
	int choice;

	while((choice=menu_list())!=0)
	{
		switch(choice)
		{

		case 1:
			ofile.open("student",ios::binary|ios::app);
			s.accept();
			ofile.write((char*)&s,sizeof(student));
			ofile.close();
			break;
		case 2:
			ifile.open("student",ios::binary);
			while(!ifile.eof())
			{
				ifile.read((char*)&s,sizeof(student));
				s.display();
				cout<<endl;
			}
			ifile.close();
			break;
		case 3:
			ifile.open("student",ios::binary);
			cout<<"Enter roll no of student to be searched:\t";
			int roll_no;
			cin>>roll_no;
			while(!ifile.eof()){
				ifile.read((char*)&s,sizeof(student));
				if(s.getrollNo()==roll_no)
					s.display();
			}
			ifile.close();
			break;
		case 4:
			ifile.open("student",ios::binary);
						cout<<"Enter roll no of student to be edited:\t";
						int roll_no1;
						cin>>roll_no1;
						while(!ifile.eof()){
							ifile.read((char*)&s,sizeof(student));
							if(s.getrollNo()==roll_no1)
								s.display();
							cout<<"Re-enter the details of students:"<<endl;
							s.accept();
							s.display();
						}
						ifile.close();
			break;
		default:
			cout<<"ENTER VALID CHOICE"<<endl;
		}

	}
	return 0;
}
