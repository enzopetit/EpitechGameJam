/*
** EPITECH PROJECT, 2024
** main
** File description:
** main
*/

#include "include.hpp"

void Menu::displayButton()
{
    sf::Font font;
    sf::Text text;

    font.loadFromFile("arial.ttf");
    text.setFont(font);
    text.setString("Start Game");
    text.setCharacterSize(24);
    text.setFillColor(sf::Color::Red);
    text.setStyle(sf::Text::Bold);
    text.setPosition(100, 100);
    windows->draw(text);
}

int main(void)
{
    sf::RenderWindow window(sf::VideoMode(1280, 720), "Jam Game");
    window.setFramerateLimit(30);

    Menu menu;
    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }
        menu.displayButton();
        window.display();
        window.clear();
    }
    // start_menu(window);
    return 0;
}
