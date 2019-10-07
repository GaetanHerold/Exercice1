/*
 * main.cpp
 *
 *  Created on: Oct 3, 2019
 *      Author: pcoo52
 */
#include "Polynome.h"
#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

int main (){
	//ceci est un test

	cout << "Création de deux polynômes: " << endl;
	vector<double> coeff_p1({-2,7,-8});
	vector<double> coeff_p2({10,0,-3,4});
	Polynome p1(coeff_p1);
	Polynome p2(coeff_p2);
	cout << "Les polynomes sont créés.";
	cout << "P1(x) = " << "_"/*afficher p1 en mode propre */ << endl;
	cout << "P2(x) = " << "_"/*afficher p2 en mode propre */ << endl;
	cout << "P1(x) + P2(x) = " << "_"/*effectuer p1 + p2 */ << endl;
	cout << "P1(x) * P2(x) = " << "_"/*effectuer p1 * P2 */ << endl;

	return 0;
}
