/*
** EPITECH PROJECT, 2024
** EpitechGameJam
** File description:
** button
*/

#include "button.hpp"

Button::Button(sf::Vector2f size, sf::Vector2f position, std::string text, int font_size)
    : active(true), fontSize(font_size), clickableZone(size), buttonText(text)
{
    if (!font.loadFromFile("./resources/ThaleahFat.ttf")) {
        std::cerr << "Failed to load font." << std::endl;
        // Handle error accordingly
    }

    clickableZone.setPosition(position);
    clickableZone.setFillColor(sf::Color::Transparent);
    clickableZone.setOutlineThickness(2);
    clickableZone.setOutlineColor(sf::Color::Red);

    // Use the member variable buttonTextObj instead of local variable
    buttonTextObj.setFont(font);
    buttonTextObj.setString(buttonText);
    buttonTextObj.setCharacterSize(fontSize);
    buttonTextObj.setFillColor(sf::Color::Black);
    sf::FloatRect textRect = buttonTextObj.getLocalBounds();
    buttonTextObj.setPosition(sf::Vector2f(size.x / 2 - textRect.width / 2, -textRect.height));

    buttonTexture.create(size.x, size.y);
    buttonTexture.clear(sf::Color::Transparent);
    buttonTexture.draw(buttonTextObj);
    buttonTexture.display();

    buttonSprite.setTexture(buttonTexture.getTexture());
    buttonSprite.setPosition(position);
}

bool Button::isHovered(const sf::RenderWindow& window) const
{
    if (active && clickableZone.getGlobalBounds().contains(sf::Vector2f(sf::Mouse::getPosition(window))))
        return true;
    return false;
}

bool Button::isClicked(const sf::RenderWindow& window, sf::Event event) const
{
    if (active && event.type == sf::Event::MouseButtonPressed && event.mouseButton.button == sf::Mouse::Left) {
        if (clickableZone.getGlobalBounds().contains(sf::Vector2f(event.mouseButton.x, event.mouseButton.y)))
            return true;
    }
    return false;
}

void Button::disable()
{
    active = false;
}

void Button::enable()
{
    active = true;
}

void Button::drawButton(sf::RenderWindow& window)
{
    if (isHovered(window)) {
        buttonTextObj.setCharacterSize((int)(fontSize * 1.2));
        buttonTextObj.setRotation(2);
    } else {
        buttonTextObj.setCharacterSize(fontSize);
        buttonTextObj.setRotation(0);
    }
    sf::FloatRect textRect = buttonTextObj.getLocalBounds();
    buttonTextObj.setPosition(sf::Vector2f(15, -(fontSize / 2)));

    buttonTexture.clear(sf::Color::Transparent);
    buttonTexture.draw(buttonTextObj);
    buttonTexture.display();

    buttonSprite.setTexture(buttonTexture.getTexture());
    window.draw(buttonSprite);
}