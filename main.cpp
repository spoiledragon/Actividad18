#include <iostream>
#include "Civilizacion.h"
#include "Aldeano.h"
#include <string>
#include <fstream>

using namespace std;
int main()
{
    /*
    string opc;
    do
    {
        cout << "1) Agregar Civilizacion" << endl;
        cout << "2) Mostrar Civilizaciones" << endl;
        cout << "3) Respaldar" << endl;
        cout << "4) Recuperar" << endl;
        cout << "5) Insertar en pos" << endl;
        cout << "6) inicializar Civilizaciones" << endl;
        cout << "7) borrar" << endl;
        cout << "8) ordenar" << endl;
        cout << "9) buscar" << endl;
        cout << "10) Ultima civilizacion" << endl;
        cout << "11) Primera civilizacion" << endl;

        cout << "0) Salir" << endl;
        getline(cin, opc);
        if (opc == "1")
        {
            Civilizacion c1;
            cin >> c1;
            cin.ignore();
            vid1.addCivilization(c1);
        }

        else if (opc == "2")
        {
            vid1.show();
            fflush(stdin);
        }

        else if (opc == "3")
        {
            vid1.backup();
            fflush(stdin);
        }

        else if (opc == "4")
        {
            vid1.recover();
            fflush(stdin);
        }

        else if (opc == "5")
        {
            Civilizacion c1;
            cin >> c1;
            size_t pos;
            cout << "En que posicion quieres insertar" << endl;
            cin >> pos;
            cin.ignore();
            if (pos >= vid1.size())
            {
                cout << "posicion invalida" << endl;
                system("PAUSE");
            }
            else
            {
                vid1.insertX(c1, pos);
            }
            fflush(stdin);
        }

        else if (opc == "6")
        {
            Civilizacion c1;
            cin >> c1;
            size_t n;
            cout << "cuantas veces lo vas a querer" << endl;
            cin >> n;
            cin.ignore();
            vid1.start(c1, n);
            fflush(stdin);
        }

        else if (opc == "7")
        {

            size_t n;
            cout << "que posicion quiere borrar" << endl;
            cin >> n;
            cin.ignore();
            if (n >= vid1.size())
            {
                cout << "La posicion es invalida" << endl;
            }
            else
            {
                vid1.erase(n);
            }
            fflush(stdin);
        }

        else if (opc == "8")
        {
            int opcordenar;
            cout << "1) Ordenar por Nombre:" << endl;
            cout << "2) Ordenar por Pos en X:" << endl;
            cout << "3) Ordenar por Pos en Y:" << endl;
            cout << "4) Ordenar por Puntuacion:" << endl;
            cout << "5) Salir:" << endl;
            cin >> opcordenar;
            

            switch (opcordenar)
            {
            case 1:
                vid1.sortName();
                break;
            case 2:
                vid1.sortX();
                break;
            case 3:
                vid1.sortY();
                break;
            case 4:
                vid1.sortPunt();
                break;

            default:
            cin.ignore();
                break;
            }
            fflush(stdin);
        }

        else if (opc == "9")
        {
            Civilizacion c1;
            cin >> c1;
            Civilizacion *cb = vid1.findex(c1);
            if (cb == nullptr)
            {
                cout << "no se encontro la computadora" << endl;
            }
            else
            {
                cout << *cb << endl;
            }
        }
        
        else if (opc == "10")
        {
            vid1.last();
            fflush(stdin);
        }
        else if (opc == "11")
        {
            vid1.first();
            fflush(stdin);
        }
        else if (opc == "0")
        {
            break;
            
        }

    } while (true);*/
    //Civilizacion Draconidos("Dragones", 50, 50, 100);
    Civilizacion C1("Dragones", 50, 50, 400);
    string opc;
    /*
    Aldeano D1("Leo", "Canine-Wizard", 15, 50);
    Aldeano D2("Spoiled", "High-Dragon", 23, 120);
    Aldeano D3("Krystal", "Teen High-Dragon", 14, 80);
    Aldeano D4("Borrar", "Rock", 60, 20);
    Aldeano D5("Borrar2", "Rock", 70, 2);
    Aldeano D6("Borrar7", "Rock", 60, 1);/*

    //Draconidos.addStart(D1);
    C1.addStart(D1);
    C1.addEnd(D2);
    C1.addEnd(D3);
    C1.addEnd(D4);
    C1.addEnd(D5);
    C1.addEnd(D6);
    /*
    Draconidos.print();
    cout<<"imrpimir al revez"<<endl;*/
    while (true)
    {
        cout << "1) Agregar Aldeanos" << endl;
        cout << "2) Mostrar Aldeanos" << endl;
        cout << "3) borrar" << endl;
        cout << "4) ordenar" << endl;
        cout << "5) buscar" << endl;
        cout << "6) Modificar" << endl;
        cout << "7) Respaldar Aldeanos" << endl;
        cout << "8) Recuperar Aldeanos" << endl;
        cout << "0) Salir" << endl;
        cin >> opc;
        fflush(stdin);

        if (opc == "1")
        {
            Aldeano temp;
            cin >> temp;
            int opc2;
            cout << endl
                 << "1). Insertar al inicio" << endl
                 << "2). Insertar al final";
            cin >> opc2;
            switch (opc2)
            {
            case 1:
                C1.addStart(temp);
                C1.setPuntuacion(C1.getPuntuacion() + 100);
                break;
            case 2:
                C1.addEnd(temp);
                C1.setPuntuacion(C1.getPuntuacion() + 100);
                break;
            default:
                break;
            }
        }
        else if (opc == "2")
        {
            C1.print();
        }
        else if (opc == "3")
        {
            Aldeano temp;
            string name;
            int opc2;
            size_t salute;
            cout << "1). Borrar por Nombre" << endl;
            cout << "2). Borrar por Salud" << endl;
            cout << "3). Borrar por edad" << endl;
            cin >> opc2;
            switch (opc2)
            {
            case 1:

                cout << "Inserta el nombre a buscar" << endl;
                cin >> name;
                C1.deleted(name);
                break;
            case 2:
                cout << "Inserte la salud minima para los Aldeanos" << endl;
                cin >> salute;
                C1.deletedHeal(salute);
                fflush(stdin);
                break;
            case 3:
                C1.deletedHeal();
                break;
            default:

                break;
            }
        }

        else if (opc == "4")
        {
            if (C1.contador() == 0)
            {
                cout << "Sin aldeanos " << endl;
                break;
            }
            int opc2;
            cout << "1). Ordenar por Nombre" << endl;
            cout << "2). Ordenar por Salud" << endl;
            cout << "3). Ordenar por edad" << endl;
            cin >> opc2;
            switch (opc2)
            {
            case 1:
                C1.sortName();
                break;
            case 2:
                C1.sortHealth();
                break;
            case 3:
                C1.sortAge();
                break;
            default:

                break;
            }
        }
        else if (opc == "5")
        {
            string temp;
            cout << "Inserte el nombre a buscar" << endl;
            getline(cin, temp);
            C1.search(temp);
        }

        else if (opc == "6")
        {
            string temp;
            cout << "Inserte el nombre a Modiicar" << endl;
            getline(cin, temp);
            C1.modified(temp);
        }
        else if (opc == "7")
        {
            C1.respaldar_Aldeanos();
        }

        else if (opc == "8")
        {
            C1.recuperar_Aldeanos();
        }

        else if (opc == "0")
        {
            break;
        }
    }

    return 0;
}
