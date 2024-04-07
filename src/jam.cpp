/*
** EPITECH PROJECT, 2024
** EpitechGameJam
** File description:
** jam
*/

#include "import.hpp"

int imp::game_app(void)
{
    sf::RenderWindow window(sf::VideoMode(1280, 720), "Jam Game");
    //load other important things to load before start

    imp::Menu menu;
    return menu.main_loop(window);
}
