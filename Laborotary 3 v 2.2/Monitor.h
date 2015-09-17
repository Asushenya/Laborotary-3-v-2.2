#pragma once
#include "Display.h"
#include "Product.h"
class Monitor:
	public Product,public Display
        {

        public:
            Monitor() {};
	        Monitor(string,float,int);

	        ~Monitor();

	        void showInfo();
	
            float getDiagonal();
            int getPpi();
        };

