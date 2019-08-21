/*
 * =====================================================================================
 *
 *       Filename:  main.cpp
 *
 *    Description:  Permite mostrar las calificaciones de un curso
 *
 *        Created:  2019-08-18
 *
 *         Author:  Brandon Alexander Arguedas Murillo brandonxd1970@gmail.com
 *   Organization:  Universidad Nacional de Costa Rica
 *
 * =====================================================================================
 */


#include <iostream>
#include "LibroCalificaciones.h"

int main() {
	// Costantes
	static const int ESTUDIANTES = 10;
	static const int EXAMENENES = 3;

	int listaCalificaciones[ESTUDIANTES][EXAMENES] = { // Creacion de un arreglo con parametros predefinidos.
		{87,96,70},{68,87,90},{94,100,90},{100,81,82},{83,65,85},
		{78,87,65},{85,75,83},{91,94,100},{76,72,84}, {87,93,73} };





	LibroCalificaciones libroCalificaciones("Curso Progra I", listaCalificaciones); //Llamado al constructor para su creacion con parametros predefinidos con el anterior arreglo creado.

	//std::cout << libroCalificaciones.obtenerReporteNotas() << std::endl; //Impresion del metodo obtenerReporteNotas para mostrarlo en pantalla con su respectiva informacion (estudiantes,notas y promedios).

	std::cout << libroCalificaciones.obtenerReporteNotasMaxMin() << std::endl; //Impresion del metodo obtenerNotasMAXMIN para mostrar en pantalla las nota maxima y minina de los estudiantes.
}