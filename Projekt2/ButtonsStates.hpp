#pragma once

/**
 * @class	ButtonsStates
 *
 * @brief	Statusy przycisk�w.
 *
 * @author	Kamil Ulaszek
 * @date	2018-01-19
 */

class ButtonsStates {
private:
	/** @brief	Status przycisku kontroluj�cego kolor zdrowej kom�rki. */
	bool healthyState;
	/** @brief	Status przycisku kontroluj�cego kolor infekuj�cej kom�rki. */
	bool infectedState;
	/** @brief	Status przycisku kontroluj�cego kolor odpornej kom�rki. */
	bool protectedState;
public:

	/**
	 * @fn	bool ButtonsStates::getHealthyState();
	 *
	 * @brief	Zwraca status przycisku kontroluj�cego kolor zdrowej kom�rki.
	 *
	 * @author	Kamil Ulaszek
	 *
	 * @return	Status przycisku.
	 */

	bool getHealthyState();

	/**
	 * @fn	bool ButtonsStates::getInfectedState();
	 *
	 * @brief	Zwraca status przycisku kontroluj�cego kolor infekuj�cej kom�rki.
	 *
	 * @author	Kamil Ulaszek
	 *
	 * @return	Status przycisku.
	 */

	bool getInfectedState();

	/**
	 * @fn	bool ButtonsStates::getProtectedState();
	 *
	 * @brief	Zwraca status przycisku kontroluj�cego kolor odpornej kom�rki.
	 *
	 * @author	Kamil Ulaszek
	 *
	 * @return	Status przycisku.
	 */

	bool getProtectedState();

	/**
	 * @fn	void ButtonsStates::setHealthyState(bool healthyState);
	 *
	 * @brief	Ustawia status przycisku kontroluj�cego kolor zdrowej kom�rki.
	 *
	 * @author	Kamil Ulaszek
	 *
	 * @param	healthyState	Status do ustawienia.
	 */

	void setHealthyState(bool healthyState);

	/**
	 * @fn	void ButtonsStates::setInfectedState(bool infectedState);
	 *
	 * @brief	Ustawia status przycisku kontroluj�cego kolor infekuj�cej kom�rki.
	 *
	 * @author	Kamil Ulaszek
	 *
	 * @param	infectedState	Status do ustawienia.
	 */

	void setInfectedState(bool infectedState);

	/**
	 * @fn	void ButtonsStates::setProtectedState(bool protectedState);
	 *
	 * @brief	Ustawia status przycisku kontroluj�cego kolor odpornej kom�rki.
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