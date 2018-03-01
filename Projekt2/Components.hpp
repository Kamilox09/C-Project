#pragma once
#include "UpAndDownComponent.hpp"
#include "SizeComponent.hpp"

/**
 * @class	Components
 *
 * @brief	Komponenty do sterowania symulacj�.
 *
 * @author	Kamil Ulaszek
 * @date	2018-01-19
 */

class Components {
private:
	/** @brief	Komponent do sterowania rozmiarem. */
	SizeComponent *size;
	/** @brief	Komponent do sterowania liczb� fps. */
	UpAndDownComponent *fps;
	/** @brief	Komponent do sterowania czasem infekowania. */
	UpAndDownComponent *infectionTime;
	/** @brief	Komponent do sterowania czasem odporno�ci. */
	UpAndDownComponent *protectionTime;
	/** @brief	Komponent do sterowania prawdopodobie�stwem. */
	UpAndDownComponent *probability;
public:

	/**
	 * @fn	Components::Components(float xPos, float yPos, std::wstring sizeTitle, int sizeStart, std::wstring fpsTitle, int fpsStart, std::wstring infectionTimeTitle, int infectionTimeStart, std::wstring protectionTimeTitle, int protectionTimeStart, std::wstring probabilityTitle, int probabilityStart);
	 *
	 * @brief	Konstruktor
	 *
	 * @author	Kamil Ulaszek
	 *
	 * @param	xPos			   	Pozycja X pierwszego komponentu, na podstawie kt�rej rozmieszczana jest reszta.
	 * @param	yPos			   	Pozycja Y pierwszego komponentu, na podstawie kt�rej rozmieszczana jest reszta.
	 * @param	sizeTitle		   	Napis do wy�wietlenia przy komponencie rozmiaru.
	 * @param	sizeStart		   	Warto�� pocz�tkowa rozmiaru.
	 * @param	fpsTitle		   	Napis do wy�wietlenia przy komponencie fps.
	 * @param	fpsStart		   	Warto�� pocz�tkowa fps.
	 * @param	infectionTimeTitle 	Napis do wy�wietlenia przy komponencie czasu infekowania.
	 * @param	infectionTimeStart 	Warto�� pocz�tkowa czasu infekowania.
	 * @param	protectionTimeTitle	Napis do wy�wietlenia przy komponencie czasu odporno�ci.
	 * @param	protectionTimeStart	Warto�� pocz�tkowa czasu odporno�ci.
	 * @param	probabilityTitle   	Napis do wy�wietlenia przy komponencie prawdopodobie�stwa.
	 * @param	probabilityStart   	Warto�� pocz�tkowa prawdopodobie�stwa.
	 */

	Components(float xPos, float yPos,
		std::wstring sizeTitle, int sizeStart,
		std::wstring fpsTitle, int fpsStart,
		std::wstring infectionTimeTitle, int infectionTimeStart,
		std::wstring protectionTimeTitle, int protectionTimeStart,
		std::wstring probabilityTitle, int probabilityStart);

	/**
	 * @fn	Components::~Components();
	 *
	 * @brief	Destruktor.
	 *
	 * @author	Kamil Ulaszek
	 */

	~Components();

	/**
	 * @fn	void Components::drawComponents(sf::RenderWindow *window);
	 *
	 * @brief	Rysuje komponenty.
	 *
	 * @author	Kamil Ulaszek
	 *
	 * @param [in,out]	window	Okno do rysowania komponent�w.
	 */

	void drawComponents(sf::RenderWindow *window);

	/**
	 * @fn	SizeComponent* Components::getSize();
	 *
	 * @brief	Zwraca komponent rozmiaru.
	 *
	 * @author	Kamil Ulaszek
	 *
	 * @return	Wska�nik do komponentu rozmiaru.
	 */

	SizeComponent* getSize();

	/**
	 * @fn	UpAndDownComponent* Components::getFps();
	 *
	 * @brief	Zwraca komponent FPS.
	 *
	 * @author	Kamil Ulaszek
	 *
	 * @return	Wska�nik do komponentu FPS.
	 */

	UpAndDownComponent* getFps();

	/**
	 * @fn	UpAndDownComponent* Components::getInfectionTime();
	 *
	 * @brief	Zwraca komponent czasu infekowania.
	 *
	 * @author	Kamil Ulaszek
	 *
	 * @return	Wska�nik do komponentu czasu infekowania.
	 */

	UpAndDownComponent* getInfectionTime();

	/**
	 * @fn	UpAndDownComponent* Components::getProtectionTime();
	 *
	 * @brief	Zwraca komponent czasu odporno�ci.
	 *
	 * @author	Kamil Ulaszek
	 *
	 * @return	Wska�nik do komponentu czasu odporno�ci.
	 */

	UpAndDownComponent* getProtectionTime();

	/**
	 * @fn	UpAndDownComponent* Components::getProbability();
	 *
	 * @brief	Zwraca komponent prawdopodobie�stwa.
	 *
	 * @author	Kamil Ulaszek
	 *
	 * @return	Wska�nik do komponentu prawdopodobie�stwa.
	 */

	UpAndDownComponent* getProbability();

};