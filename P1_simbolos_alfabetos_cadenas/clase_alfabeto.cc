// Universidad de La Laguna. Escuela Superior de Ingeniería y Tecnología
// 2º de Grado en Ingeniería Informática.  
// Asignatura: Computabilidad y Algoritmia

// Práctica 1: Símbolos, alfabetos y cadenas
// Autor: Francisco David Hernández Alayón
// Correo: alu0101469898@ull.edu.es
// Fecha: 04/10/2022
// Archivo clase_alfabeto.cc: Implementación de la clase alfabeto

// Historial de revisiones
// 28/09/2022 - Creación, primera versión del código
// 02/10/2022 - Terminada clase Alfabeto

#include <iostream>
#include <fstream>
#include <vector>
#include <string>

#include "clase_alfabeto.h"

//------------------Métodos-de-clase------------------//
// constructor de la clase Alfabeto
Alfabeto::Alfabeto(const Simbolo& kSimboloAnadir) {
  alfabeto_.push_back(kSimboloAnadir);

}

//getter de la clase Alfabeto
std::vector<Simbolo> Alfabeto::GetAlfabeto() const {
  return alfabeto_;
} 

//setter de la clase Alfabeto
void Alfabeto::SetAlfabeto(const Alfabeto& kAlfabetoCambiar) {
  alfabeto_.clear();
  for (int bucle{0}; bucle < kAlfabetoCambiar.LongitudAlfabeto(); ++bucle) {
    alfabeto_.push_back(kAlfabetoCambiar.AtAlfabeto(bucle));
  }
}

// te da un simbolo en una determinada posicion del alfabeto
Simbolo Alfabeto::AtAlfabeto(const int kPosicion) const {
  if (kPosicion < LongitudAlfabeto() && kPosicion >= 0 ) {   // comprobamos si estamos accediendo a un elemento existente del vector
    return alfabeto_[kPosicion];
  } else {
    Simbolo simbolo_vacio{""};
    return simbolo_vacio;
  }
} 


// Método para añadir un simbolo en el alfabeto
void Alfabeto::AnadirAlfabeto(const Simbolo& kSimboloAnadir) {
  alfabeto_.push_back(kSimboloAnadir);
}

// Muestra cuantos simbolos tiene el alfabeto
int Alfabeto::LongitudAlfabeto() const {
  return alfabeto_.size();
}  


//------------------Sobrecarga-Operadores------------------//
// sobrecarga del operador de inserción en flujo para mostrar el alfabeto
std::ostream& operator<<(std::ostream& out, const Alfabeto& kAlfabetoMostrar) {
  if (kAlfabetoMostrar.LongitudAlfabeto() == 0) {   // si tiene tamaño 0 muestra un error
    out << "Error: Alfabeto no puede estar vacio";

  } else {
    for (int bucle{0}; bucle < kAlfabetoMostrar.LongitudAlfabeto(); ++bucle) {
      out << kAlfabetoMostrar.AtAlfabeto(bucle) << " ";
    }

  }
  return out;
}  