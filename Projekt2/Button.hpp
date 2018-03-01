#pragma once
#include <SFML/Graphics.hpp>
#include "ButtonsStates.hpp"

/**
 * @class	Button
 *
 * @brief	Klasa abstrakcyjna opisuj¹ca Button.
 *
 * @author	Kamil Ulaszek
 * @date	2018-01-19
 */

class Button {
protected:
	/** @brief	Sprite przycisku */
	sf::Sprite buttonSprite;
	/** @brief	Tekstura wciœniêtego przycisku */
	sf::Texture pressed;
	/** @brief	Tekstura niewciœniêtego przycisku */
	sf::Texture unpressed;
public:

	/**
	 * @fn	bool Button::isClicked(sf::RenderWindow *window, sf::Event *event);
	 *
	 * @brief	Sprawdza czy przycisk zosta³ wciœniêty.
	 *
	 * @author	Kamil Ulaszek
	 *
	 * @param [in,out]	window	Przekazuje okno do sprawdzenia pozycji klikniêcia.
	 * @param [in,out]	event 	Przekazuje zdarzenie.
	 *
	 * @return	Zwraca true jeœli przycisk zosta³ wciœniêty, w przeciwnym wypadku zwraca false.
	 */

	bool isClicked(sf::RenderWindow *window, sf::Event *event);

	/**
	 * @fn	virtual void Button::onClick(sf::RenderWindow *window, sf::Event *event, ButtonsStates *buttonsStates) = 0;
	 *
	 * @brief	Czysto wirtualna metoda, która wykonuje okreœlone akcje po klikniêciu odpowiedniego przycisku.
	 *
	 * @author	Kamil Ulaszek
	 *
	 * @param [in,out]	window		 	Przekazuje okno do sprawdzenia czy przycisk zosta³ klikniêty.
	 * @param [in,out]	event		 	Przekazuje zdarzenie do sprawdzenia czy przycisk zosta³ klikniêty.
	 * @param [in,out]	buttonsStates	Zmienia status przycisków po klikniêciu.
	 */

	virtual void onClick(sf::RenderWindow *window, sf::Event *event, ButtonsStates *buttonsStates) = 0;

	/**
	 * @fn	virtual void Button::loadTextures() = 0;
	 *
	 * @brief	£aduje tekstury.
	 *
	 * @author	Kamil Ulaszek
	 */

	virtual void loadTextures() = 0;

	/**
	 * @fn	void Button::drawSprite(sf::RenderWindow * window);
	 *
	 * @brief	Rysuje sprite.
	 *
	 * @author	Kamil Ulaszek
	 *
	 * @param [in,out]	window	Przekazuje okno do rysowania sprite.
	 */

	void drawSprite(sf::RenderWindow * window);

	/**
	 * @fn	virtual void Button::checkTexture(ButtonsStates *buttonsStates) = 0;
	 *
	 * @brief	Sprawdza i uaktualnia tekstury.
	 *
	 * @author	Kamil Ulaszek
	 *
	 * @param [in,out]	buttonsStates	Przekazuje statusy przycisków do sprawdzenia i zaktualizowania tekstur.
	 */

	virtual void checkTexture(ButtonsStates *buttonsStates) = 0;
};