// each line shoudl have a certain numbe rof words always so we can ready all the words by taking the
// modulo of each array index of the word from the file.

#include "Map.cpp"
#include <string>
#include <array>

// the country class contains all the variables we need for every country  


using namespace std;

int main(){
//create a new graph
    int totalVertices=25;
    Graph *graph;
    graph=createGraph(totalVertices);
    //connect edges

// testing output 
  Country countries[25];

    // to get size of an array =  sizeof(countries)/sizeof(countries[0])
    // cout<< sizeof(countries)/sizeof(countries[0]);


/*
EDGES AND HOW TO CONNECT THEM AND WHERE THEY CONNECT TO -> REFER TO THE MAP 
******
    HAVE TO CHANGE THE ADDING OF THE EGDES FUNCTION IN ORDER TO BE ABLE
    TO ADD AN OBJECT/ STRING AND NOT RELY ON THE NUMBER WILL HAVE TO PLAY AROUND
    WITH THE STRUCT AND AND THE VARIABLE TYPES OF THE ARRAYS 
******************************
NUMBERING SYSTEM TO TEST ALL TERITORIES:
C1
****************
CHEN CHEN:0
AZAROTH:3
KALIMDORE:2
TINO:1
QUEBEC:4
HERSHY:5
LEGO:6
C2
*************
ICE: 17
MGILL: 21
CONCORDIA: 20
DRAGON: 18
EAGLE: 15
SHARK: 19
JAPAN: 16
STORMWIND: 12
TOM CREWS: 10
RICE: 9
DANGER: 13
THE HIDDEN LEAF: 14
KOALA: 11
C3
************
PANDORIA:7
TAIWAN:8
C4
***********
COLD: 24
WILDER: 23
FURY: 22
CONTINENT 1:
CHEN CHEN -> AZAROTH, KALIMDORE, TINO
AZAROTH -> ICE, KALIMDORE
KALIMDORE -> QUEBEC, TINO
TINO -> HERSHEY, QUEBEC
QUEBEC -> TOM CREWS
HERSHEY -> LEGO
LEGO -> PANDORIA
CONTINENT 3:
PANDORIA -> TAIWAN
TAIWAN -> RICE
CONTINENT 2:
RICE -> TOM CREWS, STORMWIND, DANGER, KOALA
KOALA -> DANGER, COLD
DANGER -> THE HIDDEN LEAF
STORMWIND -> DANGER, EAGLE, SHARK, TOM CREWS, JAPAN
EAGLE -> DRAGON
DRAGON -> CONCORDIA, FURY 
CONCORDIA -> MCGILL 
MCGILL -> ICE
ICE-> JAPAN
JAPAN-> SHARK
CONTINENT 4:
COLD -> WILDER
WILDER -> FURY
*/
// THIS SETS UP ALL EDGES FOR THE DEFAULT GAME BOARD ***************************

//CHEN CHEN
    addEdge(graph,0,3);
    addEdge(graph,0,2);
    addEdge(graph,0,1);

// AZAROTH
    addEdge(graph,3,17);
    addEdge(graph,3,2);

//KALIMDORE
    addEdge(graph,2,4);
    addEdge(graph,2,1);

//TINO
    addEdge(graph,1,5);
    addEdge(graph,1,4);

// QUEBEC
    addEdge(graph,4,10);

// HERSHEY
    addEdge(graph,5,6);

// LEGO 
    addEdge(graph,6,7);

// PANDORIA
    addEdge(graph,7,8);

// TAIWAN
    addEdge(graph,8,9);

// RICE
    addEdge(graph,9,10);
    addEdge(graph,9,12);
    addEdge(graph,9,13);
    addEdge(graph,9,11);

// KOALA 
    addEdge(graph,11,13);
    addEdge(graph,11,24);

// DANGER
    addEdge(graph,13,14);

//STORMWIND
    addEdge(graph,12,13);
    addEdge(graph,12,15);
    addEdge(graph,12,19);
    addEdge(graph,12,10);
    addEdge(graph,12,16);

// EAGLE
    addEdge(graph,15,18);

// DRAGON
    addEdge(graph,18,20);
    addEdge(graph,18,22);

// CONCORDIA
    addEdge(graph,20,21);

// MCGILL
    addEdge(graph,21,17);

// ICE 
    addEdge(graph,17,16);

// JAPAN
    addEdge(graph,16,19);

// COLD
    addEdge(graph,24,23);

// WILDER
    addEdge(graph,23,22);


// need to put a forloop to initlize the components of all the classes of country
// also need to create an array of country classes and store the id.

// requirement = each country has a name and belongs to 1 continent

for(int i =0; i<sizeof(countries)/sizeof(countries[0]); i++){
    countries[i].setID(i); // sets the unique ID to the corresponding object

 // if statements are to assign the correct ID'S to the proper country and continents;


// FOR CONTINENT C1 **********************************************************

            if(i==0){
                countries[i].setName("Chen Chen");
                countries[i].setContinent("C1");
            }

             else if(i==1){
                countries[i].setName("Tino");
                countries[i].setContinent("C1");
            }
             else if(i==2){
                countries[i].setName("Kalimdore");
                countries[i].setContinent("C1");
            }
             else if(i==3){
                countries[i].setName("Azaroth");
                countries[i].setContinent("C1");
            }
             else if(i==4){
                countries[i].setName("Quebec");
                countries[i].setContinent("C1");
            }
             else if(i==5){
                countries[i].setName("Hershy");
                countries[i].setContinent("C1");
            }
             else if(i==6){
                countries[i].setName("Lego");
                countries[i].setContinent("C1");
            }
// END OF CONTINENT C1 **********************************************************



// FOR CONTINENT C2 **********************************************************
            else if(i==17){
                countries[i].setName("Ice");
                countries[i].setContinent("C2");
            }

             else if(i==21){
                countries[i].setName("Mcgill");
                countries[i].setContinent("C2");
            }

             else if(i==20){
                countries[i].setName("Concordia");
                countries[i].setContinent("C2");
            }

            else if(i==18){
                countries[i].setName("Dragon");
                countries[i].setContinent("C2");
            }

            else if(i==15){
                countries[i].setName("Eagle");
                countries[i].setContinent("C2");
            }

             else if(i==19){
                countries[i].setName("Shark");
                countries[i].setContinent("C2");
            }

             else if(i==16){
                countries[i].setName("Japan");
                countries[i].setContinent("C2");
            }

             else if(i==12){
                countries[i].setName("Stormwind");
                countries[i].setContinent("C2");
            }

            else if(i==10){
                countries[i].setName("Tom Crews");
                countries[i].setContinent("C2");
            }

            else if(i==9){
                countries[i].setName("Rice");
                countries[i].setContinent("C2");
            }
            else if(i==13){
                countries[i].setName("Danger");
                countries[i].setContinent("C2");
            }
            else if(i==14){
                countries[i].setName("The Hidden Leaf");
                countries[i].setContinent("C2");
            }
            else if(i==11){
                countries[i].setName("Koala");
                countries[i].setContinent("C2");
            }

 // END OF CONTINENT C2 **********************************************************







 // FOR CONTINENT C3 **********************************************************

            else if(i==7){
                countries[i].setName("Pandoria");
                countries[i].setContinent("C3");
            }

            else if(i==8){
                countries[i].setName("Taiwan");
                countries[i].setContinent("C3");
            }


 // END OF CONTINENT C3 **********************************************************



 // FOR CONTINENT C4 **********************************************************

            else if(i==24){
                countries[i].setName("Cold");
                countries[i].setContinent("C4");
            }

            else if(i==23){
                countries[i].setName("Wilder");
                countries[i].setContinent("C4");
            }

            else if(i==22){
                countries[i].setName("Fury");
                countries[i].setContinent("C4");
            }
 // END OF CONTINENT C4 **********************************************************




} // end of for loop

    // tests the output of a random territory's continent, name, and unqiue ID
    cout<< countries[4].getName() << " " << countries[4].getID() <<  " " +  countries[4].getContinent() + "\n";
    cout<< countries[12].getName() << " " << countries[12].getID() << " " + countries[12].getContinent() + "\n";
    cout<< countries[14].getName() << " " << countries[14].getID() <<  " " +  countries[14].getContinent() + "\n";

    // the atk method tests the validity of the graph and 
    // gives proof of the adjacecy of the territories
    atk(graph,countries[0],countries[21]);
    atk(graph,countries[0],countries[1]);
    atk(graph,countries[4],countries[11]);
    atk(graph,countries[4],countries[12]);
    atk(graph,countries[23],countries[14]);
    atk(graph,countries[4],countries[10]);
    atk(graph,countries[22],countries[23]);


    countries[1].displayInfo();

    //print the adjacency list representation of graph
    printGraph2(graph,countries);


}