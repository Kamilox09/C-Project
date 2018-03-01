#include "Program.hpp"

void Program::setup() {
	this->gui = new GUI(this->WINDOW_WIDTH, this->WINDOW_HEIGH, this->WINDOW_TITLE, this->TABLE_SIZE);
	this->gui->getWindow().setFramerateLimit(FPS_LIMIT);
	this->table = new Table(this->TABLE_SIZE);
	this->table->fillCells();
	this->gui->setupComponents(this->COMPONENTS_X_POS, this->COMPONENTS_Y_POS,
								this->SIZE_TITLE, this->SIZE_START_VALUE,
								this->FPS_TITLE, this->FPS_START_VALUE,
								this->INFECTION_TIME_TITLE, this->INFECTION_TIME_START_VALUE,
								this->PROTECTION_TIME_TITLE, this->PROTECTION_TIME_START_VALUE,
								this->PROBABILITY_TITLE, this->PROBABILITY_START);
	this->gui->setupButtons();
	this->gui->setupColorImage();
}
void Program::handleEvents() {
	while (this->gui->getWindow().pollEvent(this->event)) {
		if (this->event.type == sf::Event::Closed) {
			this->gui->getWindow().close();
		}
		if(this->gui->getComponents()->getSize()->isUpClicked(&this->gui->getWindow(),&this->event)||
		   this->gui->getComponents()->getSize()->isDownClicked(&this->gui->getWindow(), &this->event)) {
			this->gui->getComponents()->getSize()->onClick(&this->event, &this->gui->getWindow());
			this->table->changeSize(this->gui->getComponents()->getSize()->getValue());
			this->gui->changeSize(this->gui->getComponents()->getSize()->getValue());
		}
		this->gui->windowManagement(&this->event,this->WINDOW_WIDTH, this->WINDOW_HEIGH);
		this->gui->onClickButtons(&this->event);
		this->gui->getComponents()->getFps()->onClick(&gui->getWindow(), &this->event);
		this->gui->getComponents()->getInfectionTime()->onClick(&gui->getWindow(), &this->event);
		this->gui->getComponents()->getProtectionTime()->onClick(&gui->getWindow(), &this->event);
		this->gui->getComponents()->getProbability()->onClick(&gui->getWindow(), &this->event);
		this->gui->onClickInfect(&this->event, table);
		this->gui->onClickGradient(&this->event);
		this->gui->scaleManager(&this->event);
	}
}
void Program::update() {
	if (this->timer.getElapsedTime() > sf::milliseconds(1000 / this->gui->getComponents()->getFps()->getValue())) {
		this->table->infect(this->gui->getComponents()->getInfectionTime()->getValue(),
							this->gui->getComponents()->getProbability()->getValue());
		this->table->increase();
		this->table->heal(this->gui->getComponents()->getInfectionTime()->getValue(),
			this->gui->getComponents()->getProtectionTime()->getValue());
		this->timer.restart();
	}
}
void Program::render() {
	this->gui->getWindow().clear(sf::Color::White);
	this->gui->getComponents()->drawComponents(&this->gui->getWindow());
	this->gui->createSquare();
	this->gui->generateSquares();
	this->gui->setPositionsOfSquares();
	this->gui->changeColours(this->table);
	this->gui->drawColor();
	this->gui->drawButtons();
	this->gui->getWindow().display();
}
void Program::startProgram() {
	this->setup();
	while (this->gui->getWindow().isOpen()) {
		this->handleEvents();
		this->update();
		this->render();
	}
}
Program::~Program() {
	delete this->gui;
	delete this->table;
}