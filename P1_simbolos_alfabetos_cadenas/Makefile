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


parentheses: parentheses.o
	g++ -Wall -std=c++11 parentheses.o -oparentheses 

parentheses.o: parentheses.cc
	g++ -c parentheses.cc -o parentheses.o

clean:
	rm parentheses.o parentheses