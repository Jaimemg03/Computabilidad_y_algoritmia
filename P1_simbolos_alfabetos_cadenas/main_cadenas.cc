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

void MostrarVectorCadenas(const std::vector<Cadena> vector_cadenas) {
  std::cout << "& ";
  for (int bucle{0}; bucle < vector_cadenas.size(); ++bucle) {
    std::cout << vector_cadenas[bucle] << " ";
  }
}

int main() {
  std::cout << "-----SIMBOLOS----- " << std::endl;
  // constructor simbolo
  Simbolo simbolo_prueba{""};
  std::cout << simbolo_prueba << " " << simbolo_prueba.Longitud() << std::endl;

  // setter y getter simbolo
  simbolo_prueba.set_simbolo("abc");

  // longitud
  std::cout << simbolo_prueba.get_simbolo() << " " << simbolo_prueba.Longitud() <<std::endl;

  // concatenacion simbolos
  simbolo_prueba.Concatenar('d');
  std::cout << simbolo_prueba << std::endl;


  std::cout << "-----CADENAS----- " << std::endl;
  Cadena cadena_prueba{simbolo_prueba};
  std::cout << cadena_prueba << std::endl;
  cadena_prueba.Concatenar(simbolo_prueba);
  std::cout << cadena_prueba  << std::endl;

  // inversa cadenas
  Simbolo simbolo_ejercicio{"abbab"};
  Cadena cadena_ejercicio{simbolo_ejercicio};
  std::cout << cadena_ejercicio << "   longitud: " << cadena_ejercicio.Longitud() << std::endl;
  std::cout << cadena_ejercicio.Inversa() << std::endl;

  MostrarVectorCadenas(cadena_ejercicio.Prefijos());
  std::cout << std::endl;
  MostrarVectorCadenas(cadena_ejercicio.Sufijos());
  std::cout << std::endl;


  return 0;
}