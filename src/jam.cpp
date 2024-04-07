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
    window.setFramerateLimit(60);

    imp::Menu menu;
    imp::Game *game;
    game->setUserName("User Test");
    return menu.main_loop(window);
}
