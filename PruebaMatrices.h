/*
 * PruebaMatrices.h
 *
 *  Created on: Sep 10, 2018
 *      Author: pablo
 */

#ifndef PRUEBAMATRICES_H_
#define PRUEBAMATRICES_H_
#include <vector>
#include <type_traits>
#include <iostream>
#include <complex>
#include <cmath>
#include <typeinfo>
#include <stdlib.h>

#include <boost/type_traits/is_complex.hpp>
#include <boost/math/tools/polynomial.hpp>
#include <boost/numeric/ublas/matrix.hpp>

namespace bmt=boost::math::tools; // for polynomial
namespace pablo=boost::numeric::ublas;

class PruebaMatrices {

public:
	template<class T> PruebaMatrices(pablo::matrix<T> matriz);
	template<class T> bool esSingular(pablo::matrix<T>& matriz);
	template<class T> void unpack(pablo::matrix<T>& matrizADescomponer, pablo::matrix<T>& matrizL, pablo::matrix<T>& matrizU);
	template<class T> void imprimirMatriz(pablo::matrix<T>& matriz);
	template<class T> void llenarMatriz(pablo::matrix<T>& matriz);
	template<class T> void doolitle(pablo::matrix<T>& matrizInicial, pablo::matrix<T>& matrizLU, std::vector<T> vectorDePermutacion);
	virtual ~PruebaMatrices();
};

#endif /* PRUEBAMATRICES_H_ */
