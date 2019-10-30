#ifndef PLAYER_H
#define PLAYER_H


#include <iostream>
#include <string>
using namespace std;

class Player{
    public:
    // default constructor
    Player();
    // argument constructor
    Player(string name, string color, int age, int tokens);
    //destructor
    ~Player();
    //getter
    string getPlayerName();
    int getPlyerName();
    int getNumOfArmies();
    int getNumOfCities();
    int getNumOfTokens();
    string getArmyColor();
    int getNumOfCards();
    //setter
    void setPlayerName(string name);

    void setPlayerAge(int age);
    
    void setNumOfTkens(int tokens);
    
    void setNumOfCities(int cities);
    
    void setArmyColor(std::string color);
    
    //fuction
    /*
     Check if the player has enough coins before paying
     */
    void payCoins(int coin);
    
    
    /*
     1. which cities can place on
     2. choose a city
     3. add the army
     4. repeat till place all the armies
     */
    void PlaceNewArmies(int army);
    
    /*
    1. choose one of armies
    2. which regions can the army move to
    3. move to the destination
     */
    void MoveArimies();

    /*
    1. choose one of armies
    2. which regions can the army move to
    3. move to the destination
     */
    void MoveOverLand();

    /*
     1. which coutry can player build a city
     2. choose a country
     3. build city
     */
    void BuildCity();

    /*
     1. choose a coutry
     2. show the army name
     3. choose an army u wanna destroy
     */
    void DestryArmy();
    //method that prints the details of the player
    void print();
    

    //
    private:
    //delcare the palyer's name
    string playerName;
    //declare the player age
    int playerAge;
    //3 armies at the beginning
    int numOfArmies;
    string armyColor;
    //declare the number of cities, and defualt value is 3
    int numOfCities;
    //declare the number of tokens
    int numOfTokens;
    //the number of card
    int numOfCards;
};

#endif