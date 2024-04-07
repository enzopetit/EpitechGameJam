/*
** EPITECH PROJECT, 2024
** main
** File description:
** main
*/

#include "include.hpp"

void Menu::displayButton()
{
    sf::Texture texture;
    if (!texture.loadFromFile("hoppy.png")) {
        std::cout << "Erreur lors du chargement de l'image." << std::endl;
        return;
    }
    sf::Sprite sprite;
    sprite.setTexture(texture);
    sprite.setPosition(0, 0);

    sf::Font font;
    if (!font.loadFromFile("arial.ttf")) {
        std::cout << "Erreur lors du chargement de la police." << std::endl;
        return;
    }

    sf::Text textJouer;
    textJouer.setFont(font);
    textJouer.setString("Start !");
    textJouer.setCharacterSize(24);
    textJouer.setFillColor(sf::Color::Black);
    textJouer.setPosition(130, 115);

    sf::Text textRegles;
    textRegles.setFont(font);
    textRegles.setString("Rules !");
    textRegles.setCharacterSize(24);
    textRegles.setFillColor(sf::Color::Black);
    textRegles.setPosition(130, 215);

    sf::Text textCreateur;
    textCreateur.setFont(font);
    textCreateur.setString("Credit");
    textCreateur.setCharacterSize(24);
    textCreateur.setFillColor(sf::Color::Black);
    textCreateur.setPosition(130, 315);

    sf::Text textQuitter;
    textQuitter.setFont(font);
    textQuitter.setString("Quit ...");
    textQuitter.setCharacterSize(24);
    textQuitter.setFillColor(sf::Color::Black);
    textQuitter.setPosition(130, 415);

    sf::RectangleShape buttonJouer(sf::Vector2f(200.0f, 50.0f));
    buttonJouer.setFillColor(sf::Color::Red);
    buttonJouer.setPosition(100, 100);

    sf::RectangleShape buttonRegles(sf::Vector2f(200.0f, 50.0f));
    buttonRegles.setFillColor(sf::Color::Green);
    buttonRegles.setPosition(100, 200);

    sf::RectangleShape buttonCreateur(sf::Vector2f(200.0f, 50.0f));
    buttonCreateur.setFillColor(sf::Color::Blue);
    buttonCreateur.setPosition(100, 300);

    sf::RectangleShape buttonQuitter(sf::Vector2f(200.0f, 50.0f));
    buttonQuitter.setFillColor(sf::Color::Yellow);
    buttonQuitter.setPosition(100, 400);

    while (window->isOpen()) {
        sf::Event event;
        while (window->pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window->close();

            if (event.type == sf::Event::MouseButtonPressed) {
                sf::Vector2i mousePosition = sf::Mouse::getPosition(*window);

                if (buttonJouer.getGlobalBounds().contains(mousePosition.x, mousePosition.y)) {
                    // display_world(y);
                } else if (buttonRegles.getGlobalBounds().contains(mousePosition.x, mousePosition.y)) {
                    // display_regle(y);
                } else if (buttonCreateur.getGlobalBounds().contains(mousePosition.x, mousePosition.y)) {
                    // display_credit(y);
                } else if (buttonQuitter.getGlobalBounds().contains(mousePosition.x, mousePosition.y)) {
                    window->close();
                }
            }
        }
        window->clear(sf::Color(128, 128, 128));
        window->draw(sprite);
        window->draw(buttonJouer);
        window->draw(buttonRegles);
        window->draw(buttonCreateur);
        window->draw(buttonQuitter);
        window->draw(textJouer);
        window->draw(textRegles);
        window->draw(textCreateur);
        window->draw(textQuitter);
        window->display();
    }
}

int main(void)
{
    sf::RenderWindow window(sf::VideoMode(600, 600), "Jam Game");

    Menu menu(&window);
    menu.displayButton();
    return 0;
}
