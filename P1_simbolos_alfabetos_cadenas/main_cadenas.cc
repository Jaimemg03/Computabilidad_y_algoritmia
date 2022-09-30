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
  std::cout << cadena_prueba.Inversa() << std::endl;


  return 0;
}