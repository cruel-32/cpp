#include <cstring>
#include <iostream>
using namespace std;

// bool findFood(char (*foods)[6], char *food){ //아래와 동일
bool findFood(char foods[][6], char *food){
    bool have = false;
    for(int i=0; i<3; i++){
        cout << "foods[i] : " << foods[i] << "\n";

        if(strcmp(foods[i], food) == 0){
            cout << "found a " << foods[i] << "\n";
            have = true;
            break;
        }
    }
    return have;
}

//아래와 같은 함수가 있다고 할때 p는 변수의 주소일까? 아니면 첫번째 바이트 주소일까? (즉, char c를 &c로 보냈을때와 char c[]를 c로 보냈을때 구분이 되냐)
//c++에서는 구분할 수 없다. 고로 개발자끼리 미리 규악이 필요하다. - 실무에선 거의 문자열이긴 하다
void func(char *p);

int main()
{
    char src[] = "test-word";
    int len = strlen(src); //NULL을 제외한 문자열 길이 측정
    char* dest = new char[len+1]; //+1로서 NULL값이 들어갈 공간을 준비해둔다

    strcpy(dest, src); //src를 복사해 dest에 입력해준다
    cout << "src : " << src << "\n";
    cout << "dest : " << dest << "\n";

    delete[] dest;
    dest = NULL;


    char text[] = "text-word";
    char test[] = "test-word";
    cout << "strcmp(text,test) : " << strcmp(text,test) << "\n"; //동일하면 0, 다르면 1을 리턴

    char word1[5] = "text";
    char word2[6] = "-word";
    cout << "strcat(word1,word2) : " << strcat(word1,word2) << "\n"; //word2를 word1에 붙여넣는다. word1의 메모리가 충분히 커야한다. 컴파일러에 따라서는 오류가 난다.
    cout << "strlen(word1) : " << strlen(word1) << "\n"; //길이는 늘어났지만,
    cout << "sizeof(word1) : " << sizeof(word1) << "\n"; //배열의 사이즈는 그대로...




    char abuseChar[3][6] = {"cake", "snack", "water"};
    // cout << "abuseChar : " << abuseChar << "\n"; //배열의 사이즈는 그대로...
    // cout << "sizeof(abuseChar) : " << sizeof(abuseChar) << "\n"; //배열의 사이즈는 그대로...
    // cout << "abuseChar[0] : " << abuseChar[0] << "\n"; //배열의 사이즈는 그대로...
    // cout << "abuseChar[1] : " << abuseChar[1] << "\n"; //배열의 사이즈는 그대로...
    // cout << "abuseChar[2] : " << abuseChar[2] << "\n"; //배열의 사이즈는 그대로...

    char food[] = "snack";
    // bool result = findFood(&abuseChar[0], food); //아래와 동일
    bool result = findFood(abuseChar, food);
    cout << "result : " << result << "\n";



    return 0;
}
//원티드 TjQ6woxEg5 ㅋㅋ