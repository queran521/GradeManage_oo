#include "WareHouse.h"

#include <iostream>
#include<vector>
using namespace std;

WareHouse wareHouse;


void WareHouse::list()
{
    cout<<"-------已选学生-------"<<endl;
    cout<<"姓名\t"<<"学号\t  "<<"性别"<<endl;
    
	//C++11 中新引入的基于范围的for循环，更简介！
    for(auto &item:students){
        cout<<item.getName()<<"\t"<<item.getSID()<<"\t  "<<item.getSex()<<endl;
    }
    cout<<"-------已选学生-------"<<endl;
}
void WareHouse::in(){
	Student temp;
    temp.input();
    Student* result = this->find(temp);
    if(result == NULL){
        this->students.push_back(temp);
    }
}

void WareHouse::out(){
	Student temp;
    temp.input();
    
    Student* result = this->find(temp);
    if(result==NULL){
        cout<<"该生未选此课！"<<endl;
    }
	else{
		for(it=students.begin();it!=students.end();){
		if(it->equal(temp)){
			students.erase(it);
			break;
		}
		}
	}
}

Student* WareHouse::find(Student student){
    //传统的for循环 
        for(unsigned int i=0; i<this->students.size(); i++){
                if(students[i].equal(student)){
                    return &students[i];
				}
        }
		return NULL;
}
void WareHouse::inputgrade(){
	for(unsigned int i=0; i<this->students.size(); i++){
        this->students[i].inputgra();
	}
}

