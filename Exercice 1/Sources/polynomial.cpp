/*
 * polynomial.cpp
 *
 *  Created on: Sep 30, 2019
 *      Author: pcoo29
 */
#include "polynomial.h"

Polynomial::Polynomial()
	{coefficients.push_back(0);}
Polynomial::Polynomial(unsigned short int imput_degree)
	{double buffer=0;
	for(unsigned short int i=0; i<=imput_degree; i++)
		{
		coefficients.push_back(buffer);
	}}

