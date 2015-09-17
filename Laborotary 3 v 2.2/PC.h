#pragma once
#include "Product.h"
class PC:
	public Product
    {
    protected:
	    double cpu;
    public:
        PC() {};
	    PC(string,double );
	    ~PC();

	    void showInfo();

	    void setCpu(double);
	    double getCpu();

        void GTAV();
    };

