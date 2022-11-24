// HARI OM 
#include<iostream>
#include <vector>

using namespace std;

vector<string> add_location(vector<string> locations){
    string location;
    cout << "Enter the location " << endl;
    cin >> location;
    locations.push_back(location);

    return locations;
}

void print_locations(vector<string> locations){
    for(int i=0;i<locations.size();i++){
        cout << locations[i] << endl;
    }
}

int main(){
    vector<string> locations;

    vector<vector<int>> main;

    cout << "Welcome to Flightfinder\n";
    cout << "1. Add location\n";
    cout << "2. Display locations\n";
    cout << "3. Exit setup\n";

    bool setup = true;
    while (setup){
        int i;
        cout << ">> ";
        cin >> i;
        switch (i)
        {
        case 1:
            locations = add_location(locations);
            break;
        case 2:
            print_locations(locations);
            break;
        case 3:
            setup = false;
            break;
        default:
            break;
        }
    }

    int size = locations.size();
    int mainarr[size][size];
    
    return 0;
}