#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

struct Car {
    string title;
    string model;
    string brand;
    string color;
    string typeOfWheels;
    string typeOfVehicle;
    string toyNumber;
    string collectorNumber;
    string seriesNumber;
    string asstNumber;
    string modelNumber;
    string Case;
    string scale;
    string barcode;
};

void DisplayMenu(){

    cout << "\n --- Diecast Collection Tracker --- \n";
    cout << "1. Add Car \n";
    cout << "2. Delete Car \n";
    cout << "3. View Collection \n";
    cout << "4. Search Menu \n";
    cout << "5. Load Collection \n";
    cout << "6. Save Collection \n";
    cout << "7. Exit \n";
}

//Todo void addCar(vector <Car> &collection)

//Todo void deleteCar(vector <Car> &collection)

//Todo void viewCollection(vector <Car> &collection)

//Todo void searchMenu()

//Todo void searchByTitle()

//Todo void searchBySeries()

//Todo void loadCollection()

//Todo void saveCollection()

int main(){

    vector <Car> collection;
    const string FILE_NAME = "Diecast_Collection.txt";
    int choice;

    do {
        DisplayMenu();
        cout << "Choose an option: ";
        cin >> choice;
        cin.ignore();


    }
    while (choice != 7);


    return 0;
}