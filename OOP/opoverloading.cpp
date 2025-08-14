#include<bits/stdc++.h>
using namespace std;

class B
{
    public:
    int a;

    void operator + (B &obj)
    {
        int value1 = this -> a;
        int value2 = obj.a;

        cout << "Output : " << value2 - value1 << endl;
    }

    void operator () ()
    {
        cout << "() operator is used " << endl;
    }
};

int main() 
{
     B obj1, obj2;
     obj1.a = 4;
     obj2.a = 7;

     obj1 + obj2;

     obj1();

    return 0;
}