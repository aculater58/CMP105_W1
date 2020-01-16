#include "Level.h"

Level::Level(sf::RenderWindow* hwnd)
{
	window = hwnd;
	

	sf::Vector2u pos = window->getSize();
	
	
	// initialise game objects

	rect1.setSize(sf::Vector2f(150, 150));
	rect1.setPosition(100, 100);
	rect1.setFillColor(sf::Color::Red);

	rect2.setSize(sf::Vector2f(100, 100));
	rect2.setPosition(125, 125);
	rect2.setFillColor(sf::Color::Green);

	rect3.setSize(sf::Vector2f(50, 50));
	rect3.setPosition(150, 150);
	rect3.setFillColor(sf::Color::Blue);

	rect4.setSize(sf::Vector2f(25, 25));
	rect4.setPosition(pos.x - 25, pos.y - 25);
	rect4.setFillColor(sf::Color::Blue);

	circle1.setRadius(15);
	circle1.setPosition(300,300);
	circle1.setFillColor(sf::Color::Red);
	circle1.setOutlineColor(sf::Color::Black);
	circle1.setOutlineThickness(5.f);



	if (!font1.loadFromFile("font/arial.ttf"))
	{
		std::cout << "Error loading font\n";
	}

	text1.setFont(font1);
	text1.setString("My programmer is Awesome");
	text1.setCharacterSize(24);
	text1.setFillColor(sf::Color::Magenta);

}

Level::~Level()
{
}

// handle user input
void Level::handleInput()
{

}

// Update game objects
void Level::update()
{
	sf::Vector2u pos = window->getSize();

	rect4.setPosition(pos.x - 25, pos.y - 25);
}

// Render level
void Level::render()
{
	beginDraw();

	window->draw(rect1);
	window->draw(rect2);
	window->draw(rect3);
	window->draw(rect4);

	window->draw(text1);

	window->draw(circle1);

	endDraw();
}

void Level::beginDraw()
{
	window->clear(sf::Color(100, 149, 237));
}

// Ends rendering to the back buffer, and swaps buffer to the screen.
void Level::endDraw()
{
	window->display();
}