#include<iostream>
using namespace std;
class Rectangle{
    public:
    int l;
    int b;
    //THIS IS A CONSTUCTOR
    Rectangle(){
        //Default connstructor-No aruments passed
        l=0;
        b=0;
    }
    
    Rectangle(int x,int y){
        //Parameterised constructer-Arguments passed
        l=x;
        b=y;
    }

    Rectangle(Rectangle& r){
        //Copy contructer-Initialise an object by another object
        l=r.l;
        b=r.b;
    }

    ~Rectangle(){
        //Destructor
        cout<<"Destructor is called\n";
    }
};
int main(){

    Rectangle* r4 =new Rectangle();
    cout<<r4->l<<"-"<<r4->b<<endl;
    //Delete can only be called on pointer objects
    //Here r4 is called the deleted before r1 is called
    delete r4;

    Rectangle r1;
    cout<<r1.l<<"-"<<r1.b<<endl;

    Rectangle r2(3,4);
    cout<<r2.l<<"-"<<r2.b<<endl;

    Rectangle r3=r2;
    cout<<r3.l<<"-"<<r3.b<<endl;

    return 0;
}