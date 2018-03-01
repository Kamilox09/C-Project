#pragma once
#include "Virus.hpp"

/**
 * @class	Table
 *
 * @brief	Klasa tablicy stan�w kom�rek.
 *
 * @author	Kamil Ulaszek
 * @date	2018-01-19
 */

class Table {
private: 
	/** @brief	Rozmiar tablicy stan�w kom�rek. */
	int n;
    /** @brief	Tablica stan�w kom�rek. */
    int** board;

public:

	/**
	 * @fn	int Table::getN();
	 *
	 * @brief	Zwraca rozmiar.
	 *
	 * @author	Kamil Ulaszek
	 *
	 * @return	Rozmiar.
	 */

	int getN();

	/**
	 * @fn	void Table::setN(int n);
	 *
	 * @brief	Ustawia rozmiar.
	 *
	 * @author	Kamil Ulaszek
	 *
	 * @param	n	Nowy rozmiar.
	 */

	void setN(int n);

	/**
	 * @fn	int** const Table::getBoard();
	 *
	 * @brief	Zwraca sta�y wska�nik do tablicy stan�w kom�rek.
	 *
	 * @author	Kamil Ulaszek
	 *
	 * @return	The board.
	 */

	int** const getBoard();

	/**
	 * @fn	void Table::setBoard(int** board);
	 *
	 * @brief	Ustawia tablic� stan�w kom�rek.
	 *
	 * @author	Kamil Ulaszek
	 *
	 * @param [in,out]	board	Nowy wska�nik na tablic� stan�w kom�rek.
	 */

	void setBoard(int** board);

	/**
	 * @fn	void Table::changeSize(int k);
	 *
	 * @brief	Zmienia rozmiar tablicy stan�w kom�rek podczas dzia�ania programu.
	 *
	 * @author	Kamil Ulaszek
	 *
	 * @param	k	Nowy rozmiar.
	 */

	void changeSize(int k);

	/**
	 * @fn	void Table::fillCells();
	 *
	 * @brief	Inicjuje tablic� stan�w kom�rek.
	 *
	 * @author	Kamil Ulaszek
	 */

	void fillCells();

	/**
	 * @fn	Table::Table(int n);
	 *
	 * @brief	Konstruktor.
	 *
	 * @author	Kamil Ulaszek
	 *
	 * @param	n	Rozmiar tablicy stan�w kom�rek.
	 */

	Table(int n);

	/**
	 * @fn	Table::~Table();
	 *
	 * @brief	Destruktor.
	 *
	 * @author	Kamil Ulaszek
	 */

	~Table();

	/**
	 * @fn	void Table::infect(int t, int prob);
	 *
	 * @brief	Infekuje kom�rki.
	 *
	 * @author	Kamil Ulaszek
	 *
	 * @param	t   	Czas infekowania.
	 * @param	prob	Prawdopodobie�stwo infekowania.
	 */

	void infect(int t, int prob);

	/**
	 * @fn	void Table::increase();
	 *
	 * @brief	Aktualizacja tablicy stan�w.
	 *
	 * @author	Kamil Ulaszek
	 */

	void increase();

	/**
	 * @fn	void Table::heal(int iT, int pT);
	 *
	 * @brief	Zmienia stan kom�rek po up�yni�ciu odpowiedniego czasu na zdrowy.
	 *
	 * @author	Kamil Ulaszek
	 *
	 * @param	iT	Czas infekowania.
	 * @param	pT	Czas ochrony.
	 */

	void heal(int iT, int pT);


};
