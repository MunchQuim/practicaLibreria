// CompraCliente.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cstring>
#include <locale.h>
#include "MetodosCompra.h"
using namespace std;
void menu() {
	vector<string>listaCompra;
	string opcion = "0";
	string articulo;
	while (opcion != "3") {
		int size = listaCompra.size();
		//int size = sizeof(listaCompra) / sizeof(string);
		if (size == 0) {
			cout << "Su lista de la compra está actualmente vacia que desea hacer?\n";
		}
		else {
			cout << "Articulos:\n\n";
			for (int i = 0; i < size; i++) {
				cout << MetodosCompra::Logistica::mostrar(listaCompra, i);
				cout << "\n";
			}
			cout << "\nque desea hacer?\n\n";
		}cout << "1) añadir   2) quitar   3) salir\n";
		cin >> opcion;
		system("cls");
		if (opcion == "1") {
			
			cout << "que articulo desea añadir?\n";
			cin >> articulo;
			system("cls");
			MetodosCompra::Alteraciones::capitalizar(articulo);
			
			if (MetodosCompra::Logistica::contains(listaCompra,articulo)) {
				cout << "El articulo ya existe\n\n";
			}
			else {
				MetodosCompra::Logistica::add(listaCompra, articulo);
				cout << "El articulo ha sido añadido\n\n";
			}
		}
		else if (opcion == "2") {
			cout << "que articulo desea eliminar?\n";
			cin >> articulo;
			system("cls");
			MetodosCompra::Alteraciones::capitalizar(articulo);

			if (MetodosCompra::Logistica::contains(listaCompra, articulo)) {
				MetodosCompra::Logistica::remove(listaCompra, articulo);
				cout << "Articulo eliminado\n\n";
			}
			else {
				MetodosCompra::Logistica::add(listaCompra, articulo);
				cout << "El articulo no está en la lista\n\n";
			}
		}

	}



}
int main()
{
	system("chcp 65001");
	system("CLS");
	cout << "Gatuga industries le da la bienvenida a su lista de la compra temporal Munch\n";
	cout << "donde podra crear su lista de la compra y la olvidaremos en cuanto salga de la aplicación\n";
	menu();

}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
