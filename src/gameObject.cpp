#include "gameObject.hpp"
#include <utility>

GameObject::GameObject(std::string identifier) : identifier(std::move(identifier)) { }

GameObject::GameObject(const GameObject& other) : identifier(other.getIdentifier()) { }

std::string GameObject::getIdentifier() const {
    return this->identifier;
}
