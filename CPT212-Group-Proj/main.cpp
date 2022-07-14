/*
    The cities number encodeing:
    0. Monaco, Monaco
    1. Mostar, Bosnia and Herzegovina
    2. Madrid, Spain
    3. Yerevan, Armenia
    4. Boston, United States
*/

#include "Graph.h"
using namespace std;

int main()
{
    Graph g;
    int choice, v, u;
    do {
        // Show the menu of the program.
        cout << "|******Menu******|" << endl
             << "|1. Show Graph\n"
             << "|2. Add New Edge\n"
             << "|3. Remove Edge\n"
             << "|4. Check Strong Connectivity of the Graph\n"
             << "|5. Check if the graph has a cycle\n"
             << "|6. Find the shortest path between two cities\n"
             << "|7. Reset Graph\n"
             << "|8. Exit Program\n\n"
             << "|Choice: ";
        cin >> choice;
        system("cls");

        switch (choice) {
            // Show the graph.
        case 1:
            cout << "Show Graph\n";
            cout << "0: MC      1: MO       2: MD       3: EVN       4: BOS\n\n";
            g.print();
            break;
            // Add new edge to the graph.
        case 2:
           
            break;
            // Remove an edge from the graph.
        case 3:
            
            break;
            // Check whether the graph is strong connected.
        case 4:
            
            break;
            // Check whehter the graph has a cycle.
        case 5:
            
            break;
            // Find the shortest path between two vertices.
        case 6:
            cout << "Find the shortest path between two cities.\n";
            cout << "0: MC      1: MO       2: MD       3: EVN       4: BOS\n\n";
            // Get vertex and adjacent vertex from the user.
            cout << "Enter a city: "; cin >> v;
            cout << "Enter the adjacent city: "; cin >> u;
            g.findShortestPath(v, u);
            break;
            // Reset graph.
        case 7:
            g.resetGraph();
            cout << "The graph is reset.\n\n";
            break;
        default:
            break;
        }
        system("pause");
        system("cls");
    } while (choice != 8);
    return 1;
}
