/*
** EPITECH PROJECT, 2024
** EpitechGameJam
** File description:
** button
*/

#ifndef BUTTON_HPP_
    #define BUTTON_HPP_
    #include <SFML/Graphics.hpp>
    #include <iostream>

class Button {
public:
    Button(sf::Vector2f size, sf::Vector2f position, std::string text, int font_size);
    ~Button() = default;

    bool isHovered(const sf::RenderWindow& window) const;
    bool isClicked(const sf::RenderWindow& window, sf::Event event) const;
    void drawButton(sf::RenderWindow& window);

    void disable();
    void enable();

private:
    bool active;
    int fontSize;
    sf::RectangleShape clickableZone;
    sf::RenderTexture buttonTexture;
    sf::Sprite buttonSprite;
    sf::Font font;
    std::string buttonText;
    sf::Text buttonTextObj;
};

#endif /* !BUTTON_HPP_ */
