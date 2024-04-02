//MetodosCompra.cpp
#pragma once
#include "MetodosCompra.h"
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

namespace MetodosCompra {
	//recoge un array 'a' y muestra el contenido con el indice 'b'
	std::string Logistica::mostrar(std::vector<std::string>a, int b) {
		std::string devolucion;
		devolucion = a[b];
		return devolucion;
	}

	//recoge un array a como referencia y le añade la string b

	void Logistica::add(std::vector<std::string>&a, std::string b) {
		/*if (!Logistica::contains(a, b)) {
			
		}*/
		a.push_back(b);
	}

	//recoge un array a como referencia y le quita la string b
	void Logistica::remove(std::vector<std::string>&a, std::string b) {
		if (Logistica::contains(a, b)) {

			auto iterador = std::find(a.begin(), a.end(), b);
			int index = std::distance(a.begin(), iterador);
			a.erase(a.begin()+index);
		}

	}

	//comprueba si el elemento b está en la lista a y devuelve un booleano
	bool Logistica::contains(std::vector<std::string> a, std::string b) {
		bool devolucion = false;
		int size = a.size();
		for (int i = 0; i < size; i++) {
			if (Logistica::mostrar(a, i) == b) {
				devolucion = true;
			}
		}

		return devolucion;
	}

	void Alteraciones::capitalizar(std::string& a) {
		int size = a.length();
		for (int i = 0; i < size; i++) {
			a[i] = toupper(a[i]);
		}

	}
}

