/**
 * Copyright (C) 2017-2018
 * Área Académica de Ingeniería en Computadoras, ITCR, Costa Rica
 *
 * This file is part of the numerical analysis lecture CE3102 at TEC
 *
 * @author Pablo Alvarado
 * @date   18.08.2018
 */

#include <vector>
#include <type_traits>
#include <iostream>
#include <complex>
#include <cmath>
#include <typeinfo>

#include <boost/type_traits/is_complex.hpp>
#include <boost/math/tools/polynomial.hpp>
#include <boost/numeric/ublas/matrix.hpp>

  namespace bmt=boost::math::tools; // for polynomial
  namespace pablo = boost::numeric::ublas;

	pablo::matrix<int> prueba (2,3);
	/* for(int unsigned(i) = 0 ; i < prueba.size1(); i++){
		for (int unsigned(j) = 0 ; j < prueba.size1() ; j++)
			prueba(i,j)= i+j;
	}
	for(int unsigned(i) = 0 ; i < prueba.size1(); i++){
			for (int unsigned(j) = 0 ; j < prueba.size1() ; j++)
				std::cout << prueba(i,j) << std::endl;
	}*/

	/*
	double* arreglo = &vector[0];
	boost::array<double> d3a;
	for (int i = 0 ; i < a.degree() ; ++i){
		//polyDerivado[i] = a[i]*NTemporal;
		//NTemporal-=1;
		d3a[i] = i;
	}
	//bmt::polynomial<double> polyDerivado (d3a.begin(), d3a.end());
	std::cout << polyDerivado << std::endl;

	boost::array<double, 4> const d3a = {{1,3,-4,-12}};
	bmt::polynomial<double> const a(d3a.begin(), d3a.end());
	boost::array<double, 3> const d3b = {{1,1,-6}};
	bmt::polynomial<double> const b(d3b.begin(), d3b.end());
	std::vector<bmt::polynomial<int>> H(2);
	H[0] = a;
	H[1] = b;
	std::cout << H[0][2] << std::endl;	##Imprime -4

	 std::vector<int> H(5);
	for (int i = 0; i <= 5 ; i++) H[i] = i;
	for (int i = 0; i <= 5 ; i++) std::cout << H[i] << std::endl; ##Imprime el vector.
	std::cout << H[3] << std::endl;	##Imprime 3


	boost::array<double, 4> const d3a = {{1,3,-4,-12}};
	bmt::polynomial<double> const a(d3a.begin(), d3a.end());
	int grado = a.evaluate(5);		##Imprime el polinomio evaluado en ese punto.
	int grado = a.degree();			##Imprime 3
	boost::array<double, 3> const d3b = {{1,1,-6}};
	bmt::polynomial<double> const b(d3b.begin(), d3b.end());
	bmt::polynomial<double> const c = a/b;
	std::cout << a << std::endl;		##Imprime el primer polinomio.
	std::cout << b << std::endl;		##Imprime el segundo polinomio.
	std::cout << c << std::endl;		##Imprime el polinomio resultante, pero en polinomios no exactos no da bien.



	std::complex<double> prueba = 3.0+4i;
	if(typeid(prueba) == typeid(std::complex<double>))
		std::cout << "Verdadero" << std::endl;				##Imprime verdadero.
	else
		std::cout << "Falso" << std::endl;


	Estas son las mañanitas que cantaba el gay David.


	std::size_t epsilon = pow(10,-3);
	std::cout << epsilon << std::endl;		#Imprime 0.001
	std::complex<double> prueba = 2+3i;
	std::cout << prueba << std::endl;		##Imprime (2,3)
	std::cout << prueba.imag() << std::endl;	##Imprime 3
	std::cout << prueba.real() << std::endl;	##Imprime 2
	std::cout << prueba << std::endl;*/

