/*
 * head.h
 *
 *  Created on: Jun 2, 2012
 *      Author: hearcockcrow
 */

#ifndef HEAD_H1_
#define HEAD_H1_

#include <cstdio>

// Cust_Amount defined in Cust_Trolly.cpp,
// can be used anywhere(main.cpp,Cust_Sales.cpp, etc.)
extern int Cust_Amount; // global !!!

void custSales(); // in file Cust_Sales.cpp, with its variables
void custTrolly();// in file Cust_Trolly.cpp, with its variables

void mainFunc(); // in mainFunc.cpp, is the 'main' entrance of our project



#endif /* HEAD_H_ */
