#pragma once
#include <iostream>
using namespace std;
class Base 
{

private:
    int x;
    int y;

public:
    Base(int x, int y) 
    {
        this->x = x;
        this->y = y;
    }

    int getX() 
    {
        return x;
    }

    int getY() 
    {
        return y;
    }

    void calculate() 
    {
        cout << getX() * getY() << endl;
    }

};

class Sub : public Base 
{
private:
    int x;
    int y;
    
public:
    Sub(int x, int y) :Base(x, y)
    {
        this->x = x;
        this->y = y;
    }
    void calculate()
    {
        if (this->y == 0)
        {
            cout << "Error" << endl;
            return;
        }
        cout << this->x / this->y << endl;
    }
};