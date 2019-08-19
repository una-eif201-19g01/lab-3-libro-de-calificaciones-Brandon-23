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

LibroCalificaciones::LibroCalificaciones() {
	for (int estudiantes = 0; estudiantes < ESTUDIANTES; estudiantes++) {
		for (int exaamen = 0; examen < EXAMENES; examen++) {
			calificaciones[estudiante][examen] = 0;
		}
	}
}

LibroCalificaciones::LibroCalificaciones(const std::string &nombreCurso, int[][EXAMENES]) {
	// Copiar notas del arreglo
	for (int estudiantes = 0; estudiantes < ESTUDIANTES; estudiantes++) {
		for (int exaamen = 0; examen < EXAMENES; examen++) {
			calificaciones[estudiante][examen] = arregloCalificaciones[estudiante][examen];
		}
	}
}

LibroCalificaciones::obtenerNotaMinima() {
	int notaMinima = 100;

	for (int estudiante = 0; estudiante < ESTUDIANTES; estudiante++) {
		for (int examen = 0; examen < EXAMENES; examen++) {
			if (calificaciones[estudiante][examen] < notaMinima) {
				notaMinima = calificaciones[estudiante][examen];
			}
		}
	}
	return notaMinima;
}

LibroCalificaciones::obtenerNotaMaxima() {
	int notaMaxima = 0;

	for (int estudiante = 0; estudiante < ESTUDIANTES; estudiante++) {
		for (int examen = 0; examen < EXAMENES; examen++) {
			if (calificaciones[estudiante][examen] > notaMaxima) {
				notaMaxima = calificaciones[estudiante][examen];
			}
		}
	}
	return notaMaxima
}

double LibroCalificaciones::obtenerPromedio(const int[], const int) {
	double promedio = 0;
	for (int estudiante = 0; estudiante < const int[]; estudiante++) {
		for (int examen = 0; examen < const int; examen++) {
			promedio += calificaciones[estudiate][examen];
		}
	}
	return promedio / examen;
}

LibroCalificaciones::obtenerReporteNotas() {
	std::string reporteI = "\nLas siguientes son las notas del curso [" + getNombreCurso + "] :\n\t\t\t\Examen 1\tExamen 2\tExamen 3\tPromedio",
		reporteT = "",
		reporte = "";
	for (int estudiante = 0; estudiante < ESTUDIANTES; estudiante++) {
		reporteT += "\nEstudiante [" + std:to_string(estudiante) + "]\t";
		for (int examen = 0; examen < Examenes; examen++) {
			reporte = std::to_string(examen) + "\t\t\t";
			if (examen == 2) {
				reporte=reporte + std::to_string(obtenerPromedio(calificaciones[estudiante],EXAMENES))
			}
		}
	}
}

LibroCalificaciones::obtenerReporteNotasMaxMin() {
	std::string reporteN;

	reporteN = "\nLa nota minima es: [" + std::to_string(obtenerNotaMinima()) + "]\n";
	reporteN += "La nota maxima es: [" + std::to_string(obtenerNotaMaxima()) + "]\n";

	return reporteN;
}

const std::string &LibroCalificaciones::getNombreCurso() const {
	return nombreCurso;
}

void LibroCalificaciones::setNombreCurso(const std::string &nombreCurso) {
	LibroCalificaciones::nombreCurso = nombreCurso;
}