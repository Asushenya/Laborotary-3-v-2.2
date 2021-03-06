#include "stdafx.h"
#include "Mouse.h"
#include <Windows.h>


HANDLE hConsole6 = GetStdHandle(STD_OUTPUT_HANDLE);

Mouse::Mouse(string Name,int Dpi,int Counter):
	            Product(Name)
            {
	            dpi = Dpi;
	            buttonCounter = Counter;
            }


Mouse::~Mouse()
    {
    }

void Mouse::showInfo()
    {
	    SetConsoleTextAttribute(hConsole6, (WORD)((2 << 4) | 10));
	    cout << "���������� � ����: " << endl;
	    Product::showInfo();
	    SetConsoleTextAttribute(hConsole6, (WORD)((2 << 1) | 9));
	    cout << "	dpi: " << dpi  << endl;
	    cout << "	���������� ������: " << buttonCounter  << endl;
	    SetConsoleTextAttribute(hConsole6, (WORD)((0 << 0) | 7));
    }

int Mouse::getDpi()
    {
        return dpi;
    }

int Mouse::getCounter()
    {
        return buttonCounter;
    }