#pragma once
#include <vector>
#include <SFML/Graphics.hpp>

/**
 * @class	ColorCreator
 *
 * @brief	Klasa, w której tworzony jest wektor kolorów.
 *
 * @author	Kamil Ulaszek
 * @date	2018-01-19
 */

class ColorCreator {
public:

	/**
	 * @fn	std::vector<sf::Color> ColorCreator::createColorVect(sf::Color from, sf::Color to, int amount);
	 *
	 * @brief	Tworzy wektor kolorów.
	 *
	 * @author	Kamil Ulaszek
	 *
	 * @param	from  	Kolor, od którego zaczyna siê tworzyæ wektor kolorów.
	 * @param	to	  	Kolor, do którego zmierza tworzony wektor kolorów.
	 * @param	amount	Liczba kolorów pomiêdzy jednym kolorem a drugim.
	 *
	 * @return	Zwraca wektor kolorów.
	 */

	std::vector<sf::Color> createColorVect(sf::Color from, sf::Color to, int amount);
};