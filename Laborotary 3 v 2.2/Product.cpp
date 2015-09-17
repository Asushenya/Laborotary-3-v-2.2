#include "stdafx.h"
#include "Product.h"
#include <Windows.h>

    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

Product::Product(string Name)
    {
	    name = Name;
    }


Product::~Product()
    {
    }

void Product::showInfo()
    {
	    //SetConsoleTextAttribute(hConsole, (WORD)((2 << 2 ) | 4));
	    SetConsoleTextAttribute(hConsole, (WORD)((2 << 2) | 20));
	    cout << "Наименование продукта: "<<name<<endl;
	    SetConsoleTextAttribute(hConsole, (WORD)((0 << 0) | 7));
    }

void Product::setName(string Name)
    {
	    if (Name.length())
	    name = Name;
    }

string Product::getName()
    {
	    return name;
    }