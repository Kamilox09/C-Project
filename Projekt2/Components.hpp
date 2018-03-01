#pragma once
#include "UpAndDownComponent.hpp"
#include "SizeComponent.hpp"

/**
 * @class	Components
 *
 * @brief	Komponenty do sterowania symulacj¹.
 *
 * @author	Kamil Ulaszek
 * @date	2018-01-19
 */

class Components {
private:
	/** @brief	Komponent do sterowania rozmiarem. */
	SizeComponent *size;
	/** @brief	Komponent do sterowania liczb¹ fps. */
	UpAndDownComponent *fps;
	/** @brief	Komponent do sterowania czasem infekowania. */
	UpAndDownComponent *infectionTime;
	/** @brief	Komponent do sterowania czasem odpornoœci. */
	UpAndDownComponent *protectionTime;
	/** @brief	Komponent do sterowania prawdopodobieñstwem. */
	UpAndDownComponent *probability;
public:

	/**
	 * @fn	Components::Components(float xPos, float yPos, std::wstring sizeTitle, int sizeStart, std::wstring fpsTitle, int fpsStart, std::wstring infectionTimeTitle, int infectionTimeStart, std::wstring protectionTimeTitle, int protectionTimeStart, std::wstring probabilityTitle, int probabilityStart);
	 *
	 * @brief	Konstruktor
	 *
	 * @author	Kamil Ulaszek
	 *
	 * @param	xPos			   	Pozycja X pierwszego komponentu, na podstawie której rozmieszczana jest reszta.
	 * @param	yPos			   	Pozycja Y pierwszego komponentu, na podstawie której rozmieszczana jest reszta.
	 * @param	sizeTitle		   	Napis do wyœwietlenia przy komponencie rozmiaru.
	 * @param	sizeStart		   	Wartoœæ pocz¹tkowa rozmiaru.
	 * @param	fpsTitle		   	Napis do wyœwietlenia przy komponencie fps.
	 * @param	fpsStart		   	Wartoœæ pocz¹tkowa fps.
	 * @param	infectionTimeTitle 	Napis do wyœwietlenia przy komponencie czasu infekowania.
	 * @param	infectionTimeStart 	Wartoœæ pocz¹tkowa czasu infekowania.
	 * @param	protectionTimeTitle	Napis do wyœwietlenia przy komponencie czasu odpornoœci.
	 * @param	protectionTimeStart	Wartoœæ pocz¹tkowa czasu odpornoœci.
	 * @param	probabilityTitle   	Napis do wyœwietlenia przy komponencie prawdopodobieñstwa.
	 * @param	probabilityStart   	Wartoœæ pocz¹tkowa prawdopodobieñstwa.
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
	 * @param [in,out]	window	Okno do rysowania komponentów.
	 */

	void drawComponents(sf::RenderWindow *window);

	/**
	 * @fn	SizeComponent* Components::getSize();
	 *
	 * @brief	Zwraca komponent rozmiaru.
	 *
	 * @author	Kamil Ulaszek
	 *
	 * @return	WskaŸnik do komponentu rozmiaru.
	 */

	SizeComponent* getSize();

	/**
	 * @fn	UpAndDownComponent* Components::getFps();
	 *
	 * @brief	Zwraca komponent FPS.
	 *
	 * @author	Kamil Ulaszek
	 *
	 * @return	WskaŸnik do komponentu FPS.
	 */

	UpAndDownComponent* getFps();

	/**
	 * @fn	UpAndDownComponent* Components::getInfectionTime();
	 *
	 * @brief	Zwraca komponent czasu infekowania.
	 *
	 * @author	Kamil Ulaszek
	 *
	 * @return	WskaŸnik do komponentu czasu infekowania.
	 */

	UpAndDownComponent* getInfectionTime();

	/**
	 * @fn	UpAndDownComponent* Components::getProtectionTime();
	 *
	 * @brief	Zwraca komponent czasu odpornoœci.
	 *
	 * @author	Kamil Ulaszek
	 *
	 * @return	WskaŸnik do komponentu czasu odpornoœci.
	 */

	UpAndDownComponent* getProtectionTime();

	/**
	 * @fn	UpAndDownComponent* Components::getProbability();
	 *
	 * @brief	Zwraca komponent prawdopodobieñstwa.
	 *
	 * @author	Kamil Ulaszek
	 *
	 * @return	WskaŸnik do komponentu prawdopodobieñstwa.
	 */

	UpAndDownComponent* getProbability();

};