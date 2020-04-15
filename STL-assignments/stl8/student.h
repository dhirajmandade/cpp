/*
 * student.h
 *
 *  Created on: 14-Apr-2020
 *      Author: sunbeam
 */

#ifndef STUDENT_H_
#define STUDENT_H_

class student{
private:
	int rollNo;
	char name[20];
	float marks;
public:
	student();
	int getrollNo();
	void setrollNo(int rollNo);
	const char* getname();
	void setname(char* name);
	float getmarks();
	void setmarks(float marks);
	void accept();
	void display();

};



#endif /* STUDENT_H_ */
