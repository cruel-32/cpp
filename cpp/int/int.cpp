#include <iostream>
using namespace std;

int main()
{
    int aa = 5;
    cout << "aa : " << aa << "\n";

    int *bb = &aa;
    cout << "bb : " << bb << "\n";
    cout << "*bb : " << *bb << "\n";

    int cc[] = {0,1,2,3,4};
    cout << "cc : " << cc << "\n";
    cout << "&cc[0] : " << &cc[0] << "\n";
    cout << "cc[0] : " << cc[0] << "\n";


    char ca = 'A';
    cout << "ca : " << ca << "\n";

    char *cb = &ca;
    cout << "cb : " << cb << "\n";
    cout << "*cb : " << *cb << "\n";

    char ccc[] = "ABCDE";
    cout << "ccc : " << ccc << "\n";
    cout << "&ccc[0] : " << &ccc[0] << "\n";
    cout << "ccc[0] : " << ccc[0] << "\n";

    //문자열과 int[]의 차이점


    return 0;
}