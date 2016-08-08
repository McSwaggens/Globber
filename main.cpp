<<<<<<< HEAD
#include <iostream>
#include "SFMl/Graphics.hpp"
#include "Entity.h"
=======
#include "Engine.h"
>>>>>>> 3a73d69e19b9bee2edc32c4c7da0c34207d0f174


<<<<<<< HEAD
int main() {
	sf::Clock clock;
	sf::RenderWindow MainWindow;
	MainWindow.create(sf::VideoMode(1768, 992), "Anal Pong", sf::Style::Fullscreen);
	MainWindow.setFramerateLimit(60);
	while (MainWindow.isOpen()) {
		//THIS IS WHERE ALL THE FACKIN GAME LOGIC GOES M8 YA FACKIN CUNT
		double delta = clock.restart().asSeconds();
	}
=======
int main ()
{
	std::printf ("Starting game...");
	Engine engine;
	engine.Run();
>>>>>>> 3a73d69e19b9bee2edc32c4c7da0c34207d0f174
}