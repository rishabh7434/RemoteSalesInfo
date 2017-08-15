//============================================================================
// Name        : SalesSurvey.cpp
// Author      : Rishabh
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "../include/SalesInfo.h"
using namespace std;

int main() {
	cout << "Welcome to the sales survey project" <<endl;
	cout << "all the survey information is follow: " << endl;
	SalesInfo sales;
	sales.displayData();
	return 0;
}
