
#include <SFML/Graphics.hpp>

int main()
{
    // Create a window
    sf::RenderWindow window(sf::VideoMode(800, 600), "My Game");

    // Main game loop
    while (window.isOpen())
    {
        // Handle events
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
            {
                window.close();
            }
        }

        // Clear the window
        window.clear(sf::Color::Black);

        // Draw the game objects

        // Display the window
        window.display();
    }

    return 0;
}

This code uses the SFML library to create a window, handle events, and draw game objects. You can use this as a starting point and add your own game logic and graphics to create a full Shoot 'em up game.
