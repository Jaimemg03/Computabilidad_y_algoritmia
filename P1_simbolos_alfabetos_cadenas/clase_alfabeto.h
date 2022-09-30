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
//


#include <iostream>
#include <fstream>
#include <vector>

#include "clase_cadena.h"

#ifndef ALFABETO_H
#define ALFABETO_H


// clase Alfabeto que permite crear alfabetos apartir de cadenas y trabajar con ellos

class Alfabeto {
 public:
  Alfabeto(std::vector<Cadena> vector_alfabeto = {});    // constructor de la clase


 private:
  std::vector<Cadena> vector_alfabeto_;     // el vector donde se guardaran las cadenas

};



#endif