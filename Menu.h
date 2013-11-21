#ifndef MENU_H
#define MENU_H
#include <vector>
#include "MenuItem.h"
class Menu{
public:
    ~Menu(){
    for(auto &item:items){
        delete item;
    }
}
	void append(MenuItem* mi){
    this->items.push_back(mi);
}
	int run();
private:
	void show();
	vector<MenuItem*> items;
};
#endif //MMMENU_H
