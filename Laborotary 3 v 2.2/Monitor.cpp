#include "stdafx.h"
#include "Monitor.h"
#include <Windows.h>

HANDLE hConsole4 = GetStdHandle(STD_OUTPUT_HANDLE);

Monitor::Monitor(string Name, float Diagonal,int PPI):
	Product(Name), Display(Diagonal,PPI)
    {
    }


Monitor::~Monitor()
    {
    }

void Monitor::showInfo()
    {
	    SetConsoleTextAttribute(hConsole4, (WORD)((2 << 4) | 10));
	    cout << "Информация о Мониторе: " << endl;
	    SetConsoleTextAttribute(hConsole4, (WORD)((0 << 0) | 7));
	    Product::showInfo();
	    Display::showInfo();
    }

float Monitor::getDiagonal()
    {
        return diagonal;
    }

int Monitor::getPpi()
    {
        return ppi;
    }