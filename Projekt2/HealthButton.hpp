#pragma once
#include "Button.hpp"

/**
 * @class	HealthButton
 *
 * @brief	Klasa przycisku dla koloru zdrowej komórki.
 *
 * @author	Kamil Ulaszek
 * @date	2018-01-19
 */

class HealthButton : public Button {

public:

	/**
	 * @fn	void HealthButton::onClick(sf::RenderWindow *window, sf::Event *event, ButtonsStates *buttonsStates);
	 *
	 * @brief	Wykonuje okreœlone zdarzenie po klikniêciu.
	 *
	 * @author	Kamil Ulaszek
	 *
	 * @param [in,out]	window		 	Przekazuje okno.
	 * @param [in,out]	event		 	Przekazuje zdarzenie.
	 * @param [in,out]	buttonsStates	Przekazuje statusy przycisków do aktualizacji.
	 */

	void onClick(sf::RenderWindow *window, sf::Event *event, ButtonsStates *buttonsStates);

	/**
	 * @fn	HealthButton::HealthButton(float xPos, float yPos);
	 *
	 * @brief	Konstruktor.
	 *
	 * @author	Kamil Ulaszek
	 *
	 * @param	xPos	Pozycja X.
	 * @param	yPos	Pozycja Y.
	 */

	HealthButton(float xPos, float yPos);

	/**
	 * @fn	void HealthButton::loadTextures();
	 *
	 * @brief	£aduje tekstury.
	 *
	 * @author	Kamil Ulaszek
	 */

	void loadTextures();

	/**
	 * @fn	void HealthButton::checkTexture(ButtonsStates *buttonsStates);
	 *
	 * @brief	Aktualizuje tekstury.
	 *
	 * @author	Kamil Ulaszek
	 *
	 * @param [in,out]	buttonsStates	Statusy przycisków do aktualizacji.
	 */

	void checkTexture(ButtonsStates *buttonsStates);
};