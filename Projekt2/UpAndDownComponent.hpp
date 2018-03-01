#pragma once
#include <SFML/Graphics.hpp>
#include <string.h>

/**
 * @class	UpAndDownComponent
 *
 * @brief	Komponent sterowania poszczególnymi opcjami symulacji.
 *
 * @author	Kamil Ulaszek
 * @date	2018-01-19
 */

class UpAndDownComponent {
private:

	/**
	 * @class	SizeComponent
	 *
	 * @brief	Udostêpnienie metod i pól prywatnych klasie SizeComponent.
	 *
	 * @author	Kamil Ulaszek
	 */

	friend class SizeComponent;
	/** @brief	Napis obok komponentu. */
	sf::Text title;
	/** @brief	Wartoœæ pocz¹tkowa w formie napisu. */
	sf::Text valueInStr;
	/** @brief	Up sprite. */
	sf::Sprite up;
	/** @brief	Down sprite. */
	sf::Sprite down;
	/** @brief	Aktualna wartoœæ komponentu. */
	int value;
	/** @brief	Tekstura up. */
	sf::Texture upTexture;
	/** @brief	Tekstura down. */
	sf::Texture downTexture;
	/** @brief	Czcionka napisów. */
	sf::Font font;

	/**
	 * @fn	void UpAndDownComponent::onClickUp();
	 *
	 * @brief	Wykonuje okreœlone zdarzenie po klikniêciu przycisku w górê.
	 *
	 * @author	Kamil Ulaszek
	 */

	void onClickUp();

	/**
	 * @fn	void UpAndDownComponent::onClickDown();
	 *
	 * @brief	Wykonuje okreœlone zdarzenie po klikniêciu przycisku w dó³.
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
	 * @param	startValue	Wartoœæ pocz¹tkowa.
	 * @param	xPos	  	Pozycja X.
	 * @param	yPos	  	Pozycja Y.
	 */

	UpAndDownComponent(std::wstring title, int startValue, float xPos, float yPos);

	/**
	 * @fn	UpAndDownComponent::UpAndDownComponent();
	 *
	 * @brief	Konstruktor domyœlny.
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
	 * @brief	Sprawdza czy up zosta³ klikniêty.
	 *
	 * @author	Kamil Ulaszek
	 *
	 * @param [in,out]	window	Przekazuje okno.
	 * @param [in,out]	event 	Przekazuje zdarzenie.
	 *
	 * @return	Zwraca true jeœli przycisk zosta³ wciœniêty, w przeciwnym wypadku zwraca false.
	 */

	bool isUpClicked(sf::RenderWindow* window, sf::Event* event);

	/**
	 * @fn	bool UpAndDownComponent::isDownClicked(sf::RenderWindow* window, sf::Event* event);
	 *
	 * @brief	Sprawdza czy down zosta³ klikniêty.
	 *
	 * @author	Kamil Ulaszek
	 *
	 * @param [in,out]	window	Przekazuje okno.
	 * @param [in,out]	event 	Przekazuje zdarzenie.
	 *
	 * @return	Zwraca true jeœli przycisk zosta³ wciœniêty, w przeciwnym wypadku zwraca false.
	 */

	bool isDownClicked(sf::RenderWindow* window, sf::Event* event);

	/**
	 * @fn	void UpAndDownComponent::onClick(sf::RenderWindow* window, sf::Event* event);
	 *
	 * @brief	Wykonuje okreœlone akcje zdarzenia po klikniêciu.
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
	 * @brief	Zwraca wartoœæ komponentu.
	 *
	 * @author	Kamil Ulaszek
	 *
	 * @return	Wartoœc komponentu.
	 */

	int getValue();
};