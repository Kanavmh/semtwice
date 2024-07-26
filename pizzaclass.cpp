#include <iostream>
#include <string>
using namespace std;

class Pizza{
    char size;
    string pname;
    char type;
    float price;
    string toppings;
    string base;
    char category;
    
    public:
        Pizza(){
            cout<<"Default Constructor";
            size='N';
            pname="NULL";
            type='N';
            price=000;
            toppings="NULL";
            base="NULL";
            category='N';
            cout<<"Size= "<<size<<endl<<"Pizza Name"<<pname<<endl<<"Price= "<<price<<endl<<"Toppings= "<<toppings<<endl<<"Pizza Base= "<<base<<endl<<"Category= "<<category<<endl;
        }
        Pizza(char s, string pn, char pt, float pp, string top, string pb, char pc){
            cout<<"Parameterized Construction called"<<endl;
            size=s;
            pname=pn;
            type=pt;
            price=pp;
            toppings=top;
            base=pb;
            category=pc;
            cout<<"Size= "<<s<<endl<<"Pizza Name= "<<pn<<endl<<"Price= "<<pp<<endl<<"Toppings= "<<top<<endl<<"Pizza Base= "<<pb<<endl<<"Category= "<<pc<<endl;
        }
};


int main() {
    //Pizza p1;
    Pizza p2('M',"Farmhouse",'V',200,"Mushroom, Capsicum","Thin Crust",'D');
    return 0;
}
