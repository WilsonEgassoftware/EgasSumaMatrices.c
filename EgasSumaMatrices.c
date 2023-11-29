#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Función para llenar la matriz con números aleatorios entre 0 y 100
void llenarMatrizAleatoria(int filas, int columnas, int matriz[filas][columnas]) {// Inicializar la semilla del generador de números aleatorios
    srand(time(NULL)); 
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            matriz[i][j] = rand() % 101; // Números aleatorios entre 0 y 100
        }
    }
}
// Función para imprimir la matriz
void imprimirMatriz(int filas, int columnas, int matriz[filas][columnas]) {
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {//Realizamos la verificacion de datos para las filas y columnas en i
            printf("%3d ", matriz[i][j]);
        }
        printf("\n");
    }
}
// Función para sumar dos matrices
void sumarMatrices(int filas, int columnas, int matriz1[filas][columnas], int matriz2[filas][columnas], int resultado[filas][columnas]) {
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {// Verificamos los datos en filas y comunas en j
            resultado[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }
}

int main() {
    int filas, columnas; 
    // Solicitar al usuario las dimensiones de la matriz
    printf("Ingrese la cantidad  de filas: ");
    scanf("%d", &filas);
    printf("Ingrese la cantidad de columnas: ");
    scanf("%d", &columnas);

    // Crear y llenar la primera matriz con números aleatorios
    int matriz1[filas][columnas];
    llenarMatrizAleatoria(filas, columnas, matriz1);

    // Imprimir la primera matriz
    printf("Primera Matriz :\n");
    imprimirMatriz(filas, columnas, matriz1);

    // Crear y llenar la segunda matriz con números aleatorios
    int matriz2[filas][columnas];
    llenarMatrizAleatoria(filas, columnas, matriz2);

    // Imprimir la segunda matriz
    printf("\n Segunda Matriz:\n");
    imprimirMatriz(filas, columnas, matriz2);

    // Crear la matriz resultado para la suma
    int resultado[filas][columnas];

    // Sumar las dos matrices
    sumarMatrices(filas, columnas, matriz1, matriz2, resultado);

    // Imprimir la matriz resultado
    printf("\nMatriz Resultado:\n");
    imprimirMatriz(filas, columnas, resultado);

    return 0;
}
