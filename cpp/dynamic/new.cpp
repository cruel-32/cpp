#include <iostream>
using namespace std;

int main()
{
    //new & delete 기본 규칙
    //new로 생성한 동적 메모리는 delete로 삭제
    //new []로 생성한 동적 메모리는 delete []로 삭제

    //동적메모리 할당
    int size;
    cout << "enter size of array" << "\n";

    cin >> size; //값 입력받기
    cout << "size = " << size << "\n";

    int *arr = new int [size]; //동적 메모리 할당 new [] 그리고 *arr로 주소값 저장

    int sum = 0;

    for(int i=0; i<size; i++){
        cout << "enter a [" << i << "] number" << "\n";
        cin >> arr[i];
        sum += arr[i];
    }

    float ave = (float)sum / (float)size;

    cout << "sum = " << sum << " ave = " << ave << "\n";

    delete[] arr; //사용한 메모리 해제

    return 0;
}