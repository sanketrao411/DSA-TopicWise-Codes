#include <bits/stdc++.h>
// #include "hero.cpp"
using namespace std;

class Hero
{
    private:
    int health;

    public:
    char level;

    //getter
    int getHealth()
    {
        return health;
    }
    char getLevel()
    {
        return level;
    }

    //setter
    void setHealth(int h)
    {
        health = h;
    }
    void setLevel(char l)
    {
        level = l;
    }
};

int main() 
{
     Hero h;
     h.setHealth(70);
     h.setLevel('A');
     cout << "Health : " << h.getHealth() << endl;
     cout << "Level : " << h.getLevel() << endl;
    return 0;
}