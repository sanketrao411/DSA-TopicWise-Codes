#include<bits/stdc++.h>
using namespace std;

class Human
{
    public:
    int height;
    int weight;
    int age;

    ~Human()
    {
        cout << "Destructor" << endl;
    }
};

class Male : public Human
{
    public:
    void display()
    {
        cout << height << endl;
        cout << weight << endl;
        cout << age << endl;
    }
};

int main() 
{
     
    return 0;
}