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

            int main_loop(sf::RenderWindow &window);

            void draw_menu(sf::RenderWindow &window);
            void draw_bg(sf::RenderWindow &window);

        protected:
            sf::RenderTexture backGround;
    };
}

#endif /* !MENU_HPP_ */
