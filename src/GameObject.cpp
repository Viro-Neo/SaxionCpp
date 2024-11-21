#include "GameObject.hpp"

GameObject::GameObject(std::string identifier) : identifier(std::move(identifier)) { }

GameObject::GameObject(const GameObject& other) : identifier(other.getIdentifier()) {
    m_position = other.m_position;
}

GameObject::~GameObject() = default;

// This function uses recursion to render all children of the GameObject
void GameObject::setPosition(const sf::Vector2f& position) {
    const sf::Vector2f delta = position - m_position;
    m_position = position;
    for (const auto& child : children) {
        child->setPosition(child->getPosition() + delta);
    }
}

void GameObject::addChild(const std::shared_ptr<GameObject>& child) {
    this->children.push_back(child);
}

void GameObject::removeChild(std::string identifier) {
    this->children.erase(std::remove_if(this->children.begin(), this->children.end(), [&identifier](const std::shared_ptr<GameObject>& child) {
        return child->getIdentifier() == identifier;
    }), this->children.end());
}
