// Calculadora c++.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

using namespace std;
int main(){
    {
        float x = 0, y = 0;
        int opcion;
        float  suma;
        float  resta;
        float  multi;
        float  div;




        cout << "* * * * * * * * * *\n";
        cout << "* Keison Cerda #8 *\n";
        cout << "* * * * * * * * * *\n";

        cout << "" << endl;

        cout << "Calculadora\n" << endl;

        cout << "que operacion quiere realizar: \n";
        cout << "1.  sumar.\n";
        cout << "2.  Restar.\n";
        cout << "3.  Multiplicar.\n";
        cout << "4.  Dividir.\n";
        cout << "Opcion: ";


        cin >> opcion;

        switch (opcion) {

        case 1:  {
                cout << "ingrese un numero para sumar: \n"; cin >> x;
                cout << "ingrese otro numero para sumar: \n"; cin >> y;
                suma = x + y;
                cout << "el resultado es: " << suma; break;


        case 2:        {
                    cout << "ingrese un numero para restar: \n"; cin >> x;
                    cout << "ingrese otro numero para restar: \n"; cin >> y;
                    resta = x - y;
                    cout << "el resultado es: " << resta;break;
                    
                   {
        case 3:              cout << "ingrese un numero para multiplicar: \n"; cin >> x;
                        cout << "ingrese otro numero para multiplicar: \n"; cin >> y;
                        multi = x * y;
                        cout << "el resultado es: " << multi; break;

        case 4:        {
                        cout << "ingrese un numero para dividir: \n"; cin >> x;
                        cout << "ingrese otro numero para dividir: \n"; cin >> y;
                        div = x / y;
                        cout << "el resultado es: " << div; break;




                    }

                    }

                }

            }
        }

    }

    }



// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
