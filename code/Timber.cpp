// Include important C++ libraries here
#include <SFML/Graphics.hpp>
#include <iostream>
#include "Tree.h"
#include "Movable.h"

// Make code easier to type with "using namespace"
using namespace sf;
using namespace std;

int main()
{
	// Create a video mode object
	VideoMode vm(1920, 1080);

	// Create and open a window for the game
	RenderWindow window(vm, "Timber!!!!!", Style::Default);

	// Create a texture to hold a graphic on the GPU
	Texture textureBackground;

	// Load a graphic into the texture
	textureBackground.loadFromFile("graphics/background.png");

	// Create a sprite
	Sprite spriteBackground;

	// Attach the texture to the sprite
	spriteBackground.setTexture(textureBackground);

	// Set the spriteBackground to cover the screen
	spriteBackground.setPosition(0, 0);

	sf::Texture treeTexture;
	treeTexture.loadFromFile("graphics/tree.png");
	Tree tree(treeTexture, 810, 0);

	sf::Texture beeTexture;
	beeTexture.loadFromFile("graphics/bee.png");
	Movable bee(beeTexture, Vector2f(0, 800));

	sf::Texture cloudTexture;
	cloudTexture.loadFromFile("graphics/cloud.png");
	vector<Movable> clouds = { Movable(cloudTexture, Vector2f(0, 0)), Movable(cloudTexture, Vector2f(0, 250)), Movable(cloudTexture, Vector2f(0, 500)) };


	while (window.isOpen())
	{

		/*
		****************************************
		Handle the players input
		****************************************
		*/

		if (Keyboard::isKeyPressed(Keyboard::Escape))
		{
			window.close();
		}

		/*
		****************************************
		Update the scene
		****************************************
		*/


		/*
		****************************************
		Draw the scene
		****************************************
		*/

		// Clear everything from the last frame
		window.clear();

		// Draw our game scene here
		window.draw(spriteBackground);
		tree.draw(window);
		window.draw(bee);
		for (Movable cloud : clouds)
		{
			window.draw(cloud);
		}

		// Show everything we just drew
		window.display();


	}



	return 0;
}


