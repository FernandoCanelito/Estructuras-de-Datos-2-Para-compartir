#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstdlib>

using namespace std;

int main()
{

    int opc;
    int cuenta;
    char nombre[30];
    double saldo, comparador;

    while (opc !=0)
    {
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
        ifstream archivoClientesEntrada; // archivo lógico
        archivoClientesEntrada.open("clientes.txt", ios::in);

        if (!archivoClientesEntrada)
            {
        cerr << "No se pudo abrir el archivo" << endl;
        exit(1);
            }

        cout << left << setw(10) << "CUENTA" << setw(13)
        << "NOMBRE" << "SALDO" << endl << fixed << showpoint;

        while (archivoClientesEntrada >> cuenta >> nombre >> saldo)
        {
            if (saldo == 0)
                cout << left << setw(10) << cuenta << setw(13)
                << nombre << setw(4) << setprecision(2)
                << right << saldo << endl;
        }
        archivoClientesEntrada.close();
            }break;//case 1


        case 2:
            {
        ifstream archivoClientesEntrada; // archivo lógico
        archivoClientesEntrada.open("clientes.txt", ios::in);

        if (!archivoClientesEntrada)
            {
        cerr << "No se pudo abrir el archivo" << endl;
        exit(1);
            }

        cout << left << setw(10) << "CUENTA" << setw(13)
        << "NOMBRE" << "SALDO" << endl << fixed << showpoint;

        while (archivoClientesEntrada >> cuenta >> nombre >> saldo)
        {
            if (saldo < 0)
                cout << left << setw(10) << cuenta << setw(13)
                << nombre << setw(4) << setprecision(2)
                << right << saldo << endl;
        }
        archivoClientesEntrada.close();
            }break;//case 2

                case 3:
            {
        ifstream archivoClientesEntrada; // archivo lógico
        archivoClientesEntrada.open("clientes.txt", ios::in);

        if (!archivoClientesEntrada)
            {
        cerr << "No se pudo abrir el archivo" << endl;
        exit(1);
            }

        cout << left << setw(10) << "CUENTA" << setw(13)
        << "NOMBRE" << "SALDO" << endl << fixed << showpoint;

        while (archivoClientesEntrada >> cuenta >> nombre >> saldo)
        {
            if (saldo > 0)
                cout << left << setw(10) << cuenta << setw(13)
                << nombre << setw(4) << setprecision(2)
                << right << saldo << endl;
        }
        archivoClientesEntrada.close();
            }break;//case 3

                case 0:
                    cout << endl << "¡Gracias por su consulta!" <<endl;break;

                default:
            cout << endl << "Opcion no valida" << endl; break;

        }//Switch
    }
}
