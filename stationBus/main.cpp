#include <iostream>
#include<map>
#include<vector>
#include<string>
using namespace std;

class BusStation{
public:
    BusStation(){
        counter = 0;
    }

    string addBus(vector<string> station){
        if(busStation.count(station) > 0){
            return "Already exists for " + to_string(busStation[station]);
        }else{
            counter++;
            busStation[station] = counter;
            return "New bus " + to_string(counter);
        }
    }

private:
    map<vector<string>, int> busStation;
    int counter;
};
int main()
{
    BusStation busStation;
    int numberOperation;
    cin >> numberOperation;
    for(int i(0); i < numberOperation; i++){
        int numberStation;
        vector<string> stations;
        string station;
        cin >> numberStation;
        for(int indexStation(0); indexStation < numberStation; indexStation++){
            cin >> station;
            stations.push_back(station);
        }
        cout << busStation.addBus(stations) << endl;
    }
    return 0;
}
