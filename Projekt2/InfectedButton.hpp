#pragma once
#include "Button.hpp"

/**
 * @class	InfectedButton
 *
 * @brief	Klasa przycisku dla koloru infekuj�cej kom�rki.
 *
 * @author	Kamil Ulaszek
 * @date	2018-01-19
 */

class InfectedButton : public Button {

public:

	/**
	 * @fn	void InfectedButton::onClick(sf::RenderWindow *window, sf::Event *event, ButtonsStates *buttonsStates);
	 *
	 * @brief	Wykonuje okre�lone zdarzenie po klikni�ciu.
	 *
	 * @author	Kamil Ulaszek
	 *
	 * @param [in,out]	window		 	Przekazuje okno.
	 * @param [in,out]	event		 	Przekazuje zdarzenie.
	 * @param [in,out]	buttonsStates	Przekazuje statusy przycisk�w do aktualizacji.
	 */

	void onClick(sf::RenderWindow *window, sf::Event *event, ButtonsStates *buttonsStates);

	/**
	 * @fn	InfectedButton::InfectedButton(float xPos, float yPos);
	 *
	 * @brief	Konstruktor.
	 *
	 * @author	Kamil Ulaszek
	 *
	 * @param	xPos	Pozycja X.
	 * @param	yPos	Pozycja Y.
	 */

	InfectedButton(float xPos, float yPos);

	/**
	 * @fn	void InfectedButton::loadTextures();
	 *
	 * @brief	�aduje tekstury.
	 *
	 * @author	Kamil Ulaszek
	 */

	void loadTextures();

	/**
	 * @fn	void InfectedButton::checkTexture(ButtonsStates *buttonsStates);
	 *
	 * @brief	Aktualizuje tekstury.
	 *
	 * @author	Kamil Ulaszek
	 *
	 * @param [in,out]	buttonsStates	Statusy przycisk�w do aktualizacji.
	 */

	void checkTexture(ButtonsStates *buttonsStates);
};