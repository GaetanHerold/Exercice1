/*
 * Polynome.cpp
 *
 *  Created on: Oct 3, 2019
 *      Author: pcoo52
 */

#include "Polynome.h"
#include <iostream>
#include <sstream>
#include <vector>
using namespace std;


Polynome::Polynome(vector<double> new_vect)
{
	cout << "un nouveau polynôme est créé.";
	for (size_t i=0; i < new_vect.size(); ++i)
	{
		table_coeff.push_back(new_vect[i]);
	}
	degre_max = table_coeff.size()-1;
}

Polynome::~Polynome() {}

vector<double>& Polynome::get_coeff() { return table_coeff;}

unsigned short int& Polynome::get_degre_max() { return degre_max; }
