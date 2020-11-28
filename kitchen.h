//
//  kitchen.h
//  Kitchen
//
//  Created by Huzainah Shah on 26/11/2020.
//

#ifndef kitchen_h
#define kitchen_h


class kitchen{
    int utensils;
    vector<string> veg;
    vector<string> spices;
    bool stovetop;
    
public:
    kitchen();
    void setUtensils(int a){
        utensils = a;
    }
    
  
    void setStovetop(bool b){
        stovetop = b;
    }
    
  
   
    void whichVeg();
    void whichSpices();
    void washVegetables();
    void chopVeg();
    
    
    int getUtensils(){return utensils;}
    bool getStovetop(){return stovetop;}
    
    
};

kitchen::kitchen(){
    utensils = 3;
    stovetop = true;
}

void chooseVeg(vector<string> );

void chooseSpices(vector<string> );
void howManyDishes(kitchen &);
void cleanUp(kitchen);

bool switchOnStove();
bool swithcOffStove();




#endif /* kitchen_h */
