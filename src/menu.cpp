/*
** EPITECH PROJECT, 2024
** EpitechGameJam
** File description:
** menu
*/
#include "menu.hpp"

#include <iostream>

imp::Menu::Menu() {}

int imp::Menu::main_loop(sf::RenderWindow *window) {
    sf::CircleShape circle(50);
    circle.setFillColor(sf::Color::Blue);
    circle.setPosition(400, 300);

    while (window->isOpen()) {
        sf::Event event;
        while (window->pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window->close();
                return 0;
            }
            if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Enter) {
                std::cout << "started game\n";
                //
                // Put call to main game here
                //
            }
        }

        window->clear(sf::Color(0x262626FF));
        window->draw(circle);
        window->display();
    }
    return 84;
}