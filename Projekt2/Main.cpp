#include <SFML/Graphics.hpp>
#include <cmath>
#include "GUI.hpp"
#include "Components.hpp"
#include <iostream>
#include "Virus.hpp"
#include "Program.hpp"
/*
int main()
{
	sf::RenderWindow okno(sf::VideoMode(320, 240), "Kurs SFML 2.0 - http://cpp0x.pl");
	sf::Clock stoper;
	while (okno.isOpen())
	{
		sf::Event event;
		while (okno.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				okno.close();

		} //while
		okno.clear();

		sf::CircleShape ksztalt(std::sin(stoper.getElapsedTime().asSeconds()) * okno.getSize().y / 8 + okno.getSize().y / 4);
		ksztalt.setOrigin(sf::Vector2f(ksztalt.getRadius(), ksztalt.getRadius()));
		ksztalt.setPosition(okno.getSize().x / 2.0f, okno.getSize().y / 2.0f);
		ksztalt.setFillColor(sf::Color::Yellow);
		okno.draw(ksztalt);

		okno.display();
	} //while
	return 0;
}
int main() {
	sf::Clock timer;
	GUI gui(500, 300, "Liszaj",50);
	Components components(25,25,
		"Rozmiar",50,
		"Fps",30,
		"Czas zarazania",6,
		"Czas ochrony",15);
	Table table(50);
	table.fillCells();
	Virus virus;
	while (gui.getWindow().isOpen()) {
		
		sf::Event event;
		while (gui.getWindow().pollEvent(event))
		{
			if (event.type == sf::Event::Closed) {
				gui.getWindow().close();
			}
			components.getSize()->onClick(&gui.getWindow(), &event, &gui, &table);
			components.getFps()->onClick(&gui.getWindow(), &event);
			components.getInfectionTime()->onClick(&gui.getWindow(), &event);
			components.getProtectionTime()->onClick(&gui.getWindow(), &event);
			gui.onClickInfect(&event, &table);
		} 
		
		table.infect();
		table.increase();
		table.heal();
		gui.getWindow().clear(sf::Color::White);
		components.drawComponents(&gui.getWindow());
		gui.createSquare();
		gui.generateSquares();
		//if (timer.getElapsedTime() > sf::milliseconds(1000 / 2)) {
			gui.setPositionsOfSquares();
		//	timer.restart();
		//}
		gui.changeColours(table.getBoard(),5);
		
		gui.getWindow().display();
	}
	return 0;
}*/
int main() {
	Program program;
	program.startProgram();
	return 0;
}