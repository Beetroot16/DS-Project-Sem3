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
        cout << locations[i] << " ";
    }
    cout << endl;
}

int get_index(vector<string> locations){
    string name;
    cout << "Enter the location\n";
    cin >> name;
    int index = -1;
    for(int i=0;i<locations.size();i++){
        if(locations[i] == name){
            index = i;
        }
    }
    return index;
}

int main(){
    vector<string> locations;

    cout << "Welcome to Flightfinder\n";
    cout << "\nTHIS IS THE SETUP\n\n";
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
    
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            mainarr[i][j] = 0;
        }
    }

    for(int i=0;i<size;i++){
        for(int j=i;j<size;j++){
            if(i != j){
                float time;
                cout << "Enter the flight time (in hours) from " << locations[i] << " to " << locations[j] << endl;
                cin >> time;
                mainarr[i][j] = time;
                mainarr[j][i] = time;
            }
        }
    }

    cout << "\nWELCOME TO FLIGHTFINDER\n\n";
    cout << "1. Display the matrix\n";
    cout << "2. Find index\n";
    while(true){
        int inp;
        cout << ">> ";
        cin >> inp;
        switch(inp)
        {
        case 1:
            for(int i=0;i<size;i++){
                for(int j=0;j<size;j++){
                    cout << mainarr[i][j] << " ";
                }
                cout << "\n";
            }
            break;
        case 2:
            int inedex;
            inedex = get_index(locations);
            cout << inedex;
            break;
        default:
            break;
        }
    }
    return 0;
}