#pragma once
#include "UpAndDownComponent.hpp"
#include "Table.hpp"

/**
 * @class	SizeComponent
 *
 * @brief	Klasa komponentu rozmiaru.
 *
 * @author	Kamil Ulaszek
 * @date	2018-01-19
 */

class SizeComponent : public UpAndDownComponent {
private:

	/**
	 * @fn	void SizeComponent::onClickDown();
	 *
	 * @brief	Wykonuje okre�lone zdarzenie po klikni�ciu przycisku w d�.
	 *
	 * @author	Kamil Ulaszek
	 */

	void onClickDown();
public:

	/**
	 * @fn	void SizeComponent::onClick(sf::Event* event, sf::RenderWindow* window);
	 *
	 * @brief	Wykonuje okre�lone zdarzenie po klikni�ciu.
	 *
	 * @author	Kamil Ulaszek
	 *
	 * @param [in,out]	event 	Przekazuje zdarzenie.
	 * @param [in,out]	window	Przekazuje okno.
	 */

	void onClick(sf::Event* event, sf::RenderWindow* window);

	/**
	 * @fn	SizeComponent::SizeComponent(std::wstring title, int startValue, float xPos, float yPos);
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

	SizeComponent(std::wstring title, int startValue, float xPos, float yPos);
	
};