#pragma once
#include <SFML/Graphics.hpp>
#include "Table.hpp"
#include "Components.hpp"
#include "HealthButton.hpp"
#include <iostream>
#include "InfectedButton.hpp"
#include "ProtectedButton.hpp"
#include "ButtonsStates.hpp"
#include "ColorCreator.hpp"

/**
 * @class	GUI
 *
 * @brief	Klasa odpowiedzialna za graficzny aspekt programu.
 *
 * @author	Kamil Ulaszek
 * @date	2018-01-19
 */

class GUI {
private:
	/** @brief	G��wne okno programu. */
	sf::RenderWindow window;
	/** @brief	Prostok�t wok� planszy symulacyjnej. */
	sf::RectangleShape square;
	/** @brief	Tablica symulacyjna */
	sf::RectangleShape** squaresTable;
	/** @brief	Rozmiar tablicy symulacyjnej. */
	int size;
	/** @brief	Rozmiar X pojedynczej kom�rki. */
	float sizeOfSquareX;
	/** @brief	Rozmiar Y pojedynczej kom�rki. */
	float sizeOfSquareY;
	/** @brief	Komponenty sterowania symulacj�. */
	Components* components;
	/** @brief	Napis wy�wietlany przy komponencie zarz�dzania kolorami. */
	sf::Text colorTitle;
	/** @brief	Czcionka napis�w. */
	sf::Font font;
	/** @brief	Przycisk do zmiany koloru zdrowej kom�rki. */
	HealthButton * healthButton;
	/** @brief	Przycisk do zmiany koloru infekuj�cej kom�rki. */
	InfectedButton * infectedButton;
	/** @brief	Przycisk do zmiany koloru odpornej kom�rki. */
	ProtectedButton * protectedButton;
	/** @brief	Statusy przycisk�w zarz�dzania kolorami. */
	ButtonsStates buttonsStates;
	/** @brief	Kolor zdrowej kom�rki. */
	sf::Color healthColor;
	/** @brief	Kolor infekuj�cej kom�rki. */
	sf::Color infectedColor;
	/** @brief	Kolor odpornej kom�rki. */
	sf::Color protectedColor;
	/** @brief	Gradient kolor�w potrzebny do ich zmiany. */
	sf::Image gradient;
	/** @brief	Sprite gradientu kolor�w. */
	sf::Sprite gradientSprite;
	/** @brief	Tekstura gradientu kolor�w. */
	sf::Texture gradientTexture;

	/**
	 * @fn	void GUI::colorManagment();
	 *
	 * @brief	Zarz�dzanie kolorami.
	 *
	 * @author	Kamil Ulaszek
	 */

	void colorManagment();
	/** @brief	Po�o�enie gradientu kolor�w. */
	sf::Vector2i colorPosVect;
	/** @brief	Czas infekowania. */
	int iTime;
	/** @brief	Czas chronienia. */
	int pTime;

	/**
	 * @fn	void GUI::setTimes(int iT, int pT);
	 *
	 * @brief	Aktualizuje czasy.
	 *
	 * @author	Kamil Ulaszek
	 *
	 * @param	iT	Czas infekowania.
	 * @param	pT	Czas chronienia.
	 */

	void setTimes(int iT, int pT);
	/** @brief	Vektor kolor�w mi�dzy infekuj�cym a odpornym. */
	std::vector<sf::Color> infToProt;
	/** @brief	Wektor kolor�w mi�dzy odpornym a zdrowym. */
	std::vector<sf::Color> protToHeal;
	/** @brief	Rozmiar X planszy symulacyjnej. */
	float squareSizesX = 250;
	/** @brief	Rozmiar Y planszy symulacyjnej. */
	float squareSizesY = 250;
public:

	/**
	 * @fn	GUI::GUI(int width, int heigh, sf::String tittle,int size);
	 *
	 * @brief	Konstruktor
	 *
	 * @author	Kamil Ulaszek
	 *
	 * @param	width 	Szeroko�� okna.
	 * @param	heigh 	Wysoko�� okna.
	 * @param	tittle	Tytu� okna.
	 * @param	size  	Rozmiar tablicy symulacyjnej.
	 */

	GUI(int width, int heigh, sf::String tittle,int size);

	/**
	 * @fn	GUI::~GUI();
	 *
	 * @brief	Destruktor
	 *
	 * @author	Kamil Ulaszek
	 */

	~GUI();

	/**
	 * @fn	sf::RenderWindow& GUI::getWindow();
	 *
	 * @brief	Zwraca okno
	 *
	 * @author	Kamil Ulaszek
	 *
	 * @return	Okno.
	 */

	sf::RenderWindow& getWindow();

	/**
	 * @fn	void GUI::setupComponents(float xPos, float yPos, std::wstring sizeTitle, int sizeStart, std::wstring fpsTitle, int fpsStart, std::wstring infectionTimeTitle, int infectionTimeStart, std::wstring protectionTimeTitle, int protectionTimeStart, std::wstring probabilityTitle, int probabilityStart);
	 *
	 * @brief	Inicjuje komponenty.
	 *
	 * @author	Kamil Ulaszek
	 *
	 * @param	xPos			   	Pozycja X pierwszego komponentu, na podstawie kt�rej rozmieszczana jest reszta.
	 * @param	yPos			   	Pozycja Y pierwszego komponentu, na podstawie kt�rej rozmieszczana jest reszta.
	 * @param	sizeTitle		   	Napis do wy�wietlenia przy komponencie rozmiaru.
	 * @param	sizeStart		   	Warto�� pocz�tkowa rozmiaru.
	 * @param	fpsTitle		   	Napis do wy�wietlenia przy komponencie fps.
	 * @param	fpsStart		   	Warto�� pocz�tkowa fps.
	 * @param	infectionTimeTitle 	Napis do wy�wietlenia przy komponencie czasu infekowania.
	 * @param	infectionTimeStart 	Warto�� pocz�tkowa czasu infekowania.
	 * @param	protectionTimeTitle	Napis do wy�wietlenia przy komponencie czasu odporno�ci.
	 * @param	protectionTimeStart	Warto�� pocz�tkowa czasu odporno�ci.
	 * @param	probabilityTitle   	Napis do wy�wietlenia przy komponencie prawdopodobie�stwa.
	 * @param	probabilityStart   	Warto�� pocz�tkowa prawdopodobie�stwa.
	 */

	void setupComponents(float xPos, float yPos,
		std::wstring sizeTitle, int sizeStart,
		std::wstring fpsTitle, int fpsStart,
		std::wstring infectionTimeTitle, int infectionTimeStart,
		std::wstring protectionTimeTitle, int protectionTimeStart,
		std::wstring probabilityTitle, int probabilityStart);

	/**
	 * @fn	void GUI::createSquare();
	 *
	 * @brief	Tworzy prostok�t wok� planszy symulacyjnej.
	 *
	 * @author	Kamil Ulaszek
	 */

	void createSquare();

	/**
	 * @fn	void GUI::changeSize(int n);
	 *
	 * @brief	Zmienia rozmiar tablicy symulacyjnej podczas dzia�ania programu.
	 *
	 * @author	Kamil Ulaszek
	 *
	 * @param	n	Nowy rozmiar.
	 */

	void changeSize(int n);

	/**
	 * @fn	void GUI::generateSquares();
	 *
	 * @brief	Generuje tablice symulacyjn�.
	 *
	 * @author	Kamil Ulaszek
	 */

	void generateSquares();

	/**
	 * @fn	void GUI::setPositionsOfSquares();
	 *
	 * @brief	Ustawia pozycje sk�adowych tablicy symulacyjnej.
	 *
	 * @author	Kamil Ulaszek
	 */

	void setPositionsOfSquares();

	/**
	 * @fn	void GUI::changeColours(Table* tab);
	 *
	 * @brief	Aktualizuje kolory planszy symulacyjnej.
	 *
	 * @author	Kamil Ulaszek
	 *
	 * @param [in,out]	tab	If Obiekt tablicy przechowuj�cy aktualne stany kom�rek.
	 */

	void changeColours(Table* tab);

	/**
	 * @fn	void GUI::onClickInfect(sf::Event* event,Table* table);
	 *
	 * @brief	Infekuje kom�rk�, na kt�r� si� klikn�o.
	 *
	 * @author	Kamil Ulaszek
	 *
	 * @param [in,out]	event	Przekazuje zdarzenie.
	 * @param [in,out]	table	Przekazuje obiekt tablicy do aktualizacji stanu kom�rek.
	 */

	void onClickInfect(sf::Event* event,Table* table);

	/**
	 * @fn	Components* const GUI::getComponents();
	 *
	 * @brief	Zwraca sta�y wska�nik komponent�w zarz�dzania symulacj�.
	 *
	 * @author	Kamil Ulaszek
	 *
	 * @return	Zwraca komponenty.
	 */

	Components* const  getComponents();

	/**
	 * @fn	void GUI::windowManagement(sf::Event* event, const int WINDOW_WIDTH, const int WINDOW_HEIGH);
	 *
	 * @brief	Zarz�dza rozmiarem okna.
	 *
	 * @author	Kamil Ulaszek
	 *
	 * @param [in,out]	event			Przekazuje zdarzenie.
	 * @param 		  	WINDOW_WIDTH	Szeroko�� okna.
	 * @param 		  	WINDOW_HEIGH	Wysoko�� okna.
	 */

	void windowManagement(sf::Event* event, const int WINDOW_WIDTH, const int WINDOW_HEIGH);

	/**
	 * @fn	void GUI::drawColor();
	 *
	 * @brief	Rysuje tytu� komponentu zarz�dzania kolorem.
	 *
	 * @author	Kamil Ulaszek
	 */

	void drawColor();

	/**
	 * @fn	void GUI::setupButtons();
	 *
	 * @brief	Inicjuje przyciski zarz�dzania kolorami.
	 *
	 * @author	Kamil Ulaszek
	 */

	void setupButtons();

	/**
	 * @fn	void GUI::drawButtons();
	 *
	 * @brief	Rysuje przyciski zarz�dzania kolorami.
	 *
	 * @author	Kamil Ulaszek
	 */

	void drawButtons();

	/**
	 * @fn	void GUI::onClickButtons(sf::Event *event);
	 *
	 * @brief	Wykonuje okre�lone akcje po naci�ni�ciu okre�lonego przycisku do zarz�dzania kolorami.
	 *
	 * @author	Kamil Ulaszek
	 *
	 * @param [in,out]	event	Przekazuje zdarzenie.
	 */

	void onClickButtons(sf::Event *event);

	/**
	 * @fn	void GUI::setupColorImage();
	 *
	 * @brief	Inicjuje gradient.
	 *
	 * @author	Kamil Ulaszek
	 */

	void setupColorImage();

	/**
	 * @fn	bool GUI::isGradientClicked(sf::Event *event);
	 *
	 * @brief	Sprawdza czy gradient zosta� klikni�ty.
	 *
	 * @author	Kamil Ulaszek
	 *
	 * @param [in,out]	event	Przekazuje zdarzenie.
	 *
	 * @return	Zwraca true je�li gradient zosta� wci�ni�ty, w przeciwnym wypadku zwraca false.
	 */

	bool isGradientClicked(sf::Event *event);

	/**
	 * @fn	void GUI::onClickGradient(sf::Event *event);
	 *
	 * @brief	Wykonuje okre�lone akcje po wci�ni�ciu gradientu.
	 *
	 * @author	Kamil Ulaszek
	 *
	 * @param [in,out]	event	Przekazuje zdarzenie.
	 */

	void onClickGradient(sf::Event *event);

	/**
	 * @fn	void GUI::scaleManager(sf::Event *event);
	 *
	 * @brief	Zarz�dzanie skal� planszy symulacyjnej.
	 *
	 * @author	Kamil Ulaszek
	 *
	 * @param [in,out]	event	Przekazuje zdarzenie.
	 */

	void scaleManager(sf::Event *event);
};