// Universidad de La Laguna. Escuela Superior de Ingeniería y Tecnología
// 2º de Grado en Ingeniería Informática.  
// Asignatura: Computabilidad y Algoritmia

// Práctica 1: Símbolos, alfabetos y cadenas
// Autor: Francisco David Hernández Alayón
// Correo: alu0101469898@ull.edu.es
// Fecha: 04/10/2022
// Archivo main_strings.cc: Implementación de la clase cadena

// Historial de revisiones
// 28/09/2022 - Creación, primera versión del código
// 29/09/2022 - incluidos los primeros operadores para la clase Cadena


#include "clase_cadena.h"
#include <string>

// Constructor de la clase Cadena
Cadena::Cadena(const std::string& cadena) {
  cadena_ = cadena;
}

// Setter de la clase cadena para cambiar la cadena
void Cadena::set_cadena(const std::string& nueva_cadena) {
  cadena_ = nueva_cadena;
}

// Getter de la clase cadena para obtener la string de la cadena
std::string Cadena::get_cadena() const {
  return cadena_;
}

// sobrecarga del operador + para ampliar la cadena concatenando una string
Cadena Cadena::operator+(const std::string& simbolo_anadir) {
  Cadena cadena_nueva{cadena_ + simbolo_anadir};
  return cadena_nueva;
}

// sobrecarga del operador + para ampliar la cadena concatenando un char
Cadena Cadena::operator+(const char& simbolo_anadir) {
  Cadena cadena_nueva{cadena_ + simbolo_anadir};
  return cadena_nueva;
}

// sobrecarga del operador de inserción en flujo para mostrar la cadena
std::ostream& operator<<(std::ostream& out, const Cadena& cadena_mostrar) {
  if (cadena_mostrar.Longitud() == 0) {   // si tiene tamaño 0 muestra que es una cadena vacía
    out << "&";

  } else {
    out << cadena_mostrar.get_cadena();

  }
  return out;
}






int Cadena::Longitud() const {
  return int(cadena_.length());
}


Cadena Cadena::Inversa() const {
  Cadena cadena_inversa;
  for (int bucle{int(cadena_.length()) - 1}; bucle >= 0; --bucle) {
    cadena_inversa = cadena_inversa + cadena_[bucle];
  }

  return cadena_inversa;
}




/*
std::string Cadena::Prefijos() const {

}
std::string Cadena::Sufijos() const {

}
std::string Cadena::Subcadenas() const {

}
*/






