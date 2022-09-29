// Universidad de La Laguna. Escuela Superior de Ingeniería y Tecnología
// 2º de Grado en Ingeniería Informática.  
// Asignatura: Computabilidad y Algoritmia

// Práctica 1: Símbolos, alfabetos y cadenas
// Autor: Francisco David Hernández Alayón
// Correo: alu0101469898@ull.edu.es
// Fecha: 04/10/2022
// Archivo main_strings.cc: Definición de la clase cadena

// Historial de revisiones
// 28/09/2022 - Creación, primera versión del código
// 29/09/2022 - incluidos los primeros operadores para la clase Cadena


#include <iostream>
#include <string>

#ifndef ALFABETO_H
#define ALFABETO_H

// clase Cadena que permite crear cadenas y trabajar con ellas 
class Cadena {
 public:
  Cadena(const std::string& cadena = "");   // Constructor de la clase Cadena
  void set_cadena(const std::string& nueva_cadena);   //setter
  std::string get_cadena() const;   // getter

  Cadena operator+(const std::string& simbolo_anadir);   // sobrecarga del operador + para ampliar la cadena concatenando una std::string
  Cadena operator+(const char& simbolo_anadir);   // sobrecarga del operador + para ampliar la cadena concatenando un char

  int Longitud() const;
  Cadena Inversa() const;
  Cadena Prefijos() const;
  Cadena Sufijos() const;
  Cadena Subcadenas() const;

 private:
  std::string cadena_;

};

std::ostream& operator<<(std::ostream& out, const Cadena& cadena_mostrar);   // sobrecarga del operador de inserción en flujo para mostrar la Cadena


#endif