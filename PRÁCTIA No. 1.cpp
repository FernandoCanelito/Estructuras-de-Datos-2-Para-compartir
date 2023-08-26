#include <iostream>
#include <fstream>
#include <cstdlib>


using namespace std;

int main()
{
    int opc;

    enum {
        SALIR,
        CUENTA_CEROS,
        CUENTA_ACREEDORA,
        CUENTA_DEUDORA
    };
        cout << endl <<"               Menu" << endl <<endl;
        cout << CUENTA_CEROS << ") Mostrar cuentas con saldo en ceros" << endl;
        cout << CUENTA_ACREEDORA <<") Mostrar cuentas con saldo acreedor (+)" << endl;
        cout << CUENTA_DEUDORA <<") Mostrar cuentas con saldo deudor (-)" << endl;
        cout << SALIR << ") Salir" << endl << endl;

        cout << "       SELECCIONE UNA OPCION: ?" << endl;

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
