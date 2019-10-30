//
//  PlayerDriver.cpp
//  COMP345


#include <iostream>
#include "Player.cpp"
#include <string>
//#include "Map.cpp"
//#include "Cards.cpp"
using namespace std;

int main() {
    cout << "Welcome to Eigth Minute Empire!!!" << endl;
    //prompt the user input the number of players
    int num, *num_ptr = new int;
    num_ptr = &num;
    do{
        cout << "Please set the number of players: ";
        cin >> *num_ptr;
        cout << endl;
        if(*num_ptr <= 1 || *num_ptr > 5)
            cout << "Invalid number of players (2 - 5), please input again." << endl;
    }while (*num_ptr <=1 || *num_ptr > 5);
    //Creates players array
    Player *plys = new Player[*num_ptr];
    // determine the initial number of tokens of each player
    int each_token, *token_ptr;
    token_ptr = &each_token;
    if(*num_ptr == 5){
        *token_ptr = 8;
    }else if (*num_ptr == 4){
        *token_ptr = 9;
    }else if (*num_ptr == 3){
        *token_ptr = 11;
    }else if (*num_ptr == 2){
        *token_ptr = 14;
    }
    string name, *name_ptr, color, *color_ptr;
    int age, *age_ptr;
    name_ptr = &name, color_ptr = &color;
    age_ptr = &age;
    for(int i =0 ; i < *num_ptr; i++){
        cout << "**********Set information of Player No." << (i+1) << "**********"<< endl;
        
        cout << "Pleas input the player name: ";
        cin >> *name_ptr;
        cout << endl;
        cout << "Pleas determine the color of the army: ";
        cin >> *color_ptr;
        cout << endl;
        cout << "Pleas input the player age: ";
        cin >> *age_ptr;
        cout << endl;
        plys[i] = Player(*name_ptr, *color_ptr, *age_ptr, *token_ptr);
    }
    cout << endl;
    cout << endl;
    //displayer the successful information
    cout << "!!!!!!!!!!Congratulations!!!!!!!!!!";
    cout << "Player infromation displayed below:" << endl;
    cout << endl;
    for(int i = 0; i < *num_ptr; i++){
        plys[i].print();
        cout << endl;
    }
    cout << endl;
    cout << endl;


    //destructors
    //delete token_ptr;
    //delete num_ptr;
    //num_ptr = NULL;
    //, name_ptr, color_ptr, age_ptr;
    //num_ptr = NULL, plys = NULL, token_ptr =NULL, name_ptr = NULL, color_ptr = NULL, age_ptr = NULL;
    //delete[] plys;
    return 0;
}
