#include "Graph.h"

void Graph::initialize()
{
	// clearing all the contents of the adjacency list
	for (int i = 0; i < myList.size(); ++i)
		myList[i].clear();
	myList[0].push_back(node(4, 1));
	myList[0].push_back(node(2, 1));
	myList[1].push_back(node(2, 5));
	myList[2].push_back(node(3, 3));
	myList[3].push_back(node(0, 4));
	myList[4].push_back(node(3, 6));

}


Graph::Graph() {
	initialize();
}

//function for debugging
void Graph::print() {
	for (int i = 0; i < myList.size(); ++i)
		loopover(myList[i], i);
}

// function for debugging
void Graph::loopover(vector<node>& v, int num) {
	cout << "Displaying vector num : " << num << endl;
	for (node n : v)
		cout << num << " is connected to " << n.num << " with length of " << n.edgeLen << endl;
	cout << endl;
}