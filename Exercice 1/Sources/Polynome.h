/*
 * Polynome.h
 *
 *  Created on: Oct 3, 2019
 *      Author: pcoo52
 */

#ifndef POLYNOME_H_
#define POLYNOME_H_
#include <iostream>
#include <vector>
using namespace std;

class Polynome
{

private:
	vector<double> table_coeff;
	unsigned short int degre_max;

public:
	Polynome(vector<double>);
	Polynome() : degre_max(0){}
	virtual ~Polynome();
	vector<double>& get_coeff();
	unsigned short int& get_degre_max();

};

#endif /* POLYNOME_H_ */
