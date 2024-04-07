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

class Menu {
    public:
        Menu() {
            if (music.openFromFile("daft.ogg"))
                music.play();

        }
        ~Menu() {}
        void displayButton();
        // void start_game();
        // void end_game();
    private:
        sf::RenderWindow* windows;
        sf::Music music;
};


#endif /* !IMPORT_HPP_ */
