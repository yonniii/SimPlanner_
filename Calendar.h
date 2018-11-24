#ifndef CALENDAR_H
#define CALENDAR_H
#include <string>
#include <iostream>

using namespace std;

class PlanView{

    public:
    void add(Plan p);
    void remote();
    
    private:
    bool selected;

};

#endif