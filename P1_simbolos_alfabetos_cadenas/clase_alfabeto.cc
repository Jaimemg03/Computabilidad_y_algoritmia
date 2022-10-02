// Universidad de La Laguna. Escuela Superior de Ingeniería y Tecnología
// 2º de Grado en Ingeniería Informática.  
// Asignatura: Computabilidad y Algoritmia

// Práctica 1: Símbolos, alfabetos y cadenas
// Autor: Francisco David Hernández Alayón
// Correo: alu0101469898@ull.edu.es
// Fecha: 04/10/2022
// Archivo clase_alfabeto.cc: Implementación de la clase alfabeto

// Historial de revisiones
// 28/09/2022 - Creación, primera versión del código
// 02/10/2022 - Terminada clase Alfabeto

#include <iostream>
#include <fstream>
#include <vector>
#include <string>

#include "clase_alfabeto.h"

//------------------Métodos-de-clase------------------//
// constructor de la clase Alfabeto
Alfabeto::Alfabeto(const Simbolo& kSimboloAnadir) {
  alfabeto_.push_back(kSimboloAnadir);

}

//getter de la clase Alfabeto
std::vector<Simbolo> Alfabeto::GetAlfabeto() const {
  return alfabeto_;
} 

//setter de la clase Alfabeto
void Alfabeto::SetAlfabeto(const Alfabeto& kAlfabetoCambiar) {
  alfabeto_.clear();
  for (int bucle{0}; bucle < kAlfabetoCambiar.LongitudAlfabeto(); ++bucle) {
    alfabeto_.push_back(kAlfabetoCambiar.AtAlfabeto(bucle));
  }
}

// te da un simbolo en una determinada posicion del alfabeto
Simbolo Alfabeto::AtAlfabeto(const int kPosicion) const {
  if (kPosicion < LongitudAlfabeto() && kPosicion >= 0 ) {   // comprobamos si estamos accediendo a un elemento existente del vector
    return alfabeto_[kPosicion];
  } else {
    Simbolo simbolo_vacio{""};
    return simbolo_vacio;
  }
} 


// Método para añadir un simbolo en el alfabeto
void Alfabeto::AnadirAlfabeto(const Simbolo& kSimboloAnadir) {
  alfabeto_.push_back(kSimboloAnadir);
}

// Muestra cuantos simbolos tiene el alfabeto
int Alfabeto::LongitudAlfabeto() const {
  return alfabeto_.size();
}  

// Método que comprueba si la cadena pertenece al alfabeto
bool Alfabeto::CadenaPertenceAlfabeto(const Cadena& kCadenaComprobar) {
  bool comprobacion_final{false};   // variable que comprueba si la cadena pertenece al alfabeto
  Simbolo simbolo_comprobar1; // variable que tomara el valor del simbolo  del alfabeto que estamos comprobando si esta en la cadena
  int longitud_simbolo;  // variable que tomará la longitud del simbolo_comprobar para saber el tamaño de comparación
  Simbolo simbolo_comprobar2; // variable que tomara el valor del simbolo de la cadena que estamos comprobando si esta en el alfabeto
  int posicion_comprobar{0}; // varibale que toma la posicion de la cadena en la cual empieza simbolo_comprobar2

  for (int bucle1{0}; bucle1 < LongitudAlfabeto() && comprobacion_final == false;) {
    simbolo_comprobar1.SetSimbolo(AtAlfabeto(bucle1).GetSimbolo());   
    longitud_simbolo = simbolo_comprobar1.Longitud();
    simbolo_comprobar2.SetSimbolo("");    // vaciamos el simbolo para volver a reellenarlo con el siguiente

    for (int bucle2{0}; bucle2 < longitud_simbolo && posicion_comprobar < kCadenaComprobar.Longitud(); ++bucle2) {  // rellenamos un simbolo para comprobar partiendo de la cadena
      simbolo_comprobar2.Concatenar(kCadenaComprobar.GetCadenaStr()[posicion_comprobar]);
      if (posicion_comprobar < kCadenaComprobar.Longitud()) {
        ++posicion_comprobar;
      }

    }

    if (simbolo_comprobar1 != simbolo_comprobar2) {   // si esa parte de la cadena ya está en el alfabeto avanzamos hasta la siguiente parte a comprobar
      posicion_comprobar = posicion_comprobar - simbolo_comprobar2.Longitud();
      ++bucle1;  // sumamos uno a bucle para seguir buscando un simbolo
    } else {
      bucle1 = 0;   // si son iguales volvemos a comprobar desde la cadena dle principio 
    }
    
    if (posicion_comprobar >= kCadenaComprobar.Longitud()) {   // si posicion_comprobar es mas grande que la cadena significa que podemos formar toda la cadena con el alfabeto
      comprobacion_final = true;
    }

  }
  
  return comprobacion_final;
}


//------------------Sobrecarga-Operadores------------------//
// sobrecarga del operador de inserción en flujo para mostrar el alfabeto
std::ostream& operator<<(std::ostream& out, const Alfabeto& kAlfabetoMostrar) {
  if (kAlfabetoMostrar.LongitudAlfabeto() == 0) {   // si tiene tamaño 0 muestra un error
    out << "Error: Alfabeto no puede estar vacio";

  } else {
    for (int bucle{0}; bucle < kAlfabetoMostrar.LongitudAlfabeto(); ++bucle) {
      out << kAlfabetoMostrar.AtAlfabeto(bucle) << " ";
    }

  }
  return out;
}  

