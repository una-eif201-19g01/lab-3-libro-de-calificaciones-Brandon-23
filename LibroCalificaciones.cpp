/*
 * =====================================================================================
 *
 *       Filename:  LibroCalificaciones.cpp
 *
 *    Description:  Reporte de calificaciones
 *
 *        Created:  2019-08-18
 *
 *         Author:  Brandon Alexander Arguedas Murillo brandonxd1970@gmail.com
 *   Organization:  Universidad Nacional de Costa Rica
 *
 * =====================================================================================
 */

#include "LibroCalificaciones.h"
#include <iomanip>
#include <iostream>

LibroCalificaciones::LibroCalificaciones() { //Constructor sin parametros.
	for (int estudiantes = 1; estudiantes <= ESTUDIANTES; estudiantes++) {
		for (int exaamen = 1; examen <= EXAMENES; examen++) {
			calificaciones[estudiante][examen] = 0;
		}
	}
}

LibroCalificaciones::LibroCalificaciones(const std::string &nombreCurso, int[][EXAMENES]) { //Constructor con parametros.
	// Copiar notas del arreglo
	for (int estudiante = 1; estudiante <= ESTUDIANTES; estudiantes++) {
		for (int examen = 1; examen <= EXAMENES; examen++) {
			calificaciones[estudiante][examen] = arregloCalificaciones[estudiante][examen];
		}
	}
}

LibroCalificaciones::obtenerNotaMinima() { //Metodo de obtencion de la nota minima.
	int notaMinima = 100;

	for (int estudiante = 1; estudiante <= ESTUDIANTES; estudiante++) {
		for (int examen = 1; examen <= EXAMENES; examen++) {
			if (calificaciones[estudiante][examen] < notaMinima) {
				notaMinima = calificaciones[estudiante][examen];
			}
		}
	}
	return notaMinima;
}

LibroCalificaciones::obtenerNotaMaxima() {//Metodo de obtencion de la nota maxima.
	int notaMaxima = 0;

	for (int estudiante = 1; estudiante <= ESTUDIANTES; estudiante++) {
		for (int examen = 1; examen <= EXAMENES; examen++) {
			if (calificaciones[estudiante][examen] > notaMaxima) {
				notaMaxima = calificaciones[estudiante][examen];
			}
		}
	}
	return notaMaxima
}

double LibroCalificaciones::obtenerPromedio(const int[], const int) { //Metodo para obtener el promedio entre las notas del estudiante.
	double promedio = 0;

	for (int examen = 1; examen <= EXAMENES; examen++) {
		promedio += calificaciones[arregloCalificacion[estudiante]][examen] / EXAMENES;
	}
	return promedio;
}

LibroCalificaciones::obtenerReporteNotas() { //Metodo para mostrar en pantalla la informacion de las calificaciones de los estudiantes.
	std::string reporteI = "\nLas siguientes son las notas del curso [" + getNombreCurso + "] :\n\t\t\t\Examen 1\tExamen 2\tExamen 3\tPromedio",
		reporteT = "",
		reporte = "";

	for (int estudiante = 1; estudiante <= ESTUDIANTES; estudiante++) {
		reporteT += "\nEstudiante [" + std:to_string(estudiante) + "]\t";
		for (int examen = 1; examen <= Examenes; examen++) {
			reporte = std::to_string(examen) + "\t\t\t";
			if (examen == 3) {
				reporte = reporte + std::to_string(LibroCalificaciones.obtenerPromedio(calificaciones[estudiante], EXAMENES))
			}
		}
	}
	return (reporteI + reporteT + reporte);
}

LibroCalificaciones::obtenerReporteNotasMaxMin() { //Metodo que muestra en pantalla la nota maxima y minima entre todos los estudiantes.
	std::string reporteN;

	reporteN = "\nLa nota minima es: [" + std::to_string(obtenerNotaMinima()) + "]\n";
	reporteN += "La nota maxima es: [" + std::to_string(obtenerNotaMaxima()) + "]\n";

	return reporteN;
}

const std::string &LibroCalificaciones::getNombreCurso() const { //Metodo get.
	return nombreCurso;
}

void LibroCalificaciones::setNombreCurso(const std::string &nombreCurso) { //Metod set.
	LibroCalificaciones::nombreCurso = nombreCurso;
}