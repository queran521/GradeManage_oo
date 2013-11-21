#ifndef ENTERWAREHOUSE_H
#define ENTERWAREHOUSE_H

#include "MenuItem.h"

#include "WareHouse.h"
class EnterWareHouse:public MenuItem{
public:
    EnterWareHouse():MenuItem("选课（添加学生）"){}
    bool act(){
        wareHouse.in();
        return false;
    }
};

#endif // ENTERWAREHOUSE_H
