#include"Student.h"
#include<iostream>
using namespace std;
void Student::input(){
	cout<<"姓名: "<<endl;
	cin>>this->name;
	cout<<"学号："<<endl;
	cin>>this->SID;
	cout<<"性别："<<endl;
	cin>>this->sex;
}
void Student::inputgra(){
	cout<<"请输入该生的成绩："<<endl;
	cin>>this->grade;
}
