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
	/** @brief	G³ówne okno programu. */
	sf::RenderWindow window;
	/** @brief	Prostok¹t wokó³ planszy symulacyjnej. */
	sf::RectangleShape square;
	/** @brief	Tablica symulacyjna */
	sf::RectangleShape** squaresTable;
	/** @brief	Rozmiar tablicy symulacyjnej. */
	int size;
	/** @brief	Rozmiar X pojedynczej komórki. */
	float sizeOfSquareX;
	/** @brief	Rozmiar Y pojedynczej komórki. */
	float sizeOfSquareY;
	/** @brief	Komponenty sterowania symulacj¹. */
	Components* components;
	/** @brief	Napis wyœwietlany przy komponencie zarz¹dzania kolorami. */
	sf::Text colorTitle;
	/** @brief	Czcionka napisów. */
	sf::Font font;
	/** @brief	Przycisk do zmiany koloru zdrowej komórki. */
	HealthButton * healthButton;
	/** @brief	Przycisk do zmiany koloru infekuj¹cej komórki. */
	InfectedButton * infectedButton;
	/** @brief	Przycisk do zmiany koloru odpornej komórki. */
	ProtectedButton * protectedButton;
	/** @brief	Statusy przycisków zarz¹dzania kolorami. */
	ButtonsStates buttonsStates;
	/** @brief	Kolor zdrowej komórki. */
	sf::Color healthColor;
	/** @brief	Kolor infekuj¹cej komórki. */
	sf::Color infectedColor;
	/** @brief	Kolor odpornej komórki. */
	sf::Color protectedColor;
	/** @brief	Gradient kolorów potrzebny do ich zmiany. */
	sf::Image gradient;
	/** @brief	Sprite gradientu kolorów. */
	sf::Sprite gradientSprite;
	/** @brief	Tekstura gradientu kolorów. */
	sf::Texture gradientTexture;

	/**
	 * @fn	void GUI::colorManagment();
	 *
	 * @brief	Zarz¹dzanie kolorami.
	 *
	 * @author	Kamil Ulaszek
	 */

	void colorManagment();
	/** @brief	Po³o¿enie gradientu kolorów. */
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
	/** @brief	Vektor kolorów miêdzy infekuj¹cym a odpornym. */
	std::vector<sf::Color> infToProt;
	/** @brief	Wektor kolorów miêdzy odpornym a zdrowym. */
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
	 * @param	width 	Szerokoœæ okna.
	 * @param	heigh 	Wysokoœæ okna.
	 * @param	tittle	Tytu³ okna.
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
	 * @param	xPos			   	Pozycja X pierwszego komponentu, na podstawie której rozmieszczana jest reszta.
	 * @param	yPos			   	Pozycja Y pierwszego komponentu, na podstawie której rozmieszczana jest reszta.
	 * @param	sizeTitle		   	Napis do wyœwietlenia przy komponencie rozmiaru.
	 * @param	sizeStart		   	Wartoœæ pocz¹tkowa rozmiaru.
	 * @param	fpsTitle		   	Napis do wyœwietlenia przy komponencie fps.
	 * @param	fpsStart		   	Wartoœæ pocz¹tkowa fps.
	 * @param	infectionTimeTitle 	Napis do wyœwietlenia przy komponencie czasu infekowania.
	 * @param	infectionTimeStart 	Wartoœæ pocz¹tkowa czasu infekowania.
	 * @param	protectionTimeTitle	Napis do wyœwietlenia przy komponencie czasu odpornoœci.
	 * @param	protectionTimeStart	Wartoœæ pocz¹tkowa czasu odpornoœci.
	 * @param	probabilityTitle   	Napis do wyœwietlenia przy komponencie prawdopodobieñstwa.
	 * @param	probabilityStart   	Wartoœæ pocz¹tkowa prawdopodobieñstwa.
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
	 * @brief	Tworzy prostok¹t wokó³ planszy symulacyjnej.
	 *
	 * @author	Kamil Ulaszek
	 */

	void createSquare();

	/**
	 * @fn	void GUI::changeSize(int n);
	 *
	 * @brief	Zmienia rozmiar tablicy symulacyjnej podczas dzia³ania programu.
	 *
	 * @author	Kamil Ulaszek
	 *
	 * @param	n	Nowy rozmiar.
	 */

	void changeSize(int n);

	/**
	 * @fn	void GUI::generateSquares();
	 *
	 * @brief	Generuje tablice symulacyjn¹.
	 *
	 * @author	Kamil Ulaszek
	 */

	void generateSquares();

	/**
	 * @fn	void GUI::setPositionsOfSquares();
	 *
	 * @brief	Ustawia pozycje sk³adowych tablicy symulacyjnej.
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
	 * @param [in,out]	tab	If Obiekt tablicy przechowuj¹cy aktualne stany komórek.
	 */

	void changeColours(Table* tab);

	/**
	 * @fn	void GUI::onClickInfect(sf::Event* event,Table* table);
	 *
	 * @brief	Infekuje komórkê, na któr¹ siê kliknê³o.
	 *
	 * @author	Kamil Ulaszek
	 *
	 * @param [in,out]	event	Przekazuje zdarzenie.
	 * @param [in,out]	table	Przekazuje obiekt tablicy do aktualizacji stanu komórek.
	 */

	void onClickInfect(sf::Event* event,Table* table);

	/**
	 * @fn	Components* const GUI::getComponents();
	 *
	 * @brief	Zwraca sta³y wskaŸnik komponentów zarz¹dzania symulacj¹.
	 *
	 * @author	Kamil Ulaszek
	 *
	 * @return	Zwraca komponenty.
	 */

	Components* const  getComponents();

	/**
	 * @fn	void GUI::windowManagement(sf::Event* event, const int WINDOW_WIDTH, const int WINDOW_HEIGH);
	 *
	 * @brief	Zarz¹dza rozmiarem okna.
	 *
	 * @author	Kamil Ulaszek
	 *
	 * @param [in,out]	event			Przekazuje zdarzenie.
	 * @param 		  	WINDOW_WIDTH	Szerokoœæ okna.
	 * @param 		  	WINDOW_HEIGH	Wysokoœæ okna.
	 */

	void windowManagement(sf::Event* event, const int WINDOW_WIDTH, const int WINDOW_HEIGH);

	/**
	 * @fn	void GUI::drawColor();
	 *
	 * @brief	Rysuje tytu³ komponentu zarz¹dzania kolorem.
	 *
	 * @author	Kamil Ulaszek
	 */

	void drawColor();

	/**
	 * @fn	void GUI::setupButtons();
	 *
	 * @brief	Inicjuje przyciski zarz¹dzania kolorami.
	 *
	 * @author	Kamil Ulaszek
	 */

	void setupButtons();

	/**
	 * @fn	void GUI::drawButtons();
	 *
	 * @brief	Rysuje przyciski zarz¹dzania kolorami.
	 *
	 * @author	Kamil Ulaszek
	 */

	void drawButtons();

	/**
	 * @fn	void GUI::onClickButtons(sf::Event *event);
	 *
	 * @brief	Wykonuje okreœlone akcje po naciœniêciu okreœlonego przycisku do zarz¹dzania kolorami.
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
	 * @brief	Sprawdza czy gradient zosta³ klikniêty.
	 *
	 * @author	Kamil Ulaszek
	 *
	 * @param [in,out]	event	Przekazuje zdarzenie.
	 *
	 * @return	Zwraca true jeœli gradient zosta³ wciœniêty, w przeciwnym wypadku zwraca false.
	 */

	bool isGradientClicked(sf::Event *event);

	/**
	 * @fn	void GUI::onClickGradient(sf::Event *event);
	 *
	 * @brief	Wykonuje okreœlone akcje po wciœniêciu gradientu.
	 *
	 * @author	Kamil Ulaszek
	 *
	 * @param [in,out]	event	Przekazuje zdarzenie.
	 */

	void onClickGradient(sf::Event *event);

	/**
	 * @fn	void GUI::scaleManager(sf::Event *event);
	 *
	 * @brief	Zarz¹dzanie skal¹ planszy symulacyjnej.
	 *
	 * @author	Kamil Ulaszek
	 *
	 * @param [in,out]	event	Przekazuje zdarzenie.
	 */

	void scaleManager(sf::Event *event);
};