#pragma once

/**
 * @class	ButtonsStates
 *
 * @brief	Statusy przycisków.
 *
 * @author	Kamil Ulaszek
 * @date	2018-01-19
 */

class ButtonsStates {
private:
	/** @brief	Status przycisku kontroluj¹cego kolor zdrowej komórki. */
	bool healthyState;
	/** @brief	Status przycisku kontroluj¹cego kolor infekuj¹cej komórki. */
	bool infectedState;
	/** @brief	Status przycisku kontroluj¹cego kolor odpornej komórki. */
	bool protectedState;
public:

	/**
	 * @fn	bool ButtonsStates::getHealthyState();
	 *
	 * @brief	Zwraca status przycisku kontroluj¹cego kolor zdrowej komórki.
	 *
	 * @author	Kamil Ulaszek
	 *
	 * @return	Status przycisku.
	 */

	bool getHealthyState();

	/**
	 * @fn	bool ButtonsStates::getInfectedState();
	 *
	 * @brief	Zwraca status przycisku kontroluj¹cego kolor infekuj¹cej komórki.
	 *
	 * @author	Kamil Ulaszek
	 *
	 * @return	Status przycisku.
	 */

	bool getInfectedState();

	/**
	 * @fn	bool ButtonsStates::getProtectedState();
	 *
	 * @brief	Zwraca status przycisku kontroluj¹cego kolor odpornej komórki.
	 *
	 * @author	Kamil Ulaszek
	 *
	 * @return	Status przycisku.
	 */

	bool getProtectedState();

	/**
	 * @fn	void ButtonsStates::setHealthyState(bool healthyState);
	 *
	 * @brief	Ustawia status przycisku kontroluj¹cego kolor zdrowej komórki.
	 *
	 * @author	Kamil Ulaszek
	 *
	 * @param	healthyState	Status do ustawienia.
	 */

	void setHealthyState(bool healthyState);

	/**
	 * @fn	void ButtonsStates::setInfectedState(bool infectedState);
	 *
	 * @brief	Ustawia status przycisku kontroluj¹cego kolor infekuj¹cej komórki.
	 *
	 * @author	Kamil Ulaszek
	 *
	 * @param	infectedState	Status do ustawienia.
	 */

	void setInfectedState(bool infectedState);

	/**
	 * @fn	void ButtonsStates::setProtectedState(bool protectedState);
	 *
	 * @brief	Ustawia status przycisku kontroluj¹cego kolor odpornej komórki.
	 *
	 * @author	Kamil Ulaszek
	 *
	 * @param	protectedState	Status do ustawienia.
	 */

	void setProtectedState(bool protectedState);

	/**
	 * @fn	ButtonsStates::ButtonsStates();
	 *
	 * @brief	Konstruktor
	 *
	 * @author	Kamil Ulaszek
	 */

	ButtonsStates();

};