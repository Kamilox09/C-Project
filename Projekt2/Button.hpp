#pragma once
#include <SFML/Graphics.hpp>
#include "ButtonsStates.hpp"

/**
 * @class	Button
 *
 * @brief	Klasa abstrakcyjna opisuj�ca Button.
 *
 * @author	Kamil Ulaszek
 * @date	2018-01-19
 */

class Button {
protected:
	/** @brief	Sprite przycisku */
	sf::Sprite buttonSprite;
	/** @brief	Tekstura wci�ni�tego przycisku */
	sf::Texture pressed;
	/** @brief	Tekstura niewci�ni�tego przycisku */
	sf::Texture unpressed;
public:

	/**
	 * @fn	bool Button::isClicked(sf::RenderWindow *window, sf::Event *event);
	 *
	 * @brief	Sprawdza czy przycisk zosta� wci�ni�ty.
	 *
	 * @author	Kamil Ulaszek
	 *
	 * @param [in,out]	window	Przekazuje okno do sprawdzenia pozycji klikni�cia.
	 * @param [in,out]	event 	Przekazuje zdarzenie.
	 *
	 * @return	Zwraca true je�li przycisk zosta� wci�ni�ty, w przeciwnym wypadku zwraca false.
	 */

	bool isClicked(sf::RenderWindow *window, sf::Event *event);

	/**
	 * @fn	virtual void Button::onClick(sf::RenderWindow *window, sf::Event *event, ButtonsStates *buttonsStates) = 0;
	 *
	 * @brief	Czysto wirtualna metoda, kt�ra wykonuje okre�lone akcje po klikni�ciu odpowiedniego przycisku.
	 *
	 * @author	Kamil Ulaszek
	 *
	 * @param [in,out]	window		 	Przekazuje okno do sprawdzenia czy przycisk zosta� klikni�ty.
	 * @param [in,out]	event		 	Przekazuje zdarzenie do sprawdzenia czy przycisk zosta� klikni�ty.
	 * @param [in,out]	buttonsStates	Zmienia status przycisk�w po klikni�ciu.
	 */

	virtual void onClick(sf::RenderWindow *window, sf::Event *event, ButtonsStates *buttonsStates) = 0;

	/**
	 * @fn	virtual void Button::loadTextures() = 0;
	 *
	 * @brief	�aduje tekstury.
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
	 * @param [in,out]	buttonsStates	Przekazuje statusy przycisk�w do sprawdzenia i zaktualizowania tekstur.
	 */

	virtual void checkTexture(ButtonsStates *buttonsStates) = 0;
};