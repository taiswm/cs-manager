#include "includes/match_simulation.h"
#include <iostream>

int main() {
    std::vector<Player> team1Players = {
        Player("Player1", "Denmark", 25, 99, 85, 88, 80, 87, 88, 80, 85, 80, 85),
        Player("Player2", "Denmark", 26, 85, 82, 85, 78, 85, 85, 75, 80, 78, 80),
        Player("Player3", "Denmark", 23, 88, 84, 86, 79, 83, 84, 77, 82, 76, 82),
        Player("Player4", "Denmark", 24, 86, 80, 83, 76, 80, 82, 72, 78, 74, 78),
        Player("Player5", "Denmark", 27, 82, 78, 80, 74, 78, 80, 70, 75, 72, 75)
    };

    std::vector<Player> team2Players = {
        Player("PlayerA", "Sweden", 24, 88, 85, 86, 80, 86, 85, 79, 83, 78, 83),
        Player("PlayerB", "Sweden", 25, 84, 80, 83, 78, 82, 82, 76, 80, 75, 80),
        Player("PlayerC", "Sweden", 26, 86, 82, 85, 79, 84, 84, 78, 81, 76, 81),
        Player("PlayerD", "Sweden", 27, 82, 78, 81, 75, 79, 79, 73, 77, 74, 77),
        Player("PlayerE", "Sweden", 23, 80, 76, 78, 72, 76, 77, 70, 74, 72, 74)
    };

    Team team1("Astralis", team1Players);
    Team team2("NIP", team2Players);

    simulateMatch(team1, team2);

    return 0;
}
