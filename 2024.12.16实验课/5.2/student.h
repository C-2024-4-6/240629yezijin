//student.h                (这是头文件，在此文件中进行类的声明)
#pragma once
class Student              //类声明
{
public:                   //公用成员函数原型声明
	void display();
	Student();
	Student(int, const char*, char);
	void set_value(int, const char*, char);
private:
	int num;
	char name[20];
	char sex;
}; 
