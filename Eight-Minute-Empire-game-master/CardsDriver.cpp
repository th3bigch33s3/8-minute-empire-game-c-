#include <string>
#include <array>
#include "Cards.cpp"
#include <iostream>
#include <vector>

// the country class contains all the variables we need for every country  


using namespace std;

int main(){

// sets 42 objects of Card stored as an array

// an object player for test purposes of the exchnage method in the Hand class
Player playa;
class Deck cardspace;

cout<<"first card thrown in: "<< cardspace.deck[0].getAction() << + " "  + cardspace.deck[0].getGood()+ "\n";
cout<<"Size of DECK (REMAINING CARDS): " << cardspace.deck.size()<< "\n";

cardspace.shuffle();
// tests draw method 
cardspace.draw();
cardspace.draw();
cardspace.draw();
cardspace.draw();
cardspace.draw();
cardspace.draw();


cout<<"Sample SPace: " << cardspace.cardSpace[0].getAction() << " "  + cardspace.cardSpace[0].getGood()+ " \n";
cout<<"Sample SPace: " << cardspace.cardSpace[1].getAction() << " "  + cardspace.cardSpace[1].getGood()+ " \n";
cout<<"Sample SPace: " << cardspace.cardSpace[2].getAction() << " "  + cardspace.cardSpace[2].getGood()+ " \n";
cout<<"Sample SPace: " << cardspace.cardSpace[3].getAction() << " "  + cardspace.cardSpace[3].getGood()+ " \n";
cout<<"Sample SPace: " << cardspace.cardSpace[4].getAction() << " "  + cardspace.cardSpace[4].getGood()+ " \n";
cout<<"Sample SPace: " << cardspace.cardSpace[5].getAction() << " "  + cardspace.cardSpace[5].getGood()+ " \n";

// after draw checks the new top card
cout<<"new card at the top of the deck: " << cardspace.deck[0].getAction() << + " "  + cardspace.deck[0].getGood()+ " \n";


cout<<"Size of DECK (REMAINING CARDS): "<< cardspace.deck.size() << + "\n";

 // need to make this public or the function wont work because its not accessible
Hand hand;
// shows cards available in cardspace
hand.displayHand(cardspace.cardSpace);
// draw could delete the deck object and then transfer the contents into another array 
// 

// an int variable is passed to chose th ecards because i cant figure out how to receive input
// however once this issue is resolved within the method the user will be prompted to type in a value
// must pass by reference and pointers for it to work an modify the values
hand.Withdraw(&playa, &cardspace,4);// withdraw doesnt update 
// ******************************
// i did the withdraw wrong when a player takes a card, a new card is inserted at the end of the stack
// and all the other cards move to the left
// going to need two nested for loops, th efirst one for the cardspace
// then in the second loop if its empty skip, and then if it inst then assign it a value
// once its done 


cout<< "\nnumber of coins that you have :"<< playa.getCoins()<< "\n\n" ;
cout<<"\n";
playa.displayHand();
// the display hand does work so well

// check card number 3 on both the beginning display hand and this one.
hand.displayHand(cardspace.cardSpace);

// confirms that the withdraw method works but the varibale going sinde needs to be a ppinter
cout<<"Size of DECK (REMAINING CARDS): "<< cardspace.deck.size() << + "\n";


//cardspace.draw();

 //cout<<"size of deck" << cardspace.deck.size();
// problem is figuring out how to select a certain card. The cards align themsleves properly bt the numbner inputed 
// in the system doesnt read accoridng to the 0-n-1 rule



}
