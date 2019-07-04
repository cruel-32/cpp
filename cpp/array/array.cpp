#include <string.h>
#include <iostream>
using namespace std;
int main()
{
    int array1[5] = {10,11,12,13,14}; //배열의 선언과 초기화
    const int num = 4;
    int array2[num] = {20}; //배열의 선언. 빈값은 0으로 초기화
    int array3[3][4] = {{310},{320},{330}}; //다중배열 선언

    cout << "array : " << array1 << "\n"; //제대로 표시해주지 못함
    cout << "array1[0] : " << array1[0] << "\n"; //초기화를 해주지 않아도 공간을 차지하고 있다
    cout << "sizeof(array1) : " << sizeof(array1) << "\n"; //array의 sizeof는 배열수 x 타입의 바이트수
    cout << "sizeof(array1[0]) : " << sizeof(array1[0]) << "\n";

    cout << "array2 : " << array2 << "\n"; //제대로 표시해주지 못함
    cout << "array2[3] : " << array2[3] << "\n"; //초기화를 해주지 않아도 공간을 차지하고 있다. 이전에 선언한 배열을 가르키고 있다.
    cout << "sizeof(array2) : " << sizeof(array2) << "\n"; //array2의 sizeof는 배열수 x 타입의 바이트수
    cout << "sizeof(array2[0]) : " << sizeof(array2[0]) << "\n"; //초기화를 해주지 않아도 공간을 차지하고 있다. 배열의 길이가 0인데도 말이다.

    for(int i=0; i<sizeof(array1)/sizeof(array1[0]); i++){
        cout << "array1[i] : " << array1[i] << "\n";
    }

    for(int x=0; x<num; x++){
        cout << "array2[x] : " << array2[x] << "\n";
    }

    for(int y=0; y<sizeof(array3)/sizeof(array3[0]); y++){
        for(int z=0; z<sizeof(array3[y])/sizeof(array3[y][0]); z++){
            cout << "array3[y][z] : " << array3[y][z] << "\n";
        }
    }

    return 0;
}