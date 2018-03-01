#pragma once
#include "Virus.hpp"

/**
 * @class	Table
 *
 * @brief	Klasa tablicy stanów komórek.
 *
 * @author	Kamil Ulaszek
 * @date	2018-01-19
 */

class Table {
private: 
	/** @brief	Rozmiar tablicy stanów komórek. */
	int n;
    /** @brief	Tablica stanów komórek. */
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
	 * @brief	Zwraca sta³y wskaŸnik do tablicy stanów komórek.
	 *
	 * @author	Kamil Ulaszek
	 *
	 * @return	The board.
	 */

	int** const getBoard();

	/**
	 * @fn	void Table::setBoard(int** board);
	 *
	 * @brief	Ustawia tablicê stanów komórek.
	 *
	 * @author	Kamil Ulaszek
	 *
	 * @param [in,out]	board	Nowy wskaŸnik na tablicê stanów komórek.
	 */

	void setBoard(int** board);

	/**
	 * @fn	void Table::changeSize(int k);
	 *
	 * @brief	Zmienia rozmiar tablicy stanów komórek podczas dzia³ania programu.
	 *
	 * @author	Kamil Ulaszek
	 *
	 * @param	k	Nowy rozmiar.
	 */

	void changeSize(int k);

	/**
	 * @fn	void Table::fillCells();
	 *
	 * @brief	Inicjuje tablicê stanów komórek.
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
	 * @param	n	Rozmiar tablicy stanów komórek.
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
	 * @brief	Infekuje komórki.
	 *
	 * @author	Kamil Ulaszek
	 *
	 * @param	t   	Czas infekowania.
	 * @param	prob	Prawdopodobieñstwo infekowania.
	 */

	void infect(int t, int prob);

	/**
	 * @fn	void Table::increase();
	 *
	 * @brief	Aktualizacja tablicy stanów.
	 *
	 * @author	Kamil Ulaszek
	 */

	void increase();

	/**
	 * @fn	void Table::heal(int iT, int pT);
	 *
	 * @brief	Zmienia stan komórek po up³yniêciu odpowiedniego czasu na zdrowy.
	 *
	 * @author	Kamil Ulaszek
	 *
	 * @param	iT	Czas infekowania.
	 * @param	pT	Czas ochrony.
	 */

	void heal(int iT, int pT);


};
