/*
 * SalesInfo.cpp
 *
 *  Created on: Aug 15, 2017
 *      Author: rishabh
 */

#include "../include/SalesInfo.h"

SalesInfo::SalesInfo() {
	// TODO Auto-generated constructor stub

}

SalesInfo::~SalesInfo() {
	// TODO Auto-generated destructor stub
}
// values of the data which has been sold in recent months
int datavalue[] = {1 , 30 , 48, 50, 60};
// displaying the data which has been sold in recent months
void SalesInfo::displayData(){
	cout << "Items which has been sold are as follow: "<<endl;
	cout << "--------------------------------------------" <<endl;
	for(int i : datavalue){
		cout<< "Item number : " << i <<endl;
	}

}
