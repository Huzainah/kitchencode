//
//  kitchen.cpp
//  Kitchen
//
//  Created by Huzainah Shah on 27/11/2020.
//

#include "kitchen.h"
#include <iostream>
#include <vector>
#include <string>

using namespace std;


void chooseVeg(vector<string> veg){
    
    for (int i=0; i <= veg.size(); i++) {
        string a;
        cin >> a;
        if(a == "."){
            break;
        }else
        veg.push_back(a);
    }
    
}

void chooseSpices(vector<string> spices ){
    for(int i=0;i<= spices.size();i++){
        string a;
        cin >> a;
        if(a == "."){
            break;
        }else
        spices.push_back(a);
        
    }
    
}

void kitchen::whichVeg(){
    for (int i =0; i < veg.end(); i++) {
        cout << veg[i];
    }
}

void kitchen::whichSpices(){
    for (int i =0; i < spices.end(); i++) {
        cout << spices[i];
    }
}

void kitchen::washVegetables(){
    cout << "Washed and cleaned: " << veg;
}
void kitchen::chopVeg(){
    for(int i = 0;i <= veg.size();i++){
        cout << "Chopped " << veg[i];
    }
}
void howManyDishes(kitchen &k){
    int b;
    cout << "Number of utensils that need to be used: ";
    cin >> b;
    k.setUtensils(b);
    
}
void cleanUp(kitchen k){
    cout << "Cleaned all " << k.getUtensils();
}

bool switchOnStove(){
    cout << "Turned on the stove";
    return true;
}

bool switchOffStove(){
    cout << "Turned off stove";
    return false;
}



