#include <string.h>
#include <iostream>
using namespace std;

void array_test(int arr[],int len){ //배열 주소를 가져오기 때문에 이 함수 내부에서 값 변경시 함수 외부에서도 값이 변해있다.
    for(int q=0; q<len; q++){
        arr[q] = q;
    }
}

void multi_array_test(char arr[][20], int len){
    //다중 배열 역시 값 변경시 함수 외부에서도 값이 변해있다. char arr[][20]는 결국 char (*arr)[20] 라고 할 수 있다.
    //1차원 배열은 크기를 몰라도 배열의 시작점과 주소를 알 수 있지만, 2차원 배열의 크기를 적어주지 않으면 1차원 배열에서
    //각 원소안에 배열의 크기를 측정할 수 없기 때문에 2차원 이후부터는 크기를 적어주어야한다.
    for(int q=0; q<len; q++){
        cout << "arr[q] = " << arr[q] << "\n";
        strcpy(arr[q], "test");
    }
}

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

    int len = 5;
    int arr_[5] = {10,11,12,13,14}; //arr_[len]와 같은 변수를 통한 array 크기 선언은 컴파일러에 따라 동작하지 않을 수도 있다. (c++ 표준이 아님)
    
    array_test(arr_,5);

    for(int q=0; q<len; q++){
        cout << "arr_[q] : " << arr_[q] << "\n"; //값이 변해있다.
    }

    char multi_arr[5][20] = {"test", "code", "c++", "develop", "language"}; //다중배열을 함수에 넘기는 방법

    multi_array_test(multi_arr, len); //함수 다중배열의 이름을 넘긴다. 함수명은 &multi_arr[0] 과 같다. 즉, 배열의 주소값은 첫번째 원소의 주소값과 동일하다.


    for(int z=0; z<len; z++){
        cout << "multi_arr[z] = " << multi_arr[z] << "\n";
    }


    return 0;
}