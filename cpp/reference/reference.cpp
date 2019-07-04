#include <iostream>
using namespace std;

void sum(int atest, int& btest); //main보다 하단에 지정한 함수를 main에서 호출하기 위한 선언(?)

int main()
{   
    int target = 20;
    int& ref = target; //포인터와 비슷하지만 주소값이 아닌 레퍼런스가 참조할 변수명을 적는다. 초기화를 반드시 해주어야한다. 추후 대입 불가능(const)

    cout << "ref = " << ref  << "\n";
    cout << "&target = " << &target  << "\n"; //주소가 같은 값을 가르킴
    cout << "&ref = " << &ref  << "\n"; //주소가 같은 값을 가르킴

    const int& rci = 100; //성공
    // int& rc = 100; //오류. 값 지정 레퍼런스는 값 변경시 오류가 생길 수 있으므로 const로만 가능

    int aa = 2;
    int bb = 10;
    
    sum(aa,bb);

    cout << "aa = " << aa << "\n";
    cout << "bb = " << bb << "\n"; //bb는 레퍼런스로 전달받아 ++해주었기 때문에 bb에 영향을 미쳤다!

    return 0;
}

void sum(int aa, int& bb){ //bb 매개변수는 레퍼런스 타입으로 선언했다. 이렇게 하면 전달받은 인자를 레퍼런스에 대입
    aa++;
    bb++;
}