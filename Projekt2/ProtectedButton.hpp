#pragma once
#include "Button.hpp"

/**
 * @class	ProtectedButton
 *
 * @brief	Klasa przycisku dla koloru odpornej kom�rki.
 *
 * @author	Kamil Ulaszek
 * @date	2018-01-19
 */

class ProtectedButton : public Button {
	
public:

	/**
	 * @fn	void ProtectedButton::onClick(sf::RenderWindow *window, sf::Event *event, ButtonsStates *buttonsStates);
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
	 * @fn	ProtectedButton::ProtectedButton(float xPos, float yPos);
	 *
	 * @brief	Konstruktor.
	 *
	 * @author	Kamil Ulaszek
	 *
	 * @param	xPos	Pozycja X.
	 * @param	yPos	Pozycja Y.
	 */

	ProtectedButton(float xPos, float yPos);

	/**
	 * @fn	void ProtectedButton::loadTextures();
	 *
	 * @brief	�aduje tekstury.
	 *
	 * @author	Kamil Ulaszek
	 */

	void loadTextures();

	/**
	 * @fn	void ProtectedButton::checkTexture(ButtonsStates *buttonsStates);
	 *
	 * @brief	Aktualizuje tekstury.
	 *
	 * @author	Kamil Ulaszek
	 *
	 * @param [in,out]	buttonsStates	Statusy przycisk�w do aktualizacji.
	 */

	void checkTexture(ButtonsStates *buttonsStates);
};