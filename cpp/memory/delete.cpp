#include <iostream>
using namespace std;

int main()
{   
    //delete를 해도 메모리 주소값은 남아있다.
    int *p = new int;
    *p = 337;
    delete p;
    cout << "p = " << p << "\n"; 

    //해제한 메모리를 또 해제해서는 안된다.
    float *fl = new float;
    *fl = 50.04f;
    delete fl;
    cout << "fl = " << fl << "\n";
    // delete fl;
    // cout << "fl = " << fl << "\n";

     //NULL값을 해제하는것은 문법적으로 안전하다. 그러므로 if(ch != NULL) 같은짓은 안해도된다.
    char *ch = NULL;
    delete ch;
    // cout << "ch = " << ch << "\n"; 

    char *chp = NULL;
    delete chp; //혹은 delete[] chp;
    
    //좋은 습관
    short *sh = new short[10];
    cout << "sh = " << sh << "\n"; 

    delete[] sh;
    sh = NULL; // NULL값을 넣어주고 주소값도 삭제
    cout << "sh = " << sh << "\n"; 

    return 0;
}