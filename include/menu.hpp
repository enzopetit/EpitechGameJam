/*
** EPITECH PROJECT, 2024
** EpitechGameJam
** File description:
** menu
*/

#ifndef MENU_HPP_
    #define MENU_HPP_
    #include <SFML/Graphics.hpp>

namespace imp {

    class Menu {
        public:
            Menu();
            ~Menu() = default;

            int main_loop(sf::RenderWindow *window);
    };
}

#endif /* !MENU_HPP_ */
