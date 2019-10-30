
#ifndef MAP_H
#define MAP_H

#include <string>
#include <iostream>
#include <list>

using namespace std;

//struct for an adjacency list node
struct AdjListNode{
    int data;
    AdjListNode *next;
};

//struct for an adjacency list
struct AdjList{
    AdjListNode *head;  //pointer to head node of list
};

//struct for a graph. A graph as an array of adjacency lists
//Size of array will be V (total vertices)
struct Graph{
    int V;
    AdjList *arr;
};



#endif