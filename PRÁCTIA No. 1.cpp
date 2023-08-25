#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

int main()
{
    int opc;

    do
    {

        cout << "Menu" << endl;
        cout << "Mostrar cuentas con saldo en ceros" << endl;
        cout << "Mostrar cuentas con saldo acreedor" << endl;
        cout << "Mostrar cuentas con saldo deudor" << endl;
        cin >> opc;
        switch (opc)
        {
        case 1:
        {

            ofstream archivoClientesSalida("Clientes.txt", ios::out);

            if (!archivoClientesSalida.is_open())
            {
                cerr << "No se puede abrir el archivo" << endl;
                return 1;
            }

            string Nombre;
            int Cuenta;
            double Saldo;

            cout << "Ingrese la cuenta del cliente:->";
            cin >> Cuenta;

            cout << "Ingrese el nombre:->";
            cin >> Nombre;

            cout << "Ingrese el saldo:->";
            cin >> Saldo;

            archivoClientesSalida.seekp(1, ios::end);

            archivoClientesSalida << "Cuenta: " << Cuenta << endl;
            archivoClientesSalida << "Nombre: " << Nombre << endl;
            archivoClientesSalida << "Saldo $: " << Saldo << endl;

            archivoClientesSalida.close();
        }
        }
    } while (opc != 5);
    {
        return 0;
    }
}