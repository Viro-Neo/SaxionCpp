#include "Character.hpp"

int main()
{
    Character character(5);

    character.addInventoryItem("Sword");
    character.addInventoryItem("Shield");
    character.addInventoryItem("Potion");
    character.addInventoryItem("Bow");
    character.addInventoryItem("Arrow");
    character.addInventoryItem("Dagger");
    character.printInventory();
    return 0;
}
