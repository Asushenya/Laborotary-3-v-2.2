#pragma once
#include "PC.h"
#include "Product.h"
#include "Monitor.h"
#include "HeadPhone.h"
#include "Mouse.h"
class WorkStation
	:public Product, public PC ,public Monitor, public HeadPhone,public Mouse
{
protected:
	unsigned int itemCounter;
public:

    WorkStation::WorkStation() :							//WorkStation
        
        Product::Product("empty"),
        PC::PC("empty", 0.0),
        Monitor::Monitor("empty", 0.00, 0),
        HeadPhone::HeadPhone("empty", 0, 0),
        Mouse::Mouse("empty", 0, 0)
    {
        itemCounter = 0;
    }


	WorkStation(string,		  //Product
		string,double,			//PC
		string,float,int,		//Monitor
		string, int, int ,     //HeadPhone
		string, int, int,		//Mouse
		int);					//Workstation

    WorkStation(Product,PC,Monitor,HeadPhone,Mouse,int);
   
    WorkStation(const WorkStation& A);
	~WorkStation();



	void showInfo();

	void setName(string);

    friend class PC;
    void CAN_I_START_GTAV();
   

};

