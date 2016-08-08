#include "Engine.h"
#include <iostream>

Engine::Engine() {
}

void Engine::Run()
{
	while (Running)
	{
		Tick();
	}
}

void Engine::Tick()
{
	for (std::list<Entity>::iterator it = entities.begin(); it != entities.end(); it++)
	{
		it->Tick(1.0f);
	}
}