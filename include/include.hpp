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

namespace imp {
    int game_app(void);

    class Graphic {
        public:
            Graphic();
            ~Graphic() = default;
            virtual void initWindow() = 0;
            virtual void clearWindow() = 0;
            virtual void refreshWindow() = 0;
            virtual void drawCell() = 0;
            virtual int drawText() = 0;
        protected:
    };
}

#endif /* !IMPORT_HPP_ */
