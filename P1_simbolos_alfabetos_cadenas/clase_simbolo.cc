// Universidad de La Laguna. Escuela Superior de Ingeniería y Tecnología
// 2º de Grado en Ingeniería Informática.  
// Asignatura: Computabilidad y Algoritmia

// Práctica 1: Símbolos, alfabetos y simbolos
// Autor: Francisco David Hernández Alayón
// Correo: alu0101469898@ull.edu.es
// Fecha: 04/10/2022
// Archivo clase_simbolo.cc: Implementación de la clase simbolo

// Historial de revisiones
// 28/09/2022 - Creación, primera versión del código
// 29/09/2022 - incluidos los primeros operadores para la clase Simbolo
// 30/09/2022 - Terminada la clase Simbolo

#include "clase_simbolo.h"
#include <string>


//------------------Métodos-de-clase------------------//
// Constructor de la clase simbolo para strings
Simbolo::Simbolo(const std::string& simbolo) {
  simbolo_ = simbolo;
}

// Constructor de la clase simbolo para char
Simbolo::Simbolo(const char& simbolo) {
  simbolo_ = simbolo;
} 

// Setter de la clase simbolo para cambiar el simbolo
void Simbolo::set_simbolo(const std::string& nuevo_simbolo) {
  simbolo_ = nuevo_simbolo;
}

// Getter de la clase simbolo para obtener la string de el simbolo
std::string Simbolo::get_simbolo() const {
  return simbolo_;
}

// metodo para concatenar un carácter a un símbolo cambiando este
void Simbolo::Concatenar(const char& caracter_concatenar) {
  std::string nuevo_simbolo{simbolo_ + caracter_concatenar};
  simbolo_ = nuevo_simbolo;

}

// Metodo que otroga la longitud del simbolo
int Simbolo::Longitud() const {
  return int(simbolo_.length());
}


//------------------Sobrecarga-Operadores------------------//

// sobrecarga del operador de inserción en flujo para mostrar el simbolo
std::ostream& operator<<(std::ostream& out, const Simbolo& simbolo_mostrar) {
  if (simbolo_mostrar.Longitud() == 0) {   // si tiene tamaño 0 muestra que es una simbolo vacía
    out << "&";

  } else {
    out << simbolo_mostrar.get_simbolo();

  }
  return out;
}






