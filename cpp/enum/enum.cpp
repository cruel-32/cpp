#include <iostream>
using namespace std;

//열거체사용
enum Positions {designer, publisher, frontEnd, backEnd=3}; //=3은 입력해도 그만 안해도 그만. 3이 아니라 4를 입력하면 index값이 4부터시작

struct PositionsStruct {//구조체에서 열거체사용
    int posNum[4];
    char posChar[4][20]; // 다중배열 형태로 문자열을 배열에 담았다. 
    Positions pos;
};

int main()
{   
    int a = 4;
    int iarr[a] = {designer,1,frontEnd,3}; //int처럼 사용하지만 완전한 int는 아니다. + - 같은 연사자를 못쓰기 대문.

    PositionsStruct ps = {{0,1,2,3}, {"디자이너","퍼블리셔","프론트엔드","백엔드"}, frontEnd};
    cout << "ps.pos = " << ps.pos  << "\n"; //열거체를 나중에 대입하는것이 불가능

    for(int i=0; i<a; i++){
        if(i == designer){
            cout << i  << " = " << ps.posChar[i] << "\n"; 
        }
        if(i == publisher){
            cout << i  << " = " << ps.posChar[i]  << "\n"; 
        }
        if(i == frontEnd){
            cout << i  << " = " << ps.posChar[i]  << "\n"; 
        }
        if(i == backEnd){
            cout << i  << " = " << ps.posChar[i]  << "\n"; 
        }
    }

    return 0;
}