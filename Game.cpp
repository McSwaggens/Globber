#include "Game.h"
#include <iostream>

Game::Game() {
}

void Game::Run()
{
	while (Running)
	{
		Tick();
	}
}

void Game::Tick()
{
	for (std::list<Entity>::iterator it = entities.begin(); it != entities.end(); it++)
	{
		it->Tick(1.0f);
	}
}