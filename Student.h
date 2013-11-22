#ifndef STUDENT_H
#define STUDENT_H
#include<string>
using namespace std;
class Student{
public:
    string getName(){
		return this->name;
	}
	long getSID(){
		return this->SID;
	}
	int getSex(){
		return this->sex;
	}
	bool equal(Student other){
		return this->SID==other.SID;
	}
	int getGrade(){
		return this->grade;
	}
	void input();
	void inputgra();
private:
	string name;
	long SID;
	int sex;
	int grade;
};
#endif //STUDENT_H
