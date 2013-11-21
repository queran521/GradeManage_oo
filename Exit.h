#ifndef EXIT_H
#define EXIT_H

#include<iostream>
#include"MenuItem.h"
using namespace std;
class Exit:public MenuItem{
public:
    Exit():MenuItem("退出程序"){}
    bool act(){
        cout<<"退出程序！"<<endl;
        return true;
    }
};

#endif // EXIT_
