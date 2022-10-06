// Universidad de La Laguna. Escuela Superior de Ingeniería y Tecnología
// 2º de Grado en Ingeniería Informática.  
// Asignatura: Computabilidad y Algoritmia

// Práctica 2: Lenguajes
// Autor: Francisco David Hernández Alayón
// Correo: alu0101469898@ull.edu.es
// Fecha: 11/10/2022
// Archivo clase_lenguaje.cc: Implementación de la clase Lenguaje

// Historial de revisiones
// 06/10/2022 - Creación, primera versión del código

#include "clase_lenguaje.h"


//------------------Métodos-de-clase------------------//
// constructor de la clase apartir de una cadena
Lenguaje::Lenguaje(const Cadena& kCadenaAnadir) {

}  

// constructor de la clase con un vector
Lenguaje::Lenguaje(const std::vector<Cadena>& kVectorSimboloAnadir) {

}  



// te da una cadena en una determinada posicion del lenguaje
Cadena Lenguaje::AtLenguaje(const int kPosicion) const {
    if (kPosicion < LongitudAlfabeto() && kPosicion >= 0 ) {   // comprobamos si estamos accediendo a un elemento existente del vector
    std::vector<Cadena> vector_alfabeto{GetAlfabeto()};
    return vector_alfabeto[kPosicion];
  } else {
    Simbolo simbolo_vacio{""};
    Cadena cadena_vacia{simbolo_vacio};
    return cadena_vacia;
  }
}


//------------------Sobrecarga-Operadores------------------//
// sobrecarga del operador de inserción en flujo para mostrar el alfabeto
std::ostream& operator<<(std::ostream& out, const Lenguaje& kAlfabetoMostrar) {
  return out;
}

// sobrecarga del operador < para la clase set
bool operator<(const Cadena& cadena_comparar1, const Cadena& cadena_comparar2) {
    if(cadena_comparar1.Longitud() < cadena_comparar2.Longitud()) {
    return true;
  } else if((cadena_comparar1.Longitud() == cadena_comparar2.Longitud()) && cadena_comparar1.GetCadenaStr() != cadena_comparar2.GetCadenaStr()) {  // si es distinta cadena pero misma longitud es verdadero
    return true;
  }
  return false;   // si es la misma cadena(el último caso que queda) retorna falso
} 