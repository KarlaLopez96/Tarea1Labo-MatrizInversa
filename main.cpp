#include <iostream>
#include "math_tools.h"
#include "display_tools.h"
#include <stdio.h>
#include "stdlib.h"

int main(void){
	Matrix start_matrix, transposed_matrix, cofactors_matrix,inverse_matrix;
    zeroes(start_matrix,3);
    start_matrix.at(0).at(0) = 2; start_matrix.at(0).at(1) = 2; start_matrix.at(0).at(2) = 3;
    start_matrix.at(1).at(0) = 4; start_matrix.at(1).at(1) = 5; start_matrix.at(1).at(2) = 6;
    start_matrix.at(2).at(0) = 7; start_matrix.at(2).at(1) = 8; start_matrix.at(2).at(2) = 9;
    
    //Calculando el determinante
    if(determinant(start_matrix) == 0){
        exit(EXIT_FAILURE);
    }else{
     cout << "El determinante de la matriz es:" << endl;
     cout << determinant(start_matrix) << endl;
     cout << endl;   
    }
    
    //Se calcula la matriz transpuesta
    cout << "La matriz transpuesta es:" << endl;
    transpose(start_matrix, transposed_matrix);
    showMatrix(transposed_matrix);
    cout << endl;
    
    //Se calcula la matriz de cofactores
    cout << "La matriz de cofactores de la transpuesta es:" << endl;
    cofactors(transposed_matrix, cofactors_matrix);
    showMatrix(cofactors_matrix);
    cout << endl;
    
     //Se divide la matriz de cofactores por el determinante
    cout << "La matriz inversa es:" << endl;
    divisionDetMatrix(determinant(start_matrix),cofactors_matrix,inverse_matrix);
    showMatrix(inverse_matrix);
    
	return 0;
}
