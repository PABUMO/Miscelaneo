/*
 * PruebaMatrices.cpp
 *
 *  Created on: Sep 10, 2018
 *      Author: pablo
 */

#include "PruebaMatrices.h"

template<class T> PruebaMatrices::PruebaMatrices(pablo::matrix<T> matriz) {

	if(matriz.size1() != matriz.size2())
		throw std::invalid_argument("No es cuadrada");
	else{
		if(esSingular(matriz) == true)
			throw std::invalid_argument("Matriz singular");
		else{
			//std::size_t n = matriz.size1();
			//pablo::matrix<T> matrizL(n,n);
			//pablo::matrix<T> matrizU(n,n);
			//llenarMatriz(matriz);
			//imprimirMatriz(matriz);
			//unpack(matriz, matrizL, matrizU);
			//imprimirMatriz(matrizL);
			//imprimirMatriz(matrizU);
			pablo::matrix<T> matriz2(3,3);
			matriz2(0,0) = T(4);	//Matriz a utilizar de prueba.
			matriz2(0,1) = T(2);
			matriz2(0,2) = T(-3);
			matriz2(1,0) = T(0);
			matriz2(1,1) = T(-3);
			matriz2(1,2) = T(-2.5);
			matriz2(2,0) = T(0);
			matriz2(2,1) = T(0);
			matriz2(2,2) = T(0);
			std::cout << "Matriz 1" <<std::endl;
			imprimirMatriz(matriz);
			std::cout << "Matriz 2" << std::endl;
			imprimirMatriz(matriz2);
			std::cout << "Producto de matrices" << std::endl;
			matriz2 = prod(matriz, matriz2);
			imprimirMatriz(matriz2);
		}
	}
}

template<class T> bool PruebaMatrices::esSingular(pablo::matrix<T>& matriz){

	T determinante = matriz(0,0);

	if (determinante != T(0))
		return false;
	else
		return true;

}

template<class T> void PruebaMatrices::imprimirMatriz(pablo::matrix<T>& matriz){

	std::cout << "Imprimir matriz" << std::endl;

	for(std::size_t i = 0 ; i < matriz.size1(); i++){
		for (std::size_t j = 0 ; j < matriz.size1() ; j++){
			if (j == matriz.size1() - 1)
				std::cout << matriz(i,j) << std::endl;
			else
				std::cout << matriz(i,j) << " ";
		}
	}
}

template<class T> void PruebaMatrices::llenarMatriz(pablo::matrix<T>& matriz){

	for (std::size_t i = 0 ; i < matriz.size1(); i++){

		for (std::size_t j = 0 ; j < matriz.size1(); j++){

			matriz(i,j) = T(rand() % 9 + 1);

		}

	}

}

template<class T> void PruebaMatrices::unpack(pablo::matrix<T>& matrizADescomponer, pablo::matrix<T>& matrizL, pablo::matrix<T>& matrizU){

	std::cout << "Descomponer la matriz" << std::endl;

		for(std::size_t i = 0 ; i < matrizADescomponer.size1(); i++){
				for (std::size_t j = 0 ; j < matrizADescomponer.size1() ; j++){
					if(i > j)
						matrizL(i,j) = matrizADescomponer(i,j);
					else if (i == j){
						matrizL(i,j) = 1;
						matrizU(i,j) = matrizADescomponer(i,j);
					}
					else
						matrizU(i,j) = matrizADescomponer(i,j);
				}
			}

}

template<class T> void PruebaMatrices::doolitle(pablo::matrix<T>& matrizInicial, pablo::matrix<T>& matrizLU, std::vector<T> vectorDePermutacion){



}

PruebaMatrices::~PruebaMatrices() {

}

int main() {

	pablo::matrix<float> matriz (3,3);
	matriz(0,0) = 1;
	matriz(0,1) = 0;
	matriz(0,2) = 0;
	matriz(1,0) = 0.5;
	matriz(1,1) = 1;
	matriz(1,2) = 0;
	matriz(2,0) = -0.25;
	matriz(2,1) = -0.5;
	matriz(2,2) = 1;
	/*pablo::matrix<int> matriz (4,4);
	matriz(0,0) = 2;
	matriz(0,1) = 8;
	matriz(0,2) = 1;
	matriz(0,3) = 8;
	matriz(1,0) = 6;
	matriz(1,1) = 8;
	matriz(1,2) = 2;
	matriz(1,3) = 4;
	matriz(2,0) = 7;
	matriz(2,1) = 2;
	matriz(2,2) = 6;
	matriz(2,3) = 5;
	matriz(3,0) = 6;
	matriz(3,1) = 8;
	matriz(3,2) = 6;
	matriz(3,3) = 5;*/
	PruebaMatrices *prueba = new PruebaMatrices(matriz);

	return 0;

}
