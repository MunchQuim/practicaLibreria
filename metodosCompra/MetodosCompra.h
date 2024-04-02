//MetodosCompra.h
#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
namespace MetodosCompra {
	class Logistica {
	public:
		//recoge un array 'a' y muestra el contenido con el indice 'b'
		static std::string mostrar(std::vector<std::string>a, int b);

		//recoge un array a como referencia y le añade la string b
		static void add(std::vector<std::string>&a, std::string b);

		//recoge un array a como referencia y le quita la string b
		static void remove(std::vector<std::string>&a, std::string b);

		//comprueba si el elemento b está en la lista a y devuelve un booleano
		static bool contains(std::vector<std::string> a, std::string b);


	};
	class Alteraciones {
	public:
		static void capitalizar(std::string&);
	};

}