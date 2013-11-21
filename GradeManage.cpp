#include "GradeManage.h"

#include "ListWareHouse.h"
#include "EnterWareHouse.h"
#include "OutWareHouse.h"
#include "InputGrade.h"
#include "Exit.h"

#include <iostream>
using namespace std;

GradeManage::GradeManage(){
    menu.append(new ListWareHouse());
    menu.append(new EnterWareHouse());
    menu.append(new OutWareHouse());
	menu.append(new InputGrade());
    menu.append(new Exit());
}

int GradeManage::run(){
    return menu.run();
}
