// Universidad de La Laguna. Escuela Superior de Ingeniería y Tecnología
// 2º de Grado en Ingeniería Informática.  
// Asignatura: Computabilidad y Algoritmia

// Práctica 2: Lenguajes
// Autor: Francisco David Hernández Alayón
// Correo: alu0101469898@ull.edu.es
// Fecha: 11/10/2022
// Archivo clase_lenguaje.h: Definición de la clase Lenguaje

// Historial de revisiones
// 06/10/2022 - Creación, primera versión del código
// 07/10/2022 - Primeras funciones básicas para el funcionamiento de la clase
// 08/10/2022 - Terminadas las funciones principales para entregar la tarea

#include <iostream>
#include <fstream>
#include <vector>
#include <set>

#include "clase_cadena.h"

#ifndef LENGUAJE_H
#define LENGUAJE_H


// clase Lenguaje que permite crear alfabetos apartir de cadenas y trabajar con ellos
class Lenguaje{
 public:
  Lenguaje(const Cadena& kCadenaAnadir);  // constructor de la clase apartir de una cadena
  Lenguaje(const std::vector<Cadena>& kVectorCadenaAnadir);  // constructor de la clase con un vector
  Lenguaje();  // constructor por defecto de la clase que no hace nada

  std::vector<Cadena> GetLenguaje() const;  // getter que devuelve un vector de cadenas
  void SetLenguaje(const Lenguaje& kLenguajeCambiar);  // setter que modifica la clase 
  Cadena AtLenguaje(const int kPosicion) const;  // te da una cadena en una determinada posicion del lenguaje

  int LongitudLenguaje() const; // devuelve la cantidad de cadenas del lenguaje
  void AnadirLenguaje(const Cadena& kCadenaAnadir) ;   // Método para añadir una cadena en el lenguaje
  bool ExisteCadenaLenguaje(const Cadena& kCadenaComprobar) const;  // comprueba si una determinada cadena está en el lenguaje
  void EliminaCadena(const Cadena& kCadenaEliminar);  // elimina una cadena dada del lenguaje

  Lenguaje Concatenacion(const Lenguaje& kLenguajeOperar) const;   // metodo que devuelve el lenguaje concatenado con otro por parámetros
  Lenguaje Union(const Lenguaje& kLenguajeOperar) const;   // metodo que devuelve la union del lenguaje con otro por parámetros
  Lenguaje Interseccion(const Lenguaje& kLenguajeOperar) const;   // metodo que devuelve la interseccion del lenguaje con otro por parámetros
  Lenguaje Diferencia(const Lenguaje& kLenguajeOperar) const;   // metodo que devuelve la diferencia del lenguaje con otro por parámetros
  Lenguaje Inversa() const;   // metodo que devuelve la inversa del lenguaje
  Lenguaje Potencia(const int kPotencia) const;   // metodo que devuelve la potencia del lenguaje segun un indice dado

 private:
  std::set<Cadena> lenguaje_;   // el conjunto donde se guardaran las cadenas

};

std::ostream& operator<<(std::ostream& out, const Lenguaje& kLenguajeMostrar);   // sobrecarga del operador de inserción en flujo para mostrar el alfabeto
bool operator<(const Cadena& cadena_comparar1, const Cadena& cadena_comparar2);   // sobrecarga del operador < para la clase set

# endif