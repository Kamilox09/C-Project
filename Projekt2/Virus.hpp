#pragma once
#include <cstdlib>
#include <time.h>

/**
 * @class	Virus
 *
 * @brief	Klasa obs³uguj¹ca przebieg symulacji.
 *
 * @author	Kamil Ulaszek
 * @date	2018-01-19
 */

class Virus {

public:

	/**
	 * @fn	int** Virus::infectCells(int** board,int n, int t, int prob);
	 *
	 * @brief	Infekuje komórki.
	 *
	 * @author	Kamil Ulaszek
	 *
	 * @param [in,out]	board	Tablica stanów komórek.
	 * @param 		  	n	 	Rozmiar tablicy stanów komórek.
	 * @param 		  	t	 	Czas infekowania.
	 * @param 		  	prob 	Prawdopodobieñstwo infekcji.
	 *
	 * @return	Zwraca tablicê stanów po zara¿eniu komórek.
	 */

	int** infectCells(int** board,int n, int t, int prob);

	/**
	 * @fn	int** Virus::incBoard(int** board, int n);
	 *
	 * @brief	Uaktualnia tablicê stanów komórek.
	 *
	 * @author	Kamil Ulaszek
	 *
	 * @param [in,out]	board	Tablica stanów komórek.
	 * @param 		  	n	 	Rozmiar tablicy stanów komórek.
	 *
	 * @return	Zwraca tablicê  stanów po aktualizacji.
	 */

	int** incBoard(int** board, int n);

	/**
	 * @fn	int** Virus::healCells(int** board,int n, int iT, int pT);
	 *
	 * @brief	Uzdrawia komórki po chorobie.
	 *
	 * @author	Kamil Ulaszek
	 *
	 * @param [in,out]	board	Tablica stanów komórek.
	 * @param 		  	n	 	Rozmiar tablicy stanów komórek.
	 * @param 		  	iT   	Czas infekowania.
	 * @param 		  	pT   	Czas odpornoœci.
	 *
	 * @return	Zwraca tablicê stanów po uzdrowieniu komórek.
	 */

	int** healCells(int** board,int n, int iT, int pT);
	
};

