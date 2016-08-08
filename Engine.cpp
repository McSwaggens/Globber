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
	for (std::list<Entity>::iterator it = entities.begin(); it != entities.end(); it++)
	{
		double delta = clock.restart().asSeconds();
		it->Tick((float)delta);
	}
}