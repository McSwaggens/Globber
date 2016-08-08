#include "Engine.h"

Engine::Engine() {
	
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
	clock->restart();
	for (std::list<Entity>::iterator it = entities.begin(); it != entities.end(); it++)
	{
		double delta = clock->getElapsedTime().asSeconds();
		it->Tick((float)delta);
		std::cout << delta << std::endl;
	}
}