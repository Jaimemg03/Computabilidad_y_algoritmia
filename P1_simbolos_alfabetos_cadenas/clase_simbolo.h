// Universidad de La Laguna. Escuela Superior de Ingeniería y Tecnología
// 2º de Grado en Ingeniería Informática.  
// Asignatura: Computabilidad y Algoritmia

// Práctica 1: Símbolos, alfabetos y simbolos
// Autor: Francisco David Hernández Alayón
// Correo: alu0101469898@ull.edu.es
// Fecha: 04/10/2022
// Archivo clase_simbolo.h: Implementación de la clase simbolo

// Historial de revisiones
// 28/09/2022 - Creación, primera versión del código
// 29/09/2022 - incluidos los primeros operadores para la clase Simbolo
// 30/09/2022 - Terminada la clase Simbolo


#include <iostream>
#include <string>

#ifndef SIMBOLO_H
#define SIMBOLO_H

// clase simbolo que permite crear simbolos y trabajar con ellos 
class Simbolo {
 public:
  Simbolo(const std::string& simbolo = "");   // Constructor de la clase simbolo para strings
  Simbolo(const char& simbolo);   // Constructor de la clase simbolo para char
  void set_simbolo(const std::string& nuevo_simbolo);   //setter
  std::string get_simbolo() const;   // getter
  void Concatenar(const char& caracter_concatenar);   // permite concatenar un char a al símbolo
  int Longitud() const;   // longitud del simbolo

 private:
  std::string simbolo_;

};

std::ostream& operator<<(std::ostream& out, const Simbolo& simbolo_mostrar);   // sobrecarga del operador de inserción en flujo para mostrar el simbolo


#endif