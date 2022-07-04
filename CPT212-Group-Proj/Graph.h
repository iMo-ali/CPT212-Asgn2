#pragma once

#ifndef GRAPH.H

#define GRAPH
#include<vector>
#include <string>
#include <iostream>
using namespace std;
const string CITY_NAMES[5] = { "Monaco, Monaco","Mostar, Bosnia and Herzegovina",
							"Madrid, Spain", "Yerevan, Armenia", "Boston, United States"};
struct node {
	int num{};
	int edgeLen{};
	node(int num = 0, int edgeLen = 0) : num(num), edgeLen(edgeLen){} // alternate constructor
	void operator=(const node& right) {
		this->num = right.num;
		this->edgeLen = right.edgeLen;
	}
	bool operator==(int val) { 
		return this->num == val;
	}


};
typedef vector<vector<node>> AdjList;

class Graph
{
private:
	AdjList myList{5};
	void initialize();
	void generateRandomEdge();
	// function for debugging
	void loopover(vector<node>& v, int num);
public:
	Graph();
	void reset();
	void removeEdge(int start, int end);
	void checkStronglyConnected();
	void detectCycle();
	void shortestPath(int start, int end);
	void findMST(vector<int>& vertecies);
	//function for debugging
	void print();

};

#endif