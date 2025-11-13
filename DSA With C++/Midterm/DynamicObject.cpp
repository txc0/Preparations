#include <bits/stdc++.h>
using namespace std;

class Car
{
    public:
    int id;
    double price;
    Car(int id, double price)
    {
        this->id;
        this->price;
    }

};

int main()
{
    Car *c1 = new Car(23,45.4);
    cout<<(*c1).id << " "<< c1->price<<endl;
   
    return 0;
}