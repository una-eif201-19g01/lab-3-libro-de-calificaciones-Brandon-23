/*
 * =====================================================================================
 *
 *       Filename:  LibroCalificaciones.h
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


#ifndef CALIFICACIONES_LIBROCALIFICACIONES_H
#define CALIFICACIONES_LIBROCALIFICACIONES_H

#include <string>

// Costantes.
static const int ESTUDIANTES = 10;
static const int EXAMENES = 3;

class LibroCalificaciones {
	std::string nombreCurso;
	int calificaciones[ESTUDIANTES][EXAMENES];

	// M�todos.
	int obtenerNotaMinima();
	int obtenerNotaMaxima();
	double obtenerPromedio(const int[], const int);

public:

	// Constructores.
	LibroCalificaciones();
	LibroCalificaciones(const std::string &nombreCurso, int[][EXAMENES]);

	// M�todos
	std::string obtenerReporteNotas();
	std::string obtenerReporteNotasMaxMin();

	// Get y Set.
	const std::string &getNombreCurso() const;

	void setNombreCurso(const std::string &nombreCurso);
};


#endif //CALIFICACIONES_LIBROCALIFICACIONES_H
