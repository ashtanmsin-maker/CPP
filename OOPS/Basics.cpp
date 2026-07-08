#include<iostream>
using namespace std;

//class is Fruit
class Fruit{
//By default class is private to access it use public:    
public:    
    //property is name
    string name;
    string colour;

};

int main(){
    Fruit apple;  //datatype is Fruit and object is apple
    apple.name = "Apple";
    apple.colour = "Red";
    cout<<apple.name<<"-"<<apple.colour<<endl;

    //Another way to define an object:
    //It creates a pointer to the object not the object itself
    Fruit *mango = new Fruit();
    mango->name ="Mango";
    mango->colour ="Yellow";
    cout<<mango->name<<" - "<<mango->colour<<endl;
    return 0;
}