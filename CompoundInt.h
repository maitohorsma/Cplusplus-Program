#ifndef AIRGEADBANKING_COMPOUNDINT_H
#define AIRGEARDBANKING_COMPOUNDINT_H

using namespace std;

// class declaration
class CompoundInterest {
public:
	static void yearlyInt(double investment, double interest, int years);
	static void yearlyIntPlusDep(double investment, double deposit, double interest, int years);
	static void printYearlyInt();
	static void printYearlyIntPlusDep();
};

#endif