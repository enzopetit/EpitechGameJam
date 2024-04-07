/*
** EPITECH PROJECT, 2024
** import
** File description:
** import
*/

#ifndef IMPORT_HPP_
    #define IMPORT_HPP_

    #include <SFML/Graphics.hpp>
    #include <SFML/Audio.hpp>
    #include <SFML/System.hpp>
    #include <SFML/Window.hpp>
    #include <SFML/Network.hpp>

    #include "menu.hpp"

namespace imp {
    int game_app(void);

    class Graphic {
        public:
            Graphic();
            ~Graphic() = default;
        protected:
    };

    class Game {
        public:
            Game();
            ~Game() = default;
    };

}

#endif /* !IMPORT_HPP_ */
