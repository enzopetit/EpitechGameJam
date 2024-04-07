/*
** EPITECH PROJECT, 2024
** EpitechGameJam
** File description:
** menu
*/
#include "menu.hpp"
#include "button.hpp"

#include <iostream>

imp::Menu::Menu()
{
    backGround.create(1920, 1080);
    backGround.clear(sf::Color::White);
}

int imp::Menu::main_loop(sf::RenderWindow &window) {

    Button btn_start({320, 100}, {100, 100}, "PLAY", 128);

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
                return 0;
            }
            if (btn_start.isClicked(window, event)) {
                std::cout << "game started";
                // start game function here
            }
        }



        window.clear(sf::Color(0x262626FF));
        draw_menu(window);
        btn_start.drawButton(window);
        window.display();
    }
    return 84;
}

void imp::Menu::draw_bg(sf::RenderWindow &window)
{
    //draw whatever in the back ground
    backGround.clear(sf::Color(0x338a6eff));

    //scale texture to window
    sf::Sprite bg(backGround.getTexture());
    sf::Vector2u windowSize = window.getSize();
    bg.setScale((static_cast<float>(windowSize.x) / bg.getLocalBounds().width) + 0.01,
                (static_cast<float>(windowSize.y) / bg.getLocalBounds().height) + 0.01);
    window.draw(bg);
}

void imp::Menu::draw_menu(sf::RenderWindow &window)
{
    draw_bg(window);
}
