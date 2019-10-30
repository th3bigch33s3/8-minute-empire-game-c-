#include <iostream>
#include <string>
using namespace std;
#include "Player.h"

   
    //constructor
    Player::Player(){};
    
    Player::Player(string name, string color, int age, int tokens){
        playerName = name;
        playerAge = age;
        numOfTokens = tokens;
        armyColor = color;
        //Each player has 3 armies at the beginning of the game
        numOfArmies = 3;
        numOfCities = 0;
    }

    Player::~Player(void){
        //cout <<"object is deleted"<<endl;
    }
    
    //getter
    inline string Player::getPlayerName(){
        return playerName;
    }
    inline int Player::getPlyerName(){
        return playerAge;
    }
    inline int Player::getNumOfArmies(){
        return numOfArmies;
    }
    inline int Player::getNumOfCities(){
        return numOfCities;
    }
    inline int Player::getNumOfTokens(){
        return numOfTokens;
    }
    inline string Player::getArmyColor(){
        return armyColor;
    }
    inline int Player::getNumOfCards(){
        return numOfCards;
    }
    //setter
    inline void Player::setPlayerName(std::string name){
        playerName = name;
    }

    inline void Player::setPlayerAge(int age){
        playerAge = age;
    }
    
    inline void Player::setNumOfTkens(int tokens){
        numOfTokens = tokens;
    }
    
    inline void Player::setNumOfCities(int cities){
        numOfCities = cities;
    }
    
    inline void Player::setArmyColor(string color){
        armyColor = color;
    }
    
    //fuction
    /*
     Check if the player has enough coins before paying
     */
    void Player::payCoins(int coin){
        if (numOfTokens - coin >= 0) {
            numOfTokens -= coin;
        }else{
            cout << "Sorry, you do not have enough coin." << endl;
        }
    }
    
    
    /*
     1. which cities can place on
     2. choose a city
     3. add the army
     4. repeat till place all the armies
     */
    void Player::PlaceNewArmies(int army){
        if(numOfCities > 14){
            cout << "You cannot place armies any more" << endl;
        }else{
            //prompt the player which city he can place the army
            numOfArmies += army;
        }
    }
    
    /*
    1. choose one of armies
    2. which regions can the army move to
    3. move to the destination
     */
    void Player::MoveArimies(){
        cout << "Countries where you have arimies: " << endl;

        cout << "Please select one country"<<endl;

        cout << "You have X armies in this country" << endl;

        cout << "The army can be moved to ..., please select the destination"<<endl;
    }

    /*
    1. check if there exists an army that the play could move out
    2. which regions can the army move to
    3. move to the destination
     */
    void Player::MoveOverLand(){
        cout << "Sorry, you do not have an army that can be moved over land "<<endl;

        cout << "You can move armies over land from countries: x, x, x"<<endl;

        cout << "Which country you want to move the army out"<<endl;

    }

    /*
     1. which coutry can player build a city
     2. choose a country
     3. build city
     ======= city can be built in the coutry where the player have arimies ======
     */
    void Player::BuildCity(){
        if(numOfCities >3){
            cout << "You cannot build city any more"<<endl;
        }else{
            cout << "You can build a city in these countries: " << endl;
            cout << "Please select one country where you wanna build a city"<<endl;
            numOfCities += 1;
        }
    }

    /*
     1. choose a coutry
     2. show the army name
     3. choose an army u wanna destroy
     ======== if one of player' armies was destroyed by others,
     ======== their maximal number of armies will minus 1
     */
    void Player::DestryArmy(){
        cout << "Please select one country"<<endl;
        
        cout << "Please select the army you wannt destroy" << endl;
    }
    /*
    print the information of the player
    Name, age, tokens, army color, number of army
    */
   void Player::print(){
       cout <<"Player *[" << playerName << "]*, Age: " << playerAge;
       cout <<", has " << numOfArmies << "(" << armyColor << ") armies, ";
       cout <<numOfTokens << " tokens, " << numOfCities << " cities." << endl;
   }
