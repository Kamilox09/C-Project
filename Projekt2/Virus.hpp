#pragma once
#include <cstdlib>
#include <time.h>

/**
 * @class	Virus
 *
 * @brief	Klasa obs�uguj�ca przebieg symulacji.
 *
 * @author	Kamil Ulaszek
 * @date	2018-01-19
 */

class Virus {

public:

	/**
	 * @fn	int** Virus::infectCells(int** board,int n, int t, int prob);
	 *
	 * @brief	Infekuje kom�rki.
	 *
	 * @author	Kamil Ulaszek
	 *
	 * @param [in,out]	board	Tablica stan�w kom�rek.
	 * @param 		  	n	 	Rozmiar tablicy stan�w kom�rek.
	 * @param 		  	t	 	Czas infekowania.
	 * @param 		  	prob 	Prawdopodobie�stwo infekcji.
	 *
	 * @return	Zwraca tablic� stan�w po zara�eniu kom�rek.
	 */

	int** infectCells(int** board,int n, int t, int prob);

	/**
	 * @fn	int** Virus::incBoard(int** board, int n);
	 *
	 * @brief	Uaktualnia tablic� stan�w kom�rek.
	 *
	 * @author	Kamil Ulaszek
	 *
	 * @param [in,out]	board	Tablica stan�w kom�rek.
	 * @param 		  	n	 	Rozmiar tablicy stan�w kom�rek.
	 *
	 * @return	Zwraca tablic�  stan�w po aktualizacji.
	 */

	int** incBoard(int** board, int n);

	/**
	 * @fn	int** Virus::healCells(int** board,int n, int iT, int pT);
	 *
	 * @brief	Uzdrawia kom�rki po chorobie.
	 *
	 * @author	Kamil Ulaszek
	 *
	 * @param [in,out]	board	Tablica stan�w kom�rek.
	 * @param 		  	n	 	Rozmiar tablicy stan�w kom�rek.
	 * @param 		  	iT   	Czas infekowania.
	 * @param 		  	pT   	Czas odporno�ci.
	 *
	 * @return	Zwraca tablic� stan�w po uzdrowieniu kom�rek.
	 */

	int** healCells(int** board,int n, int iT, int pT);
	
};

