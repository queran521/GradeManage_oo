#ifndef WAREHOUSE_H
#define WAREHOUSE_H
#include<vector>
using namespace std;
#include"Student.h"
class WareHouse{
	public:
    virtual ~WareHouse();
    void list();
    void in();
    void out();
	void inputgrade();
	void delet();
private:
    vector<Student*> students;
    
    Student* find(Student* student);
    vector<Student*>::iterator it;
	int j;
};

extern WareHouse wareHouse;

#endif // WAREHOUSE_H
