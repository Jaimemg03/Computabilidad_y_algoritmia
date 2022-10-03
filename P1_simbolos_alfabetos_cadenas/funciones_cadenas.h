// Universidad de La Laguna. Escuela Superior de Ingeniería y Tecnología
// 2º de Grado en Ingeniería Informática.  
// Asignatura: Computabilidad y Algoritmia

// Práctica 1: Símbolos, alfabetos y simbolos
// Autor: Francisco David Hernández Alayón
// Correo: alu0101469898@ull.edu.es
// Fecha: 04/10/2022
// Archivo funciones_cadenas.h: Fichero que contiene las definiciones de las funciones del main
// Historial de revisiones
// 02/09/2022 - Creación, primera versión del código
// 03/09/2022 - Terminadas las funciones para el main


#include <iostream>


#ifndef FUNCIONES_H
#define FUNCIONES_H

// Método para sacar la cadena y el alfabeto de cada linea
void ObtieneAlfabetoCadena(const std::string& kLineaEntrada, Alfabeto& alfabeto, Cadena& cadena);

// Método para saber la longitud de una cadena
void Longitud(std::ofstream& kFicheroSalida, const Cadena& kCadena);

// Método para saber linvertir una cadena
void Invertir(std::ofstream& kFicheroSalida, const Cadena& kCadena);

// Método para saber los prefijos de una cadena
void Prefijos(std::ofstream& kFicheroSalida, const Cadena& kCadena);

// Método para saber los sufijos de una cadena
void Sufijos(std::ofstream& kFicheroSalida, const Cadena& kCadena);

// Método para saber las subcadenas de una cadena
void Subcadenas(std::ofstream& kFicheroSalida, const Cadena& kCadena);

#endif