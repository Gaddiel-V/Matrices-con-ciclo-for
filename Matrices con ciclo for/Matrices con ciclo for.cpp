#include <iostream>			//Libreria de entrada y salida estandar
#include <vector>			//Libreria para usar el contenedor vector

using namespace std;		//Permite el uso de nombres estandar

int main() {				//Esta es la funcion principal, es donde inicia el programa
	int filas = 3, columnas = 4;	//Aqu[i se define el numero de filas y columnas de la matriz

	// Aqui creamos una matriz de tamaño filas x columnas usando un vector
	vector<vector<int>> matriz(filas, vector<int>(columnas));

	//El primer ciclo for recorre las filas de la matriz
	for (int i = 0; i < filas; i++) {
		// Segundo ciclo for: recorre las columnas dentro de cada fila
		for (int j = 0; j < columnas; j++) {
			// Asignamos a cada posición de la matriz el valor (i+1)*(j+1)
			// Esto genera números multiplicando el índice de fila por el de columna
			matriz[i][j] = (i + 1) * (j + 1);
		}
	}
	// Ciclo for-each recorre cada fila de la matriz
	for (const auto& fila : matriz) {
		// Recorre cada valor dentro de la fila
		for (int valor : fila) {
			cout << valor << "\t"; // Imprime el valor seguido de un tabulador
		}
		cout << endl; // Salto de línea al terminar cada fila
	}

	return 0; // Fin del programa
}
