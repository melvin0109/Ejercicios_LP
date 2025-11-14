#include <iostream>
using namespace std;

int MCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int MCM(int a, int b) {
    return (a * b) / MCD(a, b);
}

int main() {
    int eleccion = 0, num = 0, can = 0;
    int sum = 0, res = 0, mul = 1, fact = 1;
    float div = 0;

    cout << "Bienvenido\n";
    cout << "1. Sumar\n";
    cout << "2. Restar\n";
    cout << "3. Multiplicar\n";
    cout << "4. Dividir\n";
    cout << "5. Fibonacci\n";
    cout << "6. Factorial\n";
    cout << "7. Minimo común multiplo (MCM)\n";
    cout << "8. Maximo común divisor (MCD)\n";
    cout << "\nIngrese su elección: ";
    cin >> eleccion;

    switch (eleccion)
    {
        case 1: {
            cout << "Cantidad de números a ingresar: ";
            cin >> can;
            for (int i = 0; i < can; i++){
                cout << "Número: ";
                cin >> num;
                sum += num;
            }
            cout << "La suma es: " << sum;
            break;
        }

        case 2: {
            cout << "Cantidad de números a ingresar: ";
            cin >> can;

            cout << "Primer número: ";
            cin >> res;

            for (int i = 1; i < can; i++){
                cout << "Número: ";
                cin >> num;
                res -= num;
            }
            cout << "La resta es: " << res;
            break;
        }

        case 3: {
            cout << "Cantidad de números a ingresar: ";
            cin >> can;
            for (int i = 0; i < can; i++){
                cout << "Número: ";
                cin >> num;
                mul *= num;
            }
            cout << "La multiplicación es: " << mul;
            break;
        }

        case 4: {
            cout << "Cantidad de números a ingresar: ";
            cin >> can;

            cout << "Primer número: ";
            cin >> div;

            for (int i = 1; i < can; i++){
                cout << "Número: ";
                cin >> num;
                if (num == 0) {
                    cout << "Error: división entre 0 no permitida.";
                    return 0;
                }
                div /= num;
            }
            cout << "La división es: " << div;
            break;
        }

        case 5: {
            cout << "¿Cuántos términos de Fibonacci deseas?: ";
            cin >> num;

            int a = 0, b = 1;
            cout << "Serie Fibonacci: ";
            for (int i = 0; i < num; i++){
                cout << a << " ";
                int siguiente = a + b;
                a = b;
                b = siguiente;
            }
            break;
        }

        case 6: {
            cout << "¿Factorial de qué número deseas?: ";
            cin >> num;

            fact = 1;
            for (int i = 1; i <= num; i++){
                fact *= i;
            }
            cout << "El factorial es: " << fact;
            break;
        }

        case 7: {
            int a, b;
            cout << "Ingrese el primer número: ";
            cin >> a;
            cout << "Ingrese el segundo número: ";
            cin >> b;

            cout << "El MCM es: " << MCM(a, b);
            break;
        }

        case 8: {
            int a, b;
            cout << "Ingrese el primer número: ";
            cin >> a;
            cout << "Ingrese el segundo número: ";
            cin >> b;

            cout << "El MCD es: " << MCD(a, b);
            break;
        }

        default:
            cout << "Opción no válida.";
    }

    return 0;
}
