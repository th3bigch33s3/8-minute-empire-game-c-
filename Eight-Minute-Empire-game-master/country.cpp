#include <string> 
#include <iostream>

using std::endl;

using std::cout;

class Country{
   private:  int ID , numOfSoldiers;
std::string name, owner,continent;

public: 
// getters 
int getID(){
    return ID;
}

int getNumOfSoldiers(){
    return numOfSoldiers;
}

std::string getName(){
    return name;
}
std::string getOwner(){
    return owner;
}
std::string getContinent(){
    return continent;
}

//setters

void setID(int id){
    ID= id;
}
void setNumOfSoldiers(int soldiers){
    numOfSoldiers = soldiers;
}
void setName(std::string country){
    name = country;
}
void setOwner(std::string player){
    owner = player;
}
void setContinent(std::string Continent) {
    continent = Continent;
    }
    
void displayInfo(){
        cout<< "\nPROPERTIES OF SELECTED TERRITORY  " << "\n"; 
    cout<< "Owner of Territory: " << getOwner() << "\n"; 
    cout<< "Country name: " << getName() << "\n"; 
    cout<< "Country ID: " << getID() << "\n"; 
    cout<< "Country Contenent: " << getContinent() << "\n"; 
    cout<< "Size Of Army: " << getNumOfSoldiers() << "\n"; 


}    

};