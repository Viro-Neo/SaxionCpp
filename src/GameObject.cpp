#include "GameObject.hpp"

GameObject::GameObject(std::string identifier) : identifier(std::move(identifier)) { }

GameObject::GameObject(const GameObject& other) : identifier(other.getIdentifier()) { }

GameObject::~GameObject() = default;

std::string GameObject::getIdentifier() const {
    return this->identifier;
}

void GameObject::addChild(const std::shared_ptr<GameObject>& child) {
    this->children.push_back(child);
}

void GameObject::removeChild(std::string identifier) {
    this->children.erase(std::remove_if(this->children.begin(), this->children.end(), [&identifier](const std::shared_ptr<GameObject>& child) {
        return child->getIdentifier() == identifier;
    }), this->children.end());
}
