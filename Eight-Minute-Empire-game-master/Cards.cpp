#include <iostream>
#include <string>
#include <array>
#include <vector>
#include "Cards.h"


using namespace std;

class Card {

private:
std::string good, action, shuffled;

// goods: crystal, anvil, carrot, tree?
// action: place new armies, move armies, move over land/water (can move between different ontinents connected by water), 
// action: build a city, destroy army, and/or actions





public:
// setters
void setGood(std::string g){
    good = g;
}
void setAction(std::string a){
    action = a;
}

void setShuffled(std::string s){
    shuffled = s;
}

// getters
std::string getGood(){
    return good;
}
std::string getAction(){
    return action;
}

std::string getShuffled(){
    return shuffled;
}

};




// should push all of the elements of the array into the vector

// once you complete the CODE FIGURE OUT THE FOLLOWING: ***************************
// how to make the cards random, in otherwords figure out a way to shuffle the
// the cards constantly in the vector
// figure out how to implement the and/or action on the cards


// stores 6 cards in the cards space for users to pick from



// goods: crystal, anvil, carrot?
// action: place new armies, move armies, move over land/water (can move between different ontinents connected by water), 
// action: build a city, destroy army, and/or actions


// a forloop to set all of the 42 cards
// it has to set the action and good of the card
// it also has to store it in the vector 
class Deck {
public:
Card cards[42]; // creates all the available playing cards for the game 
vector<Card> deck; // contains all of the available playing cards
vector<Card> cardSpace;
Deck(){
for(int i =0; i<42; i++){

// sets the action
    if( i%6==0){
        cards[i].setAction("ACTION: place new armies");
    }
    if( i%6==1){
        cards[i].setAction("ACTION: move armies");
    }
    if( i%6==2){
        cards[i].setAction("ACTION: move over land/water");
    }
    if( i%6==3){
        cards[i].setAction("ACTION: build a city");
    }
    if( i%6==4){
        cards[i].setAction("ACTION: destroy army");
    }
    if( i%6==5){
        cards[i].setAction("ACTION: and/or action");
    }

    /// sets the goods

    if(i%3==0){
        cards[i].setGood("GOOD: carrot");
    }

    if(i%3==1){
        cards[i].setGood("GOOD: anvil");
    }
    
    if(i%3==2){
        cards[i].setGood("GOOD: crystal");
    }
    
    // puts the card into deck
    deck.push_back(cards[i]);
}
} // deck default construtor


// draw() method that allows a player to draw a card from the cards 
//remaining in the deck and place it card space.
void draw(){
    // store temperary variables to transfer over in the cardspace from the deck
    std::string temp_Good = deck[0].getGood() ;
    std::string temp_Action =deck[0].getAction() ;

// creates a newcard object which will be stored in the cardspace with
// the same contents as the original card taken out from the deck
    Card newcard;
    newcard.setAction(temp_Action);
    newcard.setGood(temp_Good);

deck.erase(deck.begin()); // removes element from the beginning

// inserts a new card into the cardspace
//cardSpace.push_back(newcard);
cardSpace.insert(cardSpace.begin(), newcard);

}

// shuffle to shuffle the deck 

void shuffle(){
Card temp[42]; // creates a temp variable to store cards 

for(int i =0; i<42; i++){ // copys the cards to the array 
    temp[i] = deck[i];
    
}

 // deletes all the objects in the vector
for(int i =0; i< 42; i++){
    deck.erase(deck.begin()); // removes all the elements of the vector
}

bool empty = false;  // keeps track if the array is empty or not 


// runs through till the array is not empty and randomnly adds the cards to the deck
while(!empty){

// a forloop to check whether the array is empty
for(int i =0; i<42; i++){
int emptyCheck =0; // if this is 41 then we know that all are array positions are empty

if(temp[i].getShuffled()=="yes"){
    emptyCheck++;
}

if(emptyCheck == 41){
    empty = true;
}

} // end of checking if the array is empty 

// have to put a random number from the array and set it
if(!empty){
int randNum = rand() % 42; // selects a random number from 0-41
   deck.push_back(temp[randNum]); // inserts the randomly chosen card at the back of the vector
    temp[randNum].setShuffled("yes"); // the cardhas now been shuffled
}



}





}





// takes a card from the top of the deck and replaces it 
// this can replace draw for a specific space 
// the variable int being entered in here will already be decremented by 1 so no need to do that again
/*
void replaceCard(int replace){


  // store temperary variables to transfer over in the cardspace from the top of the deck
    std::string temp_Good = deck[10].getGood() ;
    std::string temp_Action =deck[10].getAction() ;

// creates a newcard object which will be stored in the cardspace with
// the same contents as the original card taken out from the deck
    Card newcard;
    newcard.setAction(temp_Action);
    newcard.setGood(temp_Good);

deck.erase(deck.begin()); // removes element from the beginning

// inserts a new card into the cardspace at the same spot
cardSpace.insert(cardSpace.begin()+replace, newcard);



}*/



};


class Player{
public: 
// used as an example for now
int coins = 10;
vector<Card> playerHand;


int getCoins(){
    return coins;
}

void setCoins(int currency){
    coins = currency;
}

// adds a card object to the players hand vector 
void addCard(class Deck *card, int p){
    playerHand.insert(playerHand.begin(), card->cardSpace[p]);

}

void displayHand(){

    for( int i =0; i<playerHand.size(); i++){
        cout<< "Your Hand\n------------------------------------\n";
        cout<< playerHand[i].getAction() + " " + playerHand[i].getGood() + "\n";
    }

}



};


class Hand{
    public: // need to make this public or the function wont work because its not accessible
   vector<Card> cardspace;

// sets the cards in the vector as soon as you make it.
   /*
    Hand(vector<Card> card){
        for(int i =0; i<card.size(); i++){
            cardspace.insert(cardspace.begin(),card[i]);
        }
        
    }
    */



    // Just  a player class  bcause the input option can be made directly in here 
// argument parameter will be an int for the input option as in which card is selected
// and also a player object to be able to access the coins of the player to purchase

// must pass by reference and pointers for it to work an modify the values

/// my withdraw doesnt update properly 
    void Withdraw(Player *playa, class Deck *deck, int num){
        int price=0;
        int balance;
        //*************************
        // the system is backwards so if you have card 4 you actually have to set it to 2
        if(num==4)
        num=2;

        int cardNum=num;
        cout<< "Which card will you chose?\nType in a number from 1 to 6: ";

    // assigns the input variable to cardNum 
        //cin>> cardNum;

    if(cardNum ==2){
        //

// have to set if conditions for the amout of coins if you have neough buy it if not display choose a new card

    // for the purpose of the assigment we assume its a success
    price = 2;
    balance = playa->getCoins() - price;
    playa->setCoins(balance);

        cout<< "You now have Card #4and still have "<< playa->getCoins() << " coins remaining";
        // adds card to players hand

// probelm lies within the deck class where the cardspace has a certain amount that we cant see.

       playa->addCard(deck,cardNum);
        //playa->addCard(cardspace[cardNum-1]);

        // good up till here************************
        // have to replace the card at the end of the stack and shift all other cards to the right

        // deletes the card from cardspace once added
        // mght be a conflict with the hand and the replace method 

        // erases the card we select
        deck->cardSpace.erase(deck->cardSpace.begin() + cardNum);

        // just simply add to the  beginning

        //deck->cardSpace.push_back(deck->deck[deck->deck.size()]);
        deck->cardSpace.insert(deck->cardSpace.begin(), deck->deck[deck->deck.size()]);

        // add a new card to the card space = replace the deleted card from the deck of totoal cards
        deck->deck.erase(deck->deck.begin());

        // we need to updat the actual cardspace in deck not in here 




    }





    }


    void displayHand(vector<Card> card){
        // delete all the old cards in cardspce
       
       // have to se the size of the vector and check to see if the cardapce is an empty vector or not
       // if you do not do this it will result in an error.

       //bool change;

       if(!cardspace.empty()){

      for(int i =0; i<card.size(); i++){
          cardspace.erase(cardspace.begin());
        }

       }
       
       if(cardspace.empty()){

      for(int i =0; i<card.size(); i++){
          cardspace.insert(cardspace.begin(),card[i]);
        }

       }
/*
       else{

           for(int i =0; i<card.size(); i++){
               if(cardspace[i].getAction()==card[i].getAction() && cardspace[i].getGood() == card[i].getGood()){
                   continue;
               }
               else{
                   cardspace.erase(cardspace.begin()+i);
                   cardspace.insert(cardspace.begin()+i, card[i]);
                 //  change = true;
               }

           }

       }

*/
        // make a for loop that compares all elements inthe vectors and if its different then switch stuff around


        
    
        cout<<"DISPLAYING CARDS:" << "\n--------------------------------------------------------\n";
//cardspace.size()
/*
if(change){
      for(int i =0; i<cardspace.size(); i++){
            cout<< "Card " << i+1 << " :\n" << cardspace[5-i].getAction() + " " + cardspace[5-i].getGood();

            if(i==0){
                cout<< "\nCoin Cost: 0";
                cout<< "\n--------------------------------------\n";
            }
            else if(i==1){
                cout<< "\nCoin Cost: 1";
                cout<< "\n--------------------------------------\n";

            }
            else if(i==2){
                cout<< "\nCoin Cost: 1";
                 cout<< "\n--------------------------------------\n";

            }
            else if(i==3){
                cout<< "\nCoin Cost: 2";
                cout<< "\n--------------------------------------\n";

            }
            else if(i==4){
                cout<< "\nCoin Cost: 2";
                 cout<< "\n--------------------------------------\n";

            }   
            else if(i==5){
                cout<< "\nCoin Cost: 3";
                 cout<< "\n--------------------------------------\n";

            }

            
        }
}

*/

//if(!change){
  for(int i =0; i<cardspace.size(); i++){
            cout<< "Card " << i+1 << " :\n" << cardspace[i].getAction() + " " + cardspace[i].getGood();

            if(i==0){
                cout<< "\nCoin Cost: 0";
                cout<< "\n--------------------------------------\n";
            }
            else if(i==1){
                cout<< "\nCoin Cost: 1";
                cout<< "\n--------------------------------------\n";

            }
            else if(i==2){
                cout<< "\nCoin Cost: 1";
                 cout<< "\n--------------------------------------\n";

            }
            else if(i==3){
                cout<< "\nCoin Cost: 2";
                cout<< "\n--------------------------------------\n";

            }
            else if(i==4){
                cout<< "\nCoin Cost: 2";
                 cout<< "\n--------------------------------------\n";

            }   
            else if(i==5){
                cout<< "\nCoin Cost: 3";
                 cout<< "\n--------------------------------------\n";

            }

            
        }

//}
      

    }




    


};




