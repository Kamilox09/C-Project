#pragma once
#include <SFML/Graphics.hpp>
#include <string.h>

/**
 * @class	UpAndDownComponent
 *
 * @brief	Komponent sterowania poszczeg�lnymi opcjami symulacji.
 *
 * @author	Kamil Ulaszek
 * @date	2018-01-19
 */

class UpAndDownComponent {
private:

	/**
	 * @class	SizeComponent
	 *
	 * @brief	Udost�pnienie metod i p�l prywatnych klasie SizeComponent.
	 *
	 * @author	Kamil Ulaszek
	 */

	friend class SizeComponent;
	/** @brief	Napis obok komponentu. */
	sf::Text title;
	/** @brief	Warto�� pocz�tkowa w formie napisu. */
	sf::Text valueInStr;
	/** @brief	Up sprite. */
	sf::Sprite up;
	/** @brief	Down sprite. */
	sf::Sprite down;
	/** @brief	Aktualna warto�� komponentu. */
	int value;
	/** @brief	Tekstura up. */
	sf::Texture upTexture;
	/** @brief	Tekstura down. */
	sf::Texture downTexture;
	/** @brief	Czcionka napis�w. */
	sf::Font font;

	/**
	 * @fn	void UpAndDownComponent::onClickUp();
	 *
	 * @brief	Wykonuje okre�lone zdarzenie po klikni�ciu przycisku w g�r�.
	 *
	 * @author	Kamil Ulaszek
	 */

	void onClickUp();

	/**
	 * @fn	void UpAndDownComponent::onClickDown();
	 *
	 * @brief	Wykonuje okre�lone zdarzenie po klikni�ciu przycisku w d�.
	 *
	 * @author	Kamil Ulaszek
	 */

	void onClickDown();
public:

	/**
	 * @fn	UpAndDownComponent::UpAndDownComponent(std::wstring title, int startValue, float xPos, float yPos);
	 *
	 * @brief	Konstruktor.
	 *
	 * @author	Kamil Ulaszek
	 *
	 * @param	title	  	Napis obok komponentu.
	 * @param	startValue	Warto�� pocz�tkowa.
	 * @param	xPos	  	Pozycja X.
	 * @param	yPos	  	Pozycja Y.
	 */

	UpAndDownComponent(std::wstring title, int startValue, float xPos, float yPos);

	/**
	 * @fn	UpAndDownComponent::UpAndDownComponent();
	 *
	 * @brief	Konstruktor domy�lny.
	 *
	 * @author	Kamil Ulaszek
	 */

	UpAndDownComponent();

	/**
	 * @fn	void UpAndDownComponent::drawComponent(sf::RenderWindow* window);
	 *
	 * @brief	Rysuje komponent.
	 *
	 * @author	Kamil Ulaszek
	 *
	 * @param [in,out]	window	Przekazuje okno.
	 */

	void drawComponent(sf::RenderWindow* window);

	/**
	 * @fn	bool UpAndDownComponent::isUpClicked(sf::RenderWindow* window, sf::Event* event);
	 *
	 * @brief	Sprawdza czy up zosta� klikni�ty.
	 *
	 * @author	Kamil Ulaszek
	 *
	 * @param [in,out]	window	Przekazuje okno.
	 * @param [in,out]	event 	Przekazuje zdarzenie.
	 *
	 * @return	Zwraca true je�li przycisk zosta� wci�ni�ty, w przeciwnym wypadku zwraca false.
	 */

	bool isUpClicked(sf::RenderWindow* window, sf::Event* event);

	/**
	 * @fn	bool UpAndDownComponent::isDownClicked(sf::RenderWindow* window, sf::Event* event);
	 *
	 * @brief	Sprawdza czy down zosta� klikni�ty.
	 *
	 * @author	Kamil Ulaszek
	 *
	 * @param [in,out]	window	Przekazuje okno.
	 * @param [in,out]	event 	Przekazuje zdarzenie.
	 *
	 * @return	Zwraca true je�li przycisk zosta� wci�ni�ty, w przeciwnym wypadku zwraca false.
	 */

	bool isDownClicked(sf::RenderWindow* window, sf::Event* event);

	/**
	 * @fn	void UpAndDownComponent::onClick(sf::RenderWindow* window, sf::Event* event);
	 *
	 * @brief	Wykonuje okre�lone akcje zdarzenia po klikni�ciu.
	 *
	 * @author	Kamil Ulaszek
	 *
	 * @param [in,out]	window	If non-null, the window.
	 * @param [in,out]	event 	If non-null, the event.
	 */

	void onClick(sf::RenderWindow* window, sf::Event* event);

	/**
	 * @fn	int UpAndDownComponent::getValue();
	 *
	 * @brief	Zwraca warto�� komponentu.
	 *
	 * @author	Kamil Ulaszek
	 *
	 * @return	Warto�c komponentu.
	 */

	int getValue();
};