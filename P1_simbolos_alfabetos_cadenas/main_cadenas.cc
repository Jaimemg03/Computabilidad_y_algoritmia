// Universidad de La Laguna. Escuela Superior de Ingeniería y Tecnología
// 2º de Grado en Ingeniería Informática.  
// Asignatura: Computabilidad y Algoritmia

// Práctica 1: Símbolos, alfabetos y cadenas
// Autor: Francisco David Hernández Alayón
// Correo: alu0101469898@ull.edu.es
// Fecha: 04/10/2022
// Archivo main_strings.cc: Es el programa cliente que usa las clases alfabeto y cadena
// Historial de revisiones
// 28/09/2022 - Creación, primera versión del código
// 29/09/2022 - incluidos los primeros operadores para la clase Cadena

#include <iostream>
#include <fstream>

#include "clase_alfabeto.h"
#include "clase_cadena.h"

int main() {
  // constructor cadena
  Cadena cadena_prueba{};
  std::cout << cadena_prueba << " " << cadena_prueba.Longitud() << std::endl;

  // setter y getter cadena
  cadena_prueba.set_cadena("bien");

  // longitud
  std::cout << cadena_prueba.get_cadena() << " " << cadena_prueba.Longitud() <<std::endl;

  // concatenacion cadenas
  std::cout << cadena_prueba + "mal" << std::endl;

  // inversa cadena
  std::cout << cadena_prueba.Inversa() << std::endl;
  return 0;
}