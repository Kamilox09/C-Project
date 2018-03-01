#pragma once
#include "GUI.hpp"
#include "Table.hpp"
#include <iostream>

/**
 * @class	Program
 *
 * @brief	Klasa wykonywania programu.
 *
 * @author	Kamil Ulaszek
 * @date	2018-01-19
 */

class Program {
private:
	/** @brief	Szeroko�� okna. */
	const int WINDOW_WIDTH = 500;
	/** @brief	Wysoko�� okna. */
	const int WINDOW_HEIGH = 400;
	/** @brief	Nazwa okna. */
	const std::string WINDOW_TITLE = "Symulacja liszaja";
	/** @brief	Pocz�tkowy rozmiar tablicy symulacyjnej. */
	const int TABLE_SIZE = 50;
	/** @brief	Pozycja X do okre�lenia po�o�enia komponent�w. */
	const float COMPONENTS_X_POS = 25;
	/** @brief	Pozycja X do okre�lenia po�o�enia komponent�w. */
	const float COMPONENTS_Y_POS = 145;
	/** @brief	Napis do wy�wietlenia przy komponencie rozmiaru. */
	const std::wstring SIZE_TITLE = L"Rozmiar";
	/** @brief	Warto�� pocz�tkowa rozmiaru. */
	const int SIZE_START_VALUE = 50;
	/** @brief	Napis do wy�wietlenia przy komponencie fps. */
	const std::wstring FPS_TITLE = L"Fps";
	/** @brief	Warto�� pocz�tkowa fps. */
	const int FPS_START_VALUE = 30;
	/** @brief	Napis do wy�wietlenia przy komponencie czasu infekowania. */
	const std::wstring INFECTION_TIME_TITLE = L"Czas infekowania";
	/** @brief	Warto�� pocz�tkowa czasu infekowania. */
	const int INFECTION_TIME_START_VALUE = 6;
	/** @brief	Napis do wy�wietlenia przy komponencie czasu odporno�ci. */
	const std::wstring PROTECTION_TIME_TITLE = L"Czas ochrony";
	/** @brief	Warto�� pocz�tkowa czasu odporno�ci. */
	const int PROTECTION_TIME_START_VALUE = 8;
	/** @brief	Napis do wy�wietlenia przy komponencie prawdopodobie�stwa. */
	const std::wstring PROBABILITY_TITLE = L"Prawdopodobie�stwo";
	/** @brief	Warto�� pocz�tkowa prawdopodobie�stwa. */
	const int PROBABILITY_START = 50;
	/** @brief	Limit FPS okna. */
	const int FPS_LIMIT = 99;
	/** @brief	Wska�nik do obiektu GUI. */
	GUI* gui;
	/** @brief	Wska�nik do obiektu tablicy. */
	Table* table;
	/** @brief	Zdarzenie. */
	sf::Event event;
	/** @brief	Czasomierz potrzebny do ustawiania aktualnej liczby FPS. */
	sf::Clock timer;

	/**
	 * @fn	void Program::setup();
	 *
	 * @brief	Inicjuje sk�adowe programu.
	 *
	 * @author	Kamil Ulaszek
	 */

	void setup();

	/**
	 * @fn	void Program::handleEvents();
	 *
	 * @brief	Obs�uguje zdarzenia.
	 *
	 * @author	Kamil Ulaszek
	 */

	void handleEvents();

	/**
	 * @fn	void Program::update();
	 *
	 * @brief	Aktualizuje program.
	 *
	 * @author	Kamil Ulaszek
	 */

	void update();

	/**
	 * @fn	void Program::render();
	 *
	 * @brief	Renderuje grafike.
	 *
	 * @author	Kamil Ulaszek
	 */

	void render();
public:

	/**
	 * @fn	void Program::startProgram();
	 *
	 * @brief	Startuje program.
	 *
	 * @author	Kamil Ulaszek
	 */

	void startProgram();

	/**
	 * @fn	Program::~Program();
	 *
	 * @brief	Destruktor.
	 *
	 * @author	Kamil Ulaszek
	 */

	~Program();
};