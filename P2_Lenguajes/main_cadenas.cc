// Universidad de La Laguna. Escuela Superior de Ingeniería y Tecnología
// 2º de Grado en Ingeniería Informática.  
// Asignatura: Computabilidad y Algoritmia

// Práctica 2: Lenguajes
// Autor: Francisco David Hernández Alayón
// Correo: alu0101469898@ull.edu.es
// Fecha: 11/10/2022
// Archivo main_cadenas.cc: Es el programa cliente que usa las clases alfabeto y simbolo
// Historial de revisiones
// 28/09/2022 - Creación, primera versión del código
// 02/10/2022 - Terminado el main

#include <iostream>

#include "clase_alfabeto.h"
#include "clase_lenguaje.h"
#include "funciones_cadenas.h"

// Método que sirve para mostrar al usuario la forma de interactuar con el programa
void Usage(int argc, char *argv[]) {
  if (argc < 2) {
    std::cout << "Modo de uso: ./maincadenas.cc fichero_entrada.txt ficherosalido.txt opcode" << std::endl;
    std::cout << "Pruebe a añadir '--help' para más información." << std::endl;
    exit(EXIT_SUCCESS);
  }
  std::string parametro{argv[1]};
  if (parametro == "--help") {
    std::cout << "Este programa te permite introducir desde un fichero un alfabeto y luego una cadena en la misma linea" << std::endl;
    std::cout << "Luego eliges un número entre el 1-5 para que en el fichero de salida aparezca la operacion seleccionada" << std::endl;
    std::cout << "1(Longitud)  2(Inversa)  3(Prefijos)  4(Sufijos)  5(Subcadenas)" << std::endl << std::endl; ;
  }
  if (argc != 4) {
    std::cout << "Modo de uso: ./maincadenas.cc fichero_entrada.txt ficherosalido.txt opcode" << std::endl;
    std::cout << "Pruebe a añadir '--help' para más información." << std::endl;
    exit(EXIT_SUCCESS);
  }
}


int main(int argc, char* argv[]) {
  Usage(argc, argv);
  std::string parametro{argv[3]};  // opcion escogida por el usuario
  std::string fichero_entrada{argv[1]};  // fichero de entrada
  std::string fichero_salida{argv[2]};  // fichero de salida

  /*
  if (parametro.length() == 1) { // comprobamos is el opcode es un solo caracter
    int opcion_usuario{std::stoi(parametro)};
    std::ifstream fichero_leer{fichero_entrada};  // fichero para leer los datos
    std::ofstream fichero_escribir{fichero_salida};   // fichero para escribir los datos
    std::string linea_actual;

    while (getline(fichero_leer, linea_actual)) {
      Simbolo simbolo_vacio{"&"};
      Alfabeto alfabeto{simbolo_vacio};  // alfabeto para rellenar
      Cadena cadena;  // cadena para rellenar
      ObtieneAlfabetoCadena(linea_actual, alfabeto, cadena);  // metodo para sacar la cadena y el alfabeto apartir el fichero de entrada

      fichero_escribir << "Alfabeto: " << alfabeto << " | " << "Cadena: " << cadena << " | ";
      if (alfabeto.CadenaPertenceAlfabeto(cadena) == false){
        fichero_escribir << "(la cadena no pertenece al alfabeto)";
      } else{
        switch(opcion_usuario) {    // comprobamos que opcion a elegido el usuario
          case 1: Longitud(fichero_escribir, cadena, alfabeto);
          break;
          case 2: Invertir(fichero_escribir, cadena);
          break;
          case 3: Prefijos(fichero_escribir, cadena);
          break;
          case 4: Sufijos(fichero_escribir, cadena);
          break;
          case 5: Subcadenas(fichero_escribir, cadena);
          break;
          case 6: AparicionesSimbolos(fichero_escribir, cadena, alfabeto);
          break;
          default: std::cout << "El opcode introducido no es válido, introduzca uno entre el 1 y el 5" << std::endl;
          break;
        }
      }
      fichero_escribir << std::endl;
    }
  } else {
    std::cout << "El opcode introducido no es válido, introduzca uno entre el 1 y el 5 " << std::endl;
  }
  */


 //-------------------PRACTICANDO LENGUAJES-----------------//
  Simbolo simbolo1{"00"};
  Simbolo simbolo2{"f"};
  Simbolo simbolo3{"hola"};
  Cadena cadena_prueba;
  Lenguaje lenguaje_prueba;
  Lenguaje lenguaje_vacio;

  cadena_prueba.SetCadena(simbolo1);
  lenguaje_prueba.AnadirLenguaje(cadena_prueba);
  cadena_prueba.SetCadena(simbolo2);
  lenguaje_prueba.AnadirLenguaje(cadena_prueba);
  cadena_prueba.SetCadena(simbolo3);
  lenguaje_prueba.AnadirLenguaje(cadena_prueba);

  std::cout << lenguaje_prueba << std::endl;
  std::cout << lenguaje_vacio << std::endl;

  return 0;
}