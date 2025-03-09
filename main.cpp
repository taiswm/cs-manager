#include <iostream>
#include "includes\player.h"

int main(){

    Player p1("donk", "Russia", 18, 97, 95, 99, 83, 88, 82, 85);
    Player p2("Pobbel", "Denmark", 22, 65, 72, 69, 75, 79, 72, 60);

    std::cout << p1.getName() << " has an aim rating of " << p1.getAim() << " and a total rating of " << p1.getRating() << "." << std::endl;
    std::cout << p2.getName() << " has an aim rating of " << p2.getAim() << " and a total rating of " << p2.getRating() << "." << std::endl;

    return 0;
}