// Universidad de La Laguna. Escuela Superior de Ingeniería y Tecnología
// 2º de Grado en Ingeniería Informática.  
// Asignatura: Computabilidad y Algoritmia

// Práctica 1: Símbolos, alfabetos y simbolos
// Autor: Francisco David Hernández Alayón
// Correo: alu0101469898@ull.edu.es
// Fecha: 04/10/2022
// Archivo main_cadenas.cc: Es el programa cliente que usa las clases alfabeto y simbolo
// Historial de revisiones
// 28/09/2022 - Creación, primera versión del código
// 29/09/2022 - incluidos los primeros operadores para la clase simbolo

#include <iostream>
#include <fstream>

#include "clase_alfabeto.h"

// función que muestra un vector de cadenas
void MostrarVectorCadenas(const std::vector<Cadena> vector_cadenas) {
  for (int bucle{0}; bucle < vector_cadenas.size(); ++bucle) {
    std::cout << vector_cadenas[bucle] << " ";
  }
}

int main() {











  // Cadena pertenece a alfabeto
  std::cout << "-----CADENA PERTENECE A ALFABETO----- " << std::endl;
  Simbolo simbolo_z {"abracadabra"};
  Cadena cadena_z{simbolo_z};
  Simbolo simbolo_a{"canoconiosis"};
  Simbolo simbolo_b{"d"};
  Simbolo simbolo_c{"d"};
  Simbolo simbolo_d{"a"};
  Simbolo simbolo_e{"bra"};
  Alfabeto alfabeto_z{simbolo_a};
  alfabeto_z.AnadirAlfabeto(simbolo_b);
  alfabeto_z.AnadirAlfabeto(simbolo_c);
  alfabeto_z.AnadirAlfabeto(simbolo_d);
  alfabeto_z.AnadirAlfabeto(simbolo_e);

  std::cout << cadena_z << "  " << alfabeto_z << std::endl;
  std::cout << alfabeto_z.CadenaPertenceAlfabeto(cadena_z) << std::endl;

  return 0;
}