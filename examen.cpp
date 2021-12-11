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
    cout << "- # de cédula: 118330002" << endl;
    cout << "- Nombre completo: Valeria Rodríguez" << endl;

    // Imprimir ejercicios
    cout << "Programas Disponibles:" << endl;
    cout << "A. Contador de pares." << endl;
    cout << "B. Juego de mátematicas." << endl;
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
          // Variables acumuladora para la cantidad de numeros
          int cantidad_pares = 0;
          int cantidad_divisibles_3 = 0;
          string divisibles_entre_3 = "";

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

              // Evaluar si este número par es dividible entre 3
              if (i % 3 == 0) {
                cantidad_divisibles_3 = cantidad_divisibles_3 + 1;
                // Agregarle a la cadena de texto, el numero par actual convertido a texto
                divisibles_entre_3 = divisibles_entre_3 + " " + to_string(i);
              }
            }
          }
          cout << endl;
          // Mostrar resultados finales
          cout << "Resultados Finales: " << endl;
          cout << "- Suma de los números pares: " << suma << endl;
          cout << "- Cantidad de numeros " << cantidad_pares << endl;
          cout << "- Media: " << suma / cantidad_pares << endl;
          cout << "- Cantidad pares divisibles entre 3: "
               << cantidad_divisibles_3 << endl;
          cout << "- Numeros pares divibles entre 3: " << divisibles_entre_3;
          correrProgramaA = false;

          cout << endl;
        }
      } while (correrProgramaA);
      break;
    }
    case 'B': {
      bool correrProgramaB = true;
      do {
        cout << "Juego de Mátematicas" << endl;
        int numero1, numero2;

        // Capturar numeros ingresados por el usuario
        cout << "Ingrese un numero [Menor a 100]: ";
        cin >> numero1;

        cout << "Ingrese un segundo numero [Menor a 100]: ";
        cin >> numero2;

        //  Evaluar que ambos sean menores a 200
        if (numero1 > 100 || numero2 > 100) {
          cout << "¡Debe de ingrear valores menores a 100!" << endl;
        } else {
          int multiplicacion, suma, resultado_multiplicacion, resultado_suma;
          float division, resultado_division;

          cout << "Adivine los resultados..." << endl;
          // Capturar los resultados estimados por el usuario
          cout << "- Adivine el resultado de la suma entre:" << numero1 << " y " << numero2 << ": ";
          cin >> suma;

          cout << "- Adivine el resultado de la multiplicación entre:" << numero1 << " y " << numero2 << ": ";
          cin >> multiplicacion;

          cout << "- Adivine el resultado de la división entre:" << numero1 << " y " << numero2 << ": ";
          cin >> division;

          // Calcular resultados reales
          resultado_multiplicacion = numero1 * numero2;
          resultado_suma = numero1 + numero2;
          resultado_division = float(numero1) / float(numero2);
          
          // Mostrar resultados
          cout << "Calculando resultados..." << endl;
          cout << "- Resultado de la multiplicación: " << resultado_multiplicacion << endl;
          // Comparara resultados de la multiplicación
          if (multiplicacion == resultado_multiplicacion) {
            cout << "~ Su estimación fue correcta" << endl;
          } else {
            cout << "~ Su estimación fue incorrecta" << endl;
          }

          cout << "- Resultado de la suma: " << resultado_suma << endl;
          // Comparara resultados de la suma
          if (suma == resultado_suma) {
            cout << "~ Su estimación fue correcta" << endl;
          } else {
            cout << "~ Su estimación fue incorrecta" << endl;
          }

          cout << "- Resultado de la division: " << resultado_division << endl;
          // Comparara resultados de la devision
          if (division == resultado_division) {
            cout << "~ Su estimación fue correcta" << endl;
          } else {
            cout << "~ Su estimación fue incorrecta" << endl;
          }
          correrProgramaB = false;
        }
      } while (correrProgramaB);
      break;
    }
    case 'C': {
      char salir;
      cout << "¿Desea salir del programa?[s/n]: ";
      cin >> salir;

      switch (salir) {
        case 's': {
          cout << "Cerrando programa...." << endl;
          run = false;
          break;
        }
        case 'n': {
          break;
        }
        default: {
          cout << "Esa no es una opción!" << endl;
        }
      }
      break;
    }
    default: {
      cout << "Esa no es una opción valida!" << endl;
      break;
    }
    }
  } while (run);

  return 0;
}
