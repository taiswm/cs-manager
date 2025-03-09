#pragma once
#include <string>

class Player
{
private:
    std::string name;
    std::string nationality;
    int age;

    int rating; //Gennemsnit af alle andre attributter

    int aim ;
    int entry;
    int firepower;
    int clutching;
    int gamesense;
    int utility;
    int positioning ;

    void calculateRating();

public:

    Player(std::string name, std::string nationality, int age, int aim, int entry, int firepower, int clutching, int gamesense, int utility, int positioning);

    void displayInfo();

    std::string getName() const;
    std::string getNationality() const;
    int getAge() const;
    int getRating() const;
    int getAim() const;
    int getEntry() const;
    int getFirepower() const;
    int getClutching() const;
    int getGamesense() const;
    int getUtility() const;
    int getPositioning() const;
};