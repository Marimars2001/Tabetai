#include<iostream>
#include<SFML/Graphics.hpp>

int main()
{
  sf::RenderWindow* window{new sf::RenderWindow(sf::VideoMode(800, 800), "Game Engine")};
  sf::Event* event{new sf::Event()};

  while (window->isOpen())
  {
    while (window->pollEvent(*event))
    {
      if(event->type == sf::Event::Closed)
      {
        window->close();
      }
    }

  }

  return 0;
}
