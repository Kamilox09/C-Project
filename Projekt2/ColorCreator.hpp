#pragma once
#include <vector>
#include <SFML/Graphics.hpp>

/**
 * @class	ColorCreator
 *
 * @brief	Klasa, w kt�rej tworzony jest wektor kolor�w.
 *
 * @author	Kamil Ulaszek
 * @date	2018-01-19
 */

class ColorCreator {
public:

	/**
	 * @fn	std::vector<sf::Color> ColorCreator::createColorVect(sf::Color from, sf::Color to, int amount);
	 *
	 * @brief	Tworzy wektor kolor�w.
	 *
	 * @author	Kamil Ulaszek
	 *
	 * @param	from  	Kolor, od kt�rego zaczyna si� tworzy� wektor kolor�w.
	 * @param	to	  	Kolor, do kt�rego zmierza tworzony wektor kolor�w.
	 * @param	amount	Liczba kolor�w pomi�dzy jednym kolorem a drugim.
	 *
	 * @return	Zwraca wektor kolor�w.
	 */

	std::vector<sf::Color> createColorVect(sf::Color from, sf::Color to, int amount);
};