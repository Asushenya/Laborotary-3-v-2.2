#pragma once
#include <string>
#include <iostream>
using namespace std;

class Product
    {
	    protected:
		    string name;
    public:
        Product() {};
	    Product(string);
	    ~Product();

	    void setName(string);
	  virtual  string getName();

	    void showInfo();
    };


