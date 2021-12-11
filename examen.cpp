#include <cmath>
#include <iostream>
#include <string>

using namespace std;

int main() {
  bool run = true;
  do {
    // Imprimir información básica
    cout << "Informática I - INDU-120" << endl;
    cout << "Examen Final" << endl;

    // Imprimir ejercicios
    cout << "Programas Disponibles:" << endl;
    cout << "A. Contador de pares." << endl;
    cout << "B. Programa B." << endl;
    cout << "C. Salir." << endl;

    // Leer ejercicio por ejecutar
    char opcion;

    cout << "Ingrese una opción: ";
    cin >> opcion;

    cout << endl;

    // Ejecutar programa con un switch
    switch (opcion) {
    case 'A': {
      bool correrProgramaA = true;
      do {
        cout << "Contador de Pares" << endl;
        // Capturar numero
        int numero;
        cout << "Ingrese un numero [Menor a 200]: ";
        cin >> numero;

        // Validar numero ingresado
        if (numero >= 200) {
          cout << "El numero que ingreso: " << numero
               << " debe de ser menor a 200!" << endl;
        } else {
          cout << "Calculando números pares antes de " << numero << endl;
          // Variable acumuladora para la suma
          int suma = 0;
          // Variable acumuladora para la cantidad de numeros
          int cantidad_pares = 0;

          // Imprimir todos los numeros pares antes de 'numero'
          // Ciclo 'for' for 'numero' como máximo
          for (int i = 0; i < numero; i++) {
            // Si i es 0, no hacer nada para no causar un error de division
            // entre 0
            if (i == 0) {
            } else if (i % 2 == 0) {
              // Imprimir número
              cout << i << " ";
              // Incrementar la cantidad de numeros en 1
              cantidad_pares = cantidad_pares + 1;
              // Sumar el numero a la variable acumuladora 'suma'
              suma = i + suma;
            }
          }
          cout << endl;
          // Mostrar resultados finales
          cout << "Resultados Finales: " << endl;
          cout << "- Suma de los números pares: " << suma << endl;
          cout << "- Cantidad de numeros " << cantidad_pares << endl;
          cout << "- Media: " << suma / cantidad_pares << endl;
        }
      } while (correrProgramaA);
    }
    case 'B': {
      cout << "Programa B";
    }
    case 'C': {
      cout << "Salir";
    }
    default: {
      cout << "Programa de Error";
      break;
    }
    }
  } while (run);

  return 0;
}
