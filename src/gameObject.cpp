#include "gameObject.hpp"

GameObject::GameObject(std::string identifier) : identifier(std::move(identifier)) { }

GameObject::GameObject(const GameObject& other) : identifier(other.getIdentifier()) { }
