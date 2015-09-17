#include "stdafx.h"
#include "PC.h"
#include <Windows.h>

HANDLE hConsole1 = GetStdHandle(STD_OUTPUT_HANDLE);

PC::PC(string Name,double Cpu):
	Product(Name)
    {
	    cpu = Cpu;
    }


PC::~PC()
    {
    }

void PC::showInfo()
    {
	    SetConsoleTextAttribute(hConsole1, (WORD)((2 << 4) | 10));
	    cout << "Информация о Процессоре: " << endl;
	    SetConsoleTextAttribute(hConsole1, (WORD)((0 << 0) | 7));
	    Product::showInfo();
	    SetConsoleTextAttribute(hConsole1, (WORD)((2 << 2) | 4));
	    cout << "CPU: " << cpu << endl;
	    SetConsoleTextAttribute(hConsole1, (WORD)((0 << 0) | 7));
    }

void PC::setCpu(double CPU)
    {
	    if (CPU < 0)
		    cpu = abs(CPU);
	    else cpu = CPU;
    }

double PC::getCpu()
    {
	    return cpu;
    }