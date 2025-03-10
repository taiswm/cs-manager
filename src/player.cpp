#include "../includes/player.h"
#include <iostream>




Player::Player(std::string name, std::string nationality, int age, int aim, int entry, int firepower, int clutching, int gamesense, int utility, int positioning)
: name(name), nationality(nationality), age(age), aim(aim), entry(entry), firepower(firepower), clutching(clutching), gamesense(gamesense), utility(utility), positioning(positioning) {
    calculateRating();
    }

    void Player::calculateRating() {
        rating = ((aim * 2) + entry + firepower + clutching + gamesense + (utility * 0.5) + (positioning * 0.5)) / 7;
    }

    void Player::displayInfo() const {
        std::cout << "Player: " << name << " (" << nationality << "), Age: " << age << std::endl;
        std::cout << "Rating: " << rating << "/100" << std::endl;
        std::cout << "Aim: " << aim << ", Entry: " << entry << ", Firepower: " << firepower << std::endl;
        std::cout << "Clutching: " << clutching << ", Gamesense: " << gamesense << ", Utility: " << utility << ", Positioning: " << positioning << std::endl;
        std::cout << "------------------------------------" << std::endl;
    }

std::string Player::getName() const { return name; }
std::string Player::getNationality() const { return nationality; }
int Player::getAge() const { return age; }
int Player::getRating() const { return rating; }
int Player::getAim() const { return aim; }
int Player::getEntry() const { return entry; }
int Player::getFirepower() const { return firepower; }
int Player::getClutching() const { return clutching; }
int Player::getGamesense() const { return gamesense; }
int Player::getUtility() const { return utility; }
int Player::getPositioning() const { return positioning; }


