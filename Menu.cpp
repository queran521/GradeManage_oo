#include <iostream>
#include"Menu.h"
#include "MenuItem.h"
#include <vector>
using namespace std;


int Menu::run(){
    int index;
    while(1){
        this->show();
        cin>>index;
		unsigned int size=items.size();
        if(!cin||index<1||index>size){
            cout<<"错误的菜单项，请重新输入!"<<endl;
            if(!cin){
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }
            continue;
        }
        if(items[index-1]->act()) break;
    }
    return 0;
}
void Menu::show(){
    int i=0;
	cout<<"-----------菜单-------------"<<endl;
    for(auto &item:items){
        cout<< ++i <<")" <<item->getCaption() <<endl;
    }
	cout<<"-----------菜单-------------"<<endl;
}
