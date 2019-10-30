/*
    Graph implementation following  sample code using agencyList
*/
#include<iostream>
#include<cstdlib>
// since the country file is included in here we do not need to include it in the driver
#include "country.cpp"
#include "Map.h"

using namespace std;

//create a new node
AdjListNode* newAdjListNode(int data){
    AdjListNode *nptr=new AdjListNode;
    nptr->data=data;
    nptr->next=NULL;
    return nptr;
}

//function to create a graph of V - vertices
Graph* createGraph(int V){
    Graph *graph=new Graph;
    graph->V=V;
    //create an array of adjacency list. size of array - V
    graph->arr=new AdjList[V];
    //initialize with NULL (e.g root=NULL)
    for(int i=0;i<V;i++){
        graph->arr[i].head=NULL;
    }
    return graph;
}

//destructors
AdjListNode::~AdjListNode()
{
    delete next;
    next = null;

    delete data;
}

AdjList::~AdjList()
{
    delete head;
    head = null;
}

Graph::~Graph()
{
    delete arr;
    arr = null;

    delete V;
}


//add an edge to an undirected Graph
void addEdge(Graph *graph,int src,int dest){
    //Add an edge from src to dest. A new node added to the adjacency list of src
    //node added at beginning
    AdjListNode *nptr=newAdjListNode(dest);
    nptr->next=graph->arr[src].head;
    graph->arr[src].head=nptr;
    //connect from dest to src (since undirected)
    nptr=newAdjListNode(src);
    nptr->next=graph->arr[dest].head;
    graph->arr[dest].head=nptr;
}


//function to print the graph
void atk(Graph* graph, Country atk, Country dfn){
//loop over each adjacent list
    bool hit = false;
    
        AdjListNode *root=graph->arr[atk.getID()].head;
        cout<<"Attacking from "<<atk.getName()<< " to territory " << dfn.getName()<<endl;
        //loop over each node in list
        while(root!=NULL){
            if(root->data == dfn.getID()){
                cout<<" The country can be hit are you sure you want to proceed? ";
                 cout<<endl;
                 hit = true;
            }
            
            root=root->next;
        }
       
       if(hit == false){
        cout<<" The country cannot be attacked at this distance";

       }
    
}

// for the default game
//function to print the graph
void printGraph2(Graph* graph, Country c[]){
//loop over each adjacent list
    for(int i=0;i<graph->V;i++){
        AdjListNode *root=graph->arr[i].head;
        cout<<"Adjacency list of vertex "<<c[i].getName()<<endl;
        //loop over each node in list
        while(root!=NULL){

// have to figure out how to make this whole stateent generic 
            if(root->data == c[0].getID()){
                cout<<c[0].getName()<< " ->";
            }

// FOR CONTINENT C1 **********************************************************

             else if(root->data == c[1].getID()){
                cout<<c[1].getName()<< " ->";
            }
             else if(root->data == c[2].getID()){
                cout<<c[2].getName()<< " ->";
            }
             else if(root->data == c[3].getID()){
                cout<<c[3].getName()<< " ->";
            }
             else if(root->data == c[4].getID()){
                cout<<c[4].getName()<< " ->";
            }
             else if(root->data == c[5].getID()){
                cout<<c[5].getName()<< " ->";
            }
              else if(root->data == c[6].getID()){
                cout<<c[6].getName()<< " ->";
            }
            
// END OF CONTINENT C1 **********************************************************

// FOR CONTINENT C2 **********************************************************
             else if(root->data == c[17].getID()){
                cout<<c[17].getName()<< " ->";
            }
             else if(root->data == c[21].getID()){
                cout<<c[21].getName()<< " ->";
            }
             else if(root->data == c[20].getID()){
                cout<<c[20].getName()<< " ->";
            }
             else if(root->data == c[18].getID()){
                cout<<c[18].getName()<< " ->";
            }

             else if(root->data == c[15].getID()){
                cout<<c[15].getName()<< " ->";
            }
            else if(root->data == c[19].getID()){
                cout<<c[19].getName()<< " ->";
            }

            else if(root->data == c[16].getID()){
                cout<<c[16].getName()<< " ->";
            }
             else if(root->data == c[12].getID()){
                cout<<c[12].getName()<< " ->";
            }

             else if(root->data == c[10].getID()){
                cout<<c[10].getName()<< " ->";
            }

             else if(root->data == c[9].getID()){
                cout<<c[9].getName()<< " ->";
            }

             else if(root->data == c[13].getID()){
                cout<<c[13].getName()<< " ->";
            }

             else if(root->data == c[14].getID()){
                cout<<c[14].getName()<< " ->";
            }
            else if(root->data == c[11].getID()){
                cout<<c[11].getName()<< " ->";
            }
          
 // END OF CONTINENT C2 **********************************************************

 // FOR CONTINENT C3 **********************************************************
             else if(root->data == c[7].getID()){
                cout<<c[7].getName()<< " ->";
            }

            else if(root->data == c[8].getID()){
                cout<<c[8].getName()<< " ->";
            }

 // END OF CONTINENT C3 **********************************************************

 // FOR CONTINENT C4 **********************************************************
             else if(root->data == c[24].getID()){
                cout<<c[24].getName()<< " ->";
            }
           else if(root->data == c[23].getID()){
                cout<<c[23].getName()<< " ->";
            }

             else if(root->data == c[22].getID()){
                cout<<c[22].getName()<< " ->";
            }

 // END OF CONTINENT C4 **********************************************************
 
            //cout<<root->data<<" -> ";
            root=root->next;
        }
        cout<<endl;
    }
}

