// Universidad de La Laguna. Escuela Superior de Ingeniería y Tecnología
// 2º de Grado en Ingeniería Informática.  
// Asignatura: Computabilidad y Algoritmia

// Práctica 1: Símbolos, alfabetos y cadenas
// Autor: Francisco David Hernández Alayón
// Correo: alu0101469898@ull.edu.es
// Fecha: 04/10/2022
// Archivo clase_cadena.cc: Implementación de la clase cadena

// Historial de revisiones
// 28/09/2022 - Creación, primera versión del código
// 29/09/2022 - incluidos los primeros operadores para la clase Cadena
// 01/10/2022 - Terminada la clase Cadena


#include "clase_cadena.h"
#include <string>
#include <vector>

//------------------Métodos-de-clase------------------//
// Constructor parametrizado de la clase Cadena con un parámetro que es un Simbolo
Cadena::Cadena(const Simbolo& kSimboloConvertir) {
  cadena_ = kSimboloConvertir.GetSimbolo();
}

// Constructor parametrizado de la clase Cadena con un parámetro que es una Cadena
Cadena::Cadena(const Cadena& kCadenaConvertir) {
  cadena_ = kCadenaConvertir.GetCadena();
}


// Constructor por defecto de la clase Cadena
Cadena::Cadena() {
  cadena_ = "";
}

// metodo para concatenar un simbolo a la cadena y cambiando esta
void Cadena::ConcatenarDelante(const Simbolo& kSimboloConcatenar) {
  std::string nueva_cadena{cadena_ + kSimboloConcatenar.GetSimbolo()};
  cadena_ = nueva_cadena;

}

// metodo para concatenar un simbolo a la cadena y cambiando esta
void Cadena::ConcatenarDetras(const Simbolo& kSimboloConcatenar) {
  std::string nueva_cadena{kSimboloConcatenar.GetSimbolo() + cadena_};
  cadena_ = nueva_cadena;

}

// Setter de la clase cadena para cambiar la cadena
void Cadena::SetCadena(const Cadena& kNuevaCadena) {
  cadena_ = kNuevaCadena.GetCadena();
}

// Getter de la clase cadena para obtener la string de la cadena
std::string Cadena::GetCadena() const {
  return cadena_;
}

// resetea la cadena para que no contenga ningún simbolo
void Cadena::ResetCadena() {
  cadena_ = "";
}

// sirve para conseguir un simbolo de la cadena especifico en string
std::string Cadena::AtCadena(const int kPosicion) const {
  if (kPosicion < cadena_.length()) {
    std::string simbolo_entregar{cadena_[kPosicion]};
    return simbolo_entregar;
  }
  return "&";
}  


//------------------Sobrecarga-de-operadores------------------//
// sobrecarga del operador + para ampliar la cadena concatenando una string
Cadena Cadena::operator+(const Simbolo& kSimboloAnadir) {
  Cadena cadena_nueva{cadena_ + kSimboloAnadir.GetSimbolo()};
  return cadena_nueva;
}

// sobrecarga del operador de inserción en flujo para mostrar la cadena
std::ostream& operator<<(std::ostream& out, const Cadena& kCadenaMostrar) {
  if (kCadenaMostrar.Longitud() == 0) {   // si tiene tamaño 0 muestra que es una cadena vacía
    out << "&";

  } else {
    out << kCadenaMostrar.GetCadena();

  }
  return out;
}


//------------------Ejercicios-Practica------------------//
int Cadena::Longitud() const {
  return int(cadena_.length());
}


// Método que crea una cadena inversa
Cadena Cadena::Inversa() const {
  Cadena cadena_inversa;
  for (int bucle{int(cadena_.length()) - 1}; bucle >= 0; --bucle) {
    Simbolo simbolo_anadir{AtCadena(bucle)};
    cadena_inversa = cadena_inversa + simbolo_anadir;
  }

  return cadena_inversa;
}


// Método que incluye en un vector todos los prefijos de la cadena
std::vector<Cadena> Cadena::Prefijos() const {
  std::vector<Cadena> vector_cadenas;
  Cadena prefijo_anadir;
  Cadena cadena_vacia{'&'};
  vector_cadenas.push_back(cadena_vacia);  // incluyo la cadena vacía

  for (int bucle{0}; bucle < Longitud(); ++bucle) {
    Simbolo simbolo_concatenar = AtCadena(bucle);
    prefijo_anadir.ConcatenarDelante(simbolo_concatenar);
    vector_cadenas.push_back(prefijo_anadir);

  }

  return vector_cadenas;
}


// Método que incluye en un vector todos los sufijos de la cadena
std::vector<Cadena> Cadena::Sufijos() const {
  std::vector<Cadena> vector_cadenas;
  Cadena cadena_invertir{Inversa()};
  Cadena sufijo_anadir;
  Cadena cadena_vacia{'&'};
  vector_cadenas.push_back(cadena_vacia);  // incluyo la cadena vacía

  for (int bucle{0}; bucle < Longitud(); ++bucle) {
    Simbolo simbolo_concatenar = cadena_invertir.AtCadena(bucle);
    sufijo_anadir.ConcatenarDetras(simbolo_concatenar);
    vector_cadenas.push_back(sufijo_anadir);

  }
  
  return vector_cadenas;
}


// Sirve para comprobar si la cadena está en ese vector de cadenas
bool ComprobarExistenciaVector(const std::vector<Cadena>& kVectorComprobar, const Cadena& kCadenaComprobar) {
  for (int bucle{0}; bucle < kVectorComprobar.size() ; ++bucle) {
    if (kCadenaComprobar.GetCadena() == kVectorComprobar[bucle].GetCadena()) {
      return true;
    }
  }
  return false;
} 


// Método que incluye en un vector todas las subcadenas de la cadena
std::vector<Cadena> Cadena::Subcadenas() const {
  std::vector<Cadena> vector_subcadenas;
  Cadena subcadena_anadir;
  Cadena cadena_vacia{'&'};
  vector_subcadenas.push_back(cadena_vacia);  // incluyo la cadena vacía

  for (int bucle1{0}; bucle1 < Longitud(); ++bucle1) {
    for (int bucle2{bucle1}; bucle2 < Longitud(); ++bucle2) {
      subcadena_anadir.ConcatenarDelante(AtCadena(bucle2));
      if (ComprobarExistenciaVector(vector_subcadenas, subcadena_anadir) == false) {      // compruebo si ya he cogido esa cadena antes
        vector_subcadenas.push_back(subcadena_anadir);
      }
    }
    subcadena_anadir.ResetCadena();
  }
  
  return vector_subcadenas;
}




