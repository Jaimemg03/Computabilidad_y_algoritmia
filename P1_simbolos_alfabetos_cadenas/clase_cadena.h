// Universidad de La Laguna. Escuela Superior de Ingeniería y Tecnología
// 2º de Grado en Ingeniería Informática.  
// Asignatura: Computabilidad y Algoritmia

// Práctica 1: Símbolos, alfabetos y cadenas
// Autor: Francisco David Hernández Alayón
// Correo: alu0101469898@ull.edu.es
// Fecha: 04/10/2022
// Archivo clase_cadena.h: Definición de la clase cadena

// Historial de revisiones
// 28/09/2022 - Creación, primera versión del código
// 29/09/2022 - incluidos los primeros operadores para la clase Cadena
// 01/10/2022 - Terminada la clase Cadena


#include <iostream>
#include <string>
#include <vector>

#include "clase_simbolo.h"

#ifndef CADENA_H
#define CADENA_H

// clase Cadena que permite crear cadenas y trabajar con ellas 
class Cadena {
 public:
  Cadena(const Simbolo& kSimboloConvertir);   // Constructor parametrizado de la clase Cadena con un parámetro que es un Simbolo
  Cadena(const Cadena& kCadenaConvertir);   // Constructor parametrizado de la clase Cadena con un parámetro que es una Cadena
  Cadena();   // Constructor por defecto de la clase Cadena

  void ConcatenarDelante(const Simbolo& kSimboloConcatenar);    // metodo para concatenar por delante un simbolo a la cadena y formar otra nueva
  void ConcatenarDetras(const Simbolo& kSimboloConcatenar);    // metodo para concatenar por detrás un simbolo a la cadena y formar otra nueva
  void SetCadena(const Cadena& kNuevaCadena);   //setter
  Simbolo GetCadenaSim() const;   // getter que da un simbolo
  std::string GetCadenaStr() const;   // getter que da un string
  void ResetCadena();   // resetea la cadena para que no contenga ningún simbolo
  Simbolo AtCadena(const int kPosicion) const;    // sirve para conseguir un simbolo de la cadena especifico en string

  Cadena operator+(const Simbolo& kSimboloAnadir);   // sobrecarga del operador + para ampliar la cadena concatenando una Simbolo
  Cadena operator+(const char& kSimboloAnadir);   // sobrecarga del operador + para ampliar la cadena concatenando un char

  int Longitud() const;
  Cadena Inversa() const;   // Método que crea una cadena inversa
  std::vector<Cadena> Prefijos() const;    // Método que incluye en un vector todos los prefijos de la cadena
  std::vector<Cadena> Sufijos() const;    // Método que incluye en un vector todos los sufijos de la cadena
  std::vector<Cadena> Subcadenas() const;    // Método que incluye en un vector todas las subcadenas de la cadena

 private:
  Simbolo cadena_;

};

std::ostream& operator<<(std::ostream& out, const Cadena& kCadenaMostrar);   // sobrecarga del operador de inserción en flujo para mostrar la Cadena
std::ostream& operator<<(std::ostream& out, const std::vector<Cadena>& kVectorMostrar);   // sobrecarga del operador de inserción en flujo para mostrar un vector de cadenas


#endif