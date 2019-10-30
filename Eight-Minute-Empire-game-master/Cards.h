#include <iostream>
#include <string>
#include <vector>
#include <array>

using namespace std;





// goods: crystal, anvil, carrot, tree?
// action: place new armies, move armies, move over land/water (can move between different ontinents connected by water), 
// action: build a city, destroy army, and/or actions


// setters
void setGood(std::string g);
void setAction(std::string a);

// getters
std::string getGood();
std::string getAction();



// deck default construtor
void Deck(class Deck *card, int p);


// draw() method that allows a player to draw a card from the cards 
//remaining in the deck and place it card space.
void draw();


int getCoins();

void setCoins(int currency);

// adds a card object to the players hand vector 

// prints out the hand of the cardspace
void displayHand();



    // Just  a player class  bcause the input option can be made directly in here 
// argument parameter will be an int for the input option as in which card is selected
// and also a player object to be able to access the coins of the player to purchase
// must pass by reference and pointers for it to work an modify the values
    void Withdraw();



// displays the han dof the player 
    void displayHand();


