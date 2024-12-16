//student.cpp                     在此文件中进行函数的定义
#include<cstring>
#include <iostream>
#include "student.h"            //不要漏写此行，否则编译通不过
using namespace std;
void Student::display()         //在类外定义display类函数
{
    cout << "num：" << num << endl;
    cout << "name："<< name << endl;
    cout << "sex：" << sex << endl;
}
Student::Student() {
    num = 0;
    name[0] = '0';
    for (int i = 1; i < 20; i++)
        name[i] = '\0';
    sex = 'm';
}
Student::Student(int num,const char* Name, char sex) {
    this->num = num;
    int len = strlen(Name);
    int i = 0;
    while (i < 20) {
        if (i < len)
            name[i] = Name[i];
        else name[i] = '\0';
        i++;
    }
    this->sex = sex;
}
void Student::set_value(int num, const char* Name, char sex) {
    this->num = num;
    int len = strlen(Name);
    int i = 0;
    while(i<20){
        if (i < len)
            name[i] = Name[i];
        else name[i] = '\0';
        i++;
    }
    this->sex = sex;
}