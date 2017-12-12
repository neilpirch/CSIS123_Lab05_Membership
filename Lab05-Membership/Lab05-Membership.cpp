// Lab05-Membership.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
	const double REGULAR_COST = 85.00;
	const double LIFETIME_COST = 495.00;
	const double DISCOUNT = 0.32;
	
	string	familyName;
	char	memberType;
	int		memberCnt;
	double	memberCost;
	double	totalCost;

	cout << endl << " Enter Family Name: ";
	cin >> familyName;
	cout << endl << " Reg or Life - R/L? ";
	cin >> memberType;
	cout << endl << "  Membership count: ";
	cin >> memberCnt;

	if (memberType == 'L' || memberType == 'l')
		memberCost = LIFETIME_COST;
	else
		memberCost = REGULAR_COST;

	if (memberCnt >= 5)
		memberCost *= (1.0 - DISCOUNT);

	totalCost = memberCost * memberCnt;

	cout << fixed << setprecision(2);
	cout << endl << endl << " " << memberCnt << " memberships @ $ " << memberCost << " =  $" << totalCost << endl << endl;

	cout << endl;
	system("pause");
    return 0;
}

