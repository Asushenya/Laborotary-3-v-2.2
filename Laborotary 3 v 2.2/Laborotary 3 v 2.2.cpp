// Laborotary 3 v 2.2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Product.h"
#include "PC.h"
#include "WorkStation.h"
#include "Display.h"
#include "Monitor.h"
#include "HeadPhone.h"
#include "Mouse.h"
#define masSize 3

void showArray(WorkStation *a)
{
    cout << "--------------Выводим Массив:---------------\n";
    int i = 0;
    for (i;i < masSize;i++)
   // while ((a+i) != NULL)
    {
        (a + i)->showInfo();
      
    }
    cout << "Массив выведен\n\n\n";
}


int main()
{
	setlocale(0, "");

	WorkStation Apple("Apple",
		"Intel Pentium",2.4,
		"LG",17.3,450,
		"Sony",20,20000,
		"SteelSeries",490,10,
		6);
    
    Product Dell ("DELL");
    PC AMD("AMD", 3.6);
    Monitor Samsung("Samsung",25.4,450);
    HeadPhone Sony("Sony", 10, 25000);
    Mouse Raizer("Razer DeathAdder",6'400,5);


	//a.showInfo();
	Apple.setName("Lenovo");
	//a.showInfo();
	
   
    
  //  Dell.showInfo(); AMD.showInfo(); Samsung.showInfo();Sony.showInfo();Raizer.showInfo();
    WorkStation DellWS (Dell,AMD,Samsung,Sony,Raizer,5);
    //DellWS.showInfo();
    
    WorkStation EMPTY = WorkStation();

    WorkStation *Array = new WorkStation[masSize];
    *(Array) = Apple;
    *(Array + 1) = DellWS;
    *(Array + 2) = EMPTY;
    
   
    *Array = Apple;
    *(Array + 1) = DellWS;
    *(Array + 2) = EMPTY;

    // showArray(Array);
    delete [] Array;
    cout << sizeof(PC);
    return 0;
}

