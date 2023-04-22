#include <iostream>
using namespace std;


int main() {
    int salario;
    int cantidadEmpleados = 10;
    int salarioTotal;
    int promedio;

    for (int i = 0; i < 10; i++) {
        cout << "digite su salario "  "empleado numero # " <<   i + 1 << endl;
        cin >> salario;
        salarioTotal = salario + salarioTotal;
    }

    cout << " el salario total a pagar es : " << salarioTotal << endl;

    promedio = (cantidadEmpleados * salarioTotal) / 100;
    cout << "el promedio que usted paga de salario es :" << promedio << endl;

    return 0;
}
