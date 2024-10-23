#include "Character.hpp"

void inventoryTest()
{
    Character character(5);

    character.addInventoryItem("Sword");
    character.addInventoryItem("Shield");
    character.addInventoryItem("Potion");
    character.addInventoryItem("Bow");
    character.addInventoryItem("Arrow");
    character.addInventoryItem("Dagger");
    character.printInventory();
}

int main()
{
    Character player(5);
    return 0;
}
