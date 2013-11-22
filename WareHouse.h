#ifndef WAREHOUSE_H
#define WAREHOUSE_H
#include<vector>
using namespace std;
#include"Student.h"
class WareHouse{
	public:
    void list();
    void in();
    void out();
	void inputgrade();
private:
    vector<Student> students;
    
    Student* find(Student student);
    vector<Student>::iterator it;
};

extern WareHouse wareHouse;

#endif // WAREHOUSE_H
