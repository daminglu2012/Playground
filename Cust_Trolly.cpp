/*
 * f2.cpp
 *
 *  Created on: Jun 2, 2012
 *      Author: hearcockcrow
 */

#include "head.h"
#include <cmath>

int Cust_Amount = 30; // define that global, cross-file variable,
int Trolly_Amount = 5; // local variable that is alive inside this file

void custTrolly(){
	printf("custTrolly()\n");
	printf("Cust_Amount == %d\n", Cust_Amount);
	int trollyIndex = 0;
	for(int i = 0; i<Cust_Amount; i++){
		if(i%6==0){
			printf("Cust[%d] gets trolly[%d]\n",i,trollyIndex++);
		}
	}
}
