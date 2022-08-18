// Emily Richards

#include <iostream>
#include <iomanip>
#include "CompoundInt.h"

using namespace std;

// calculate interest without monthly deposits
void CompoundInterest::yearlyInt(double investment, double interest, int years) {
	// define variables
	double m_yearEndBalance;
	double m_yearEndInt;
	double m_monthlyInt;
	int m_years;
	int year;

	m_yearEndBalance = investment;

	for (int i = 1; i < years + 1; i++) {
		year = i;
		m_monthlyInt = m_yearEndBalance * (interest / 100) / 12;
		m_yearEndInt = m_monthlyInt * 12;
		m_yearEndBalance = m_yearEndBalance + m_yearEndInt;
		cout << setprecision(2) << fixed << "   " << i << setfill(' ') << setw(20);
		cout << '$' << m_yearEndBalance << setw(20) << '$' << m_yearEndInt << endl;
	}
}

// calculate interest with monthly deposit
void CompoundInterest::yearlyIntPlusDep(double investment, double deposit, double interest, int years) {

	// define variables
	double m_yearEndBalance;
	double m_yearEndInt;
	double m_monthlyInt;
	int m_years;
	int i;
	int j;

	m_yearEndBalance = investment;

	for (int i = 1; i < years + 1; i++) {
		m_yearEndInt = 0;
		for (int j = 0; j < 12; j++) {
			m_yearEndInt = m_yearEndInt + (m_yearEndBalance + deposit) * ((interest / 100) / 12);
			m_yearEndBalance = (m_yearEndBalance + deposit) * (1 + (interest / 100) / 12);
		}
		cout << setprecision(2) << fixed << "   " << i << setfill(' ') << setw(20);
		cout << '$' << m_yearEndBalance << setw(20) << '$' << m_yearEndInt << endl;
	}
}

void CompoundInterest::printYearlyInt() {
	cout << endl;
	cout << "       Balance and Interest Without Monthly Deposits" << endl;
	cout.width(60);
	cout.fill('=');
	cout << "" << endl;
	cout << "  Year       Year End Balance     Year End Earned Interest" << endl;
	cout.width(60);
	cout.fill('-');
	cout << "" << endl;

}

void CompoundInterest::printYearlyIntPlusDep() {
	cout << endl;
	cout << "         Balance and Interest With Monthly Deposits" << endl;
	cout.width(60);
	cout.fill('=');
	cout << "" << endl;
	cout << "  Year       Year End Balance     Year End Earned Interest" << endl;
	cout.width(60);
	cout.fill('-');
	cout << "" << endl;
}

