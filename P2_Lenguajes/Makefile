# Universidad de La Laguna. Escuela Superior de Ingeniería y Tecnología
# 2º de Grado en Ingeniería Informática.  
# Asignatura: Computabilidad y Algoritmia

# Práctica 1: Símbolos, alfabetos y cadenas
# Autor: Francisco David Hernández Alayón
# Correo: alu0101469898@ull.edu.es
# Fecha: 04/10/2022
# Archivo Makefile: Es el fichero que permite compilar y ejecutar todos los fichero .cc y .h

# Historial de revisiones
# 28/09/2022 - Creación, primera versión del código
# 29/09/2022 - Inclusión de todos los ficheros a compilar dentro del código


main_cadenas: main_cadenas.o clase_alfabeto.o clase_cadena.o clase_simbolo.o funciones_cadenas.o clase_lenguaje.o
	g++ -Wall -std=c++17 main_cadenas.o clase_lenguaje.o clase_alfabeto.o clase_cadena.o clase_simbolo.o funciones_cadenas.o -o main_cadenas 

main_cadenas.o: main_cadenas.cc clase_alfabeto.h
	g++ -c main_cadenas.cc -o main_cadenas.o 

clase_lenguaje.o: clase_lenguaje.cc clase_alfabeto.h
	g++ -c clase_lenguaje.cc -o clase_lenguaje.o

clase_alfabeto.o: clase_alfabeto.cc clase_alfabeto.h
	g++ -c clase_alfabeto.cc -o clase_alfabeto.o

clase_cadena.o: clase_cadena.cc clase_cadena.h
	g++ -c clase_cadena.cc -o clase_cadena.o

clase_simbolo.o: clase_simbolo.cc clase_simbolo.h
	g++ -c clase_simbolo.cc -o clase_simbolo.o

funciones_cadenas.o: funciones_cadenas.cc 
	g++ -c funciones_cadenas.cc -o funciones_cadenas.o

clean:
	rm main_cadenas main_cadenas.o clase_lenguaje.o clase_alfabeto.o clase_cadena.o clase_simbolo.o funciones_cadenas.o 