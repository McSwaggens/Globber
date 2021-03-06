#include "Engine.h"

Engine::Engine()
{
	Screen.create(sf::VideoMode(800, 600), "Anal Pong", sf::Style::Default);
	Screen.setFramerateLimit(60);
}

void Engine::Run()
{
	Running = true;
	while (Running)
	{
		Tick();
	}
	
	printf ("Goodbye");
}

void Engine::Tick()
{
	
	sf::Event event;
	while (Screen.pollEvent(event))
	{
		if (event.type == sf::Event::Closed)
			Screen.close();
	}
	
	Screen.clear(sf::Color::Black);
	
	clock->restart();
	for (std::list<Entity>::iterator it = entities.begin(); it != entities.end(); it++)
	{
		float delta = clock->getElapsedTime().asSeconds();
		it->Tick(delta);
		std::cout << delta << std::endl;
	}
	
	Screen.display();
}