Probando: Main.o	Matriz.o
	g++ Main.o	Matriz.o	-o	Probando

Matriz.o:	Matriz.h	Matriz.cpp
	g++	-c	Matriz.cpp

Main.o:	Main.cpp
	g++	-c	Main.cpp
