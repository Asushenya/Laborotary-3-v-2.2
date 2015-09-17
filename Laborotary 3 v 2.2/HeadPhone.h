#pragma once
#include "Product.h"
class HeadPhone:
	public Product
{
protected:
	int upBorder;
	int downBorder;
public:
    HeadPhone() {};
	HeadPhone(string,int,int);
	~HeadPhone();

	void showInfo();

    int getUPBorder();
    int getDownBorder();
};

