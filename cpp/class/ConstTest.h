#include <iostream>
using namespace std;

class ConstTest {
    public :
        int _x;
        int _y;

        ConstTest(int x, int y);

        int getX();
        int getConstX() const;
};


