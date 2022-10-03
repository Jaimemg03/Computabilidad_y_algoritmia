// Universidad de La Laguna. Escuela Superior de Ingeniería y Tecnología
// 2º de Grado en Ingeniería Informática.  
// Asignatura: Computabilidad y Algoritmia

// Práctica 1: Símbolos, alfabetos y simbolos
// Autor: Francisco David Hernández Alayón
// Correo: alu0101469898@ull.edu.es
// Fecha: 04/10/2022
// Archivo funciones_cadenas.cc: Fichero que contiene las funciones del main
// Historial de revisiones
// 02/09/2022 - Creación, primera versión del código
// 03/09/2022 - Terminadas las funciones para el main


#include <iostream>
#include <fstream>

#include "funciones_cadenas.h"

// Método para sacar la cadena y el alfabeto de cada linea cogiendo como referencia estas dos para trabajar sobre ellas
void ObtieneAlfabetoCadena(const std::string& kLineaEntrada, Alfabeto& alfabeto, Cadena& cadena) {
  std::string palabra_meter;  // palabra que se irá formando para introducrila en el vector de elementos de la linea
  std::vector<std::string> vector_elementos;  // vector de elementos en el que se iran introduciendo las distintas palabras a medida que se vayan concoiendo
  const std::string kEspacio{" "};  // variable utilizada para compara con el caracter espacio

  // metemos todos los elementos de la linea dada en un vector
  for (int bucle1{0}; bucle1 < kLineaEntrada.length(); ++bucle1) {    
    if (kLineaEntrada[bucle1] == kEspacio) {  // si ya tenemos una palabra separada por espacio la metemos en el vector
      vector_elementos.push_back(palabra_meter);
      palabra_meter = "";   // reiniciamos la string para volverla a usar

    } else {
        palabra_meter = palabra_meter + kLineaEntrada[bucle1];
    }
  }
  vector_elementos.push_back(palabra_meter);   // metemos la ultima palabra de la línea

  // creamos la cadena y el alfabeto
  if (vector_elementos.size() > 1) {  // comprobamos si hay más de un elemento en el vector
    if (vector_elementos[vector_elementos.size() - 1] != "&") {  // comprobamos si es la cadena vacia o no
      Simbolo simbolo_meter{vector_elementos[0]};
      Alfabeto alfabeto_final{simbolo_meter};

      for (int bucle2{1}; bucle2 < vector_elementos.size() - 1; ++bucle2) {  // creamos el alfabeto 
        simbolo_meter.SetSimbolo(vector_elementos[bucle2]);
        alfabeto_final.AnadirAlfabeto(simbolo_meter);
      }
      alfabeto.SetAlfabeto(alfabeto_final);
      simbolo_meter.SetSimbolo(vector_elementos[vector_elementos.size() - 1]);
      cadena.SetCadena(simbolo_meter);   // metemos el último elemento del vector como cadena

    } else {  // la cadena es vacia
      Simbolo simbolo_vacio{""};
      cadena.SetCadena(simbolo_vacio);
      }

  } else {  // si solo hay un elemento esa es la cadena y habria que obtener el alfabeto apartir de ahi
      Simbolo simbolo_meter(vector_elementos[0]);
        cadena.SetCadena(simbolo_meter);   // metemos el elemento del vector como cadena

        Alfabeto alfabeto_final{cadena};
        alfabeto.SetAlfabeto(alfabeto_final);  // metemos el alfabeto a partir de la cadena

  }
}


// Método para saber la longitud de una cadena
void Longitud(std::ofstream& kFicheroSalida, const Cadena& kCadena, const Alfabeto& kAlfabeto) {
  kFicheroSalida << "Longitud: " << kAlfabeto.CantidadSimbolosCadena(kCadena);
}


// Método para saber linvertir una cadena
void Invertir(std::ofstream& kFicheroSalida, const Cadena& kCadena) {
  kFicheroSalida << "Invertir: " << kCadena.Inversa();
}


// Método para saber los prefijos de una cadena
void Prefijos(std::ofstream& kFicheroSalida, const Cadena& kCadena) {
  kFicheroSalida << "Prefijos: " << kCadena.Prefijos();
}


// Método para saber los sufijos de una cadena
void Sufijos(std::ofstream& kFicheroSalida, const Cadena& kCadena) {
  kFicheroSalida << "Sufijos: " << kCadena.Sufijos();
}


// Método para saber las subcadenas de una cadena
void Subcadenas(std::ofstream& kFicheroSalida, const Cadena& kCadena) {
  kFicheroSalida << "Subcadenas: " << kCadena.Subcadenas();
}

