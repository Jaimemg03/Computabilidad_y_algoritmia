// Universidad de La Laguna. Escuela Superior de Ingeniería y Tecnología
// 2º de Grado en Ingeniería Informática.  
// Asignatura: Computabilidad y Algoritmia

// Práctica 1: Símbolos, alfabetos y cadenas
// Autor: Francisco David Hernández Alayón
// Correo: alu0101469898@ull.edu.es
// Fecha: 04/10/2022
// Archivo clase_alfabeto.h: Definición de la clase alfabeto

// Historial de revisiones
// 28/09/2022 - Creación, primera versión del código
// 02/10/2022 - Terminada clase Alfabeto


#include <iostream>
#include <fstream>
#include <vector>

#include "clase_cadena.h"

#ifndef ALFABETO_H
#define ALFABETO_H


// clase Alfabeto que permite crear alfabetos apartir de cadenas y trabajar con ellos

class Alfabeto {
 public:
  Alfabeto(const Simbolo& kSimboloAnadir);  // constructor de la clase
  std::vector<Simbolo> GetAlfabeto() const;  //getter
  void SetAlfabeto(const Alfabeto& kAlfabetoCambiar);  //setter
  Simbolo AtAlfabeto(const int kPosicion) const;  // te da un simbolo en una determinada posicion del alfabeto

  void AnadirAlfabeto(const Simbolo& kSimboloAnadir) ;   // Método para añadir un simbolo en el alfabeto
  int LongitudAlfabeto() const;   // Muestra cuantos simbolos tiene el alfabeto
  bool CadenaPertenceAlfabeto(const Cadena& kCadenaComprobar);    // Método que comprueba si la cadena pertenece al alfabeto

 private:
  std::vector<Simbolo> alfabeto_;     // el vector donde se guardaran las cadenas

};

std::ostream& operator<<(std::ostream& out, const Alfabeto& kAlfabetoMostrar);   // sobrecarga del operador de inserción en flujo para mostrar el alfabeto

#endif