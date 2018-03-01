#include "GUI.hpp"

GUI::GUI(int width, int heigh, sf::String tittle, int size) {
	this->window.create(sf::VideoMode(width,heigh),tittle);
	this->squaresTable = new sf::RectangleShape*[size];
	for (int i = 0; i < size; i++) {
		this->squaresTable[i] = new sf::RectangleShape[size];
	}
	this->healthColor = sf::Color::Green;
	this->infectedColor = sf::Color::Red;
	this->protectedColor = sf::Color::Yellow;
	this->font.loadFromFile("arial.ttf");
	this->size = size;
	this->iTime = 6;
	this->pTime = 8;
}
GUI::~GUI() {
	for (int i = 0; i < this->size; i++) {
		delete[] this->squaresTable[i];
	}
	delete[] this->squaresTable;
	delete this->components;
	delete this->healthButton;
	delete this->infectedButton;
	delete this->protectedButton;
}
sf::RenderWindow& GUI::getWindow() {
	return this->window;
}
void GUI::setupComponents(float xPos, float yPos,
	std::wstring sizeTitle, int sizeStart,
	std::wstring fpsTitle, int fpsStart,
	std::wstring infectionTimeTitle, int infectionTimeStart,
	std::wstring protectionTimeTitle, int protectionTimeStart,
	std::wstring probabilityTitle, int probabilityStart)
{
	this->components = new Components(xPos, yPos,
		sizeTitle, sizeStart,
		fpsTitle, fpsStart,
		infectionTimeTitle, infectionTimeStart,
		protectionTimeTitle, protectionTimeStart,
		probabilityTitle, probabilityStart);
}
void GUI::createSquare() {
	this->square.setSize(sf::Vector2f(squareSizesX, squareSizesY));
	this->square.setPosition(sf::Vector2f(210, 125));
	this->square.setOutlineThickness(5);
	this->square.setOutlineColor(sf::Color::Black);
	this->square.setFillColor(sf::Color::White);
	this->window.draw(this->square);
}
void GUI::changeSize(int n) {
	sf::RectangleShape** temp = new sf::RectangleShape*[n];
	int tempSize = this->size;
	this->size = n;
	for (int i = 0; i < n; i++)
		temp[i] = new sf::RectangleShape[n];
	if (n >= tempSize) {
		for (int i = 0; i < tempSize; i++)
			for (int j = 0; j < tempSize; j++)
				temp[i][j] = this->squaresTable[i][j];
		for (int i = 0; i < tempSize; i++)
			delete[] this->squaresTable[i];
		delete[] this->squaresTable;
		this->squaresTable = new sf::RectangleShape*[n];
		for (int i = 0; i < n; i++)
			this->squaresTable[i] = new sf::RectangleShape[n];
		for (int i = 0; i < tempSize; i++)
			for (int j = 0; j < tempSize; j++)
				this->squaresTable[i][j] = temp[i][j];
		for (int i = 0; i < n; i++)
			delete[] temp[i];
		delete[] temp;
	}
	else {
		for (int i = 0; i < n; i++)
			for (int j = 0; j < n; j++)
				temp[i][j] = this->squaresTable[i][j];
		for (int i = 0; i < tempSize; i++)
			delete[] this->squaresTable[i];
		delete[] this->squaresTable;
		this->squaresTable = new sf::RectangleShape*[n];
		for (int i = 0; i < n; i++)
			this->squaresTable[i] = new sf::RectangleShape[n];
		for (int i = 0; i < n; i++)
			for (int j = 0; j < n; j++)
				this->squaresTable[i][j] = temp[i][j];
		for (int i = 0; i < n; i++)
			delete[] temp[i];
		delete[] temp;
	}
}
void GUI::generateSquares() {
	this->sizeOfSquareX = squareSizesX / (float)this->size;
	this->sizeOfSquareY = squareSizesY / (float)this->size;
	for (int i = 0; i < this->size; i++) {
		for (int j = 0; j < this->size; j++) {
			squaresTable[i][j].setSize(sf::Vector2f(this->sizeOfSquareX, this->sizeOfSquareY));
		}
	}
}
void GUI::setPositionsOfSquares() {
	for (int i=0;i<this->size;i++) {
		float m = 210 + (i*this->sizeOfSquareX);
		for (int j=0 ;j<this->size ;j++) {
			float n = 125 + (j*this->sizeOfSquareY);
			this->squaresTable[i][j].setPosition(sf::Vector2f(m, n));
		}
	}
}
void GUI::changeColours(Table* tab) {
	ColorCreator cCreator;
	int** table = tab->getBoard();

	this->setTimes(this->components->getInfectionTime()->getValue(),
		this->components->getProtectionTime()->getValue());
		infToProt = cCreator.createColorVect(this->infectedColor, this->protectedColor, this->iTime);
		protToHeal = cCreator.createColorVect(this->protectedColor, this->healthColor, this->pTime);
		
			for (int i = 0; i < this->size; i++) {
				for (int j = 0; j < this->size; j++) {
					if (table[i][j] == 0) {
						this->squaresTable[i][j].setFillColor(this->healthColor);
					}
					if (table[i][j] > 0 && table[i][j] <= this->iTime) {
						this->squaresTable[i][j].setFillColor(infToProt.at(table[i][j] - 1));
					}
					if (table[i][j] > this->iTime && table[i][j] <= this->iTime + this->pTime) {
						this->squaresTable[i][j].setFillColor(protToHeal.at(table[i][j] - iTime - 1));
					}
					this->window.draw(this->squaresTable[i][j]);
				}
			}

}
void GUI::onClickInfect(sf::Event* event, Table* table) {
	sf::IntRect** rectTable = new sf::IntRect*[this->size];
	for (int i = 0; i < this->size; i++) {
		rectTable[i] = new sf::IntRect[this->size];
	}
	for (int i = 0; i < this->size; i++) {
		for (int j = 0; j < this->size; j++) {
			rectTable[i][j] =  sf::IntRect(this->squaresTable[i][j].getPosition().x,
										   this->squaresTable[i][j].getPosition().y,
										   this->squaresTable[i][j].getGlobalBounds().width,
										   this->squaresTable[i][j].getGlobalBounds().height);
		}
	}
	for (int i = 0; i < this->size; i++) {
		for (int j = 0; j < this->size; j++) {
			if(event->type == sf::Event::MouseButtonPressed)
				if (rectTable[i][j].contains(sf::Mouse::getPosition(this->window))) {
					int** tempBoard = table->getBoard();
					tempBoard[i][j] = 1;
					table->setBoard(tempBoard);
				}
		}
	}

}

 Components * const  GUI::getComponents()
{
	return components;
}

 void GUI::windowManagement(sf::Event* event, const int WINDOW_WIDTH, const int WINDOW_HEIGH) {
	 if ((float)this->window.getSize().x < 500 && (float)this->window.getSize().y >= 400) {
		 this->window.setSize(sf::Vector2u(WINDOW_WIDTH, this->window.getSize().y));
		 
	 }
	 if ((float)this->window.getSize().x >= 500 && (float)this->window.getSize().y < 400) {
		 this->window.setSize(sf::Vector2u(this->window.getSize().x, WINDOW_HEIGH));
		
	 }
	 if ((float)this->window.getSize().x < 500 && (float)this->window.getSize().y < 400) {
		 this->window.setSize(sf::Vector2u(WINDOW_WIDTH, WINDOW_HEIGH));
	
	 }
	 if (event->type == sf::Event::Resized) {
		 sf::View mGUIView = sf::View(sf::FloatRect(0.f, 0.f, (float)this->window.getSize().x, (float)this->window.getSize().y));
		 this->window.setView(mGUIView);
	 }
 }

 void GUI::drawColor() {
	 this->colorTitle.setFont(font);
	 this->colorTitle.setFillColor(sf::Color::Black);
	 this->colorTitle.setCharacterSize(18);
	 this->colorTitle.setString("Zmiana koloru\n dla komórki:");
	 this->colorTitle.setPosition(25,25);
	 this->window.draw(colorTitle);
 }
 void GUI::setupButtons() {
	 this->healthButton = new HealthButton(25.f, 70.f);
	 this->infectedButton = new InfectedButton(25.f, 95.f);
	 this->protectedButton = new ProtectedButton(25.f, 120.f);
 }
 void GUI::drawButtons() {
	 this->healthButton->drawSprite(&this->window);
	 this->infectedButton->drawSprite(&this->window);
	 this->protectedButton->drawSprite(&this->window);
	 this->window.draw(gradientSprite);
 }

 void GUI::onClickButtons(sf::Event *event)
 {
	 healthButton->onClick(&this->window, event, &this->buttonsStates);
	 infectedButton->onClick(&this->window, event, &this->buttonsStates);
	 protectedButton->onClick(&this->window, event, &this->buttonsStates);
	 healthButton->checkTexture(&this->buttonsStates);
	 infectedButton->checkTexture(&this->buttonsStates);
	 protectedButton->checkTexture(&this->buttonsStates);
	
 }

 void GUI::setupColorImage() {
	 this->gradient.loadFromFile("pictures/gradient.jpg");
	 this->gradientTexture.loadFromFile("pictures/gradient.jpg");
	 this->gradientSprite.setTexture(gradientTexture);
	 this->gradientSprite.setPosition(150.f, 25.f);
 }
 bool GUI::isGradientClicked(sf::Event *event) {
	 sf::IntRect temp(this->gradientSprite.getPosition().x, this->gradientSprite.getPosition().y,
		 this->gradientSprite.getGlobalBounds().width, this->gradientSprite.getGlobalBounds().height);
	 if (event->type == sf::Event::MouseButtonPressed) {
		 if (temp.contains(sf::Mouse::getPosition(this->window)) == true) {
			 this->colorPosVect = sf::Mouse::getPosition(this->window);
		 }
		 return temp.contains(sf::Mouse::getPosition(this->window));
	 }
	 return false;
 }

 void GUI::colorManagment() {
	 if (this->buttonsStates.getHealthyState() == true) {
		 this->healthColor = this->gradient.getPixel(this->colorPosVect.x-150,this->colorPosVect.y-25);
	 }
	 if (this->buttonsStates.getInfectedState() == true) {
		 this->infectedColor = this->gradient.getPixel(this->colorPosVect.x-150, this->colorPosVect.y-25);
	 }
	 if (this->buttonsStates.getProtectedState() == true) {
		 this->protectedColor = this->gradient.getPixel(this->colorPosVect.x-150, this->colorPosVect.y-25);
	 }
 }
 void GUI::onClickGradient(sf::Event *event) {
	 if (this->isGradientClicked(event) == true) {
		 this->colorManagment();
	 }
 }
 void GUI::setTimes(int iT, int pT) {
	 this->iTime = iT;
	 this->pTime = pT;
 }
 void GUI::scaleManager(sf::Event *event) {
	 if (event->type == sf::Event::Resized) {
		 this->squareSizesX = (float)this->window.getSize().x * 0.5;
		 this->squareSizesY = (float)this->window.getSize().y *0.625;
	 }
 }