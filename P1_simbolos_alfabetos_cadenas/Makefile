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
#



main_strings: main_strings.o alphabet_class.o
	g++ -Wall -std=c++17 main_strings.o alphabet_class.o -o main_strings 

main_strings.o: main_strings.cc alphabet_class.h
	g++ -c main_strings.cc -o main_strings.o 

alphabet_class.o: alphabet_class.cc alphabet_class.h
	g++ -c alphabet_class.cc -o alphabet_class.o

clean:
	rm main_strings.o main_strings alphabet_class.o main_strings.txt