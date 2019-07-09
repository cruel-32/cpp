#include <iostream>
#include <string.h>
using namespace std;

char* ReverseWord(const char* src, int len){
    //왜 +1을 해줄까?
    //왜냐하면 마지막은 NULL값이 들어가야 문자열의 끝을 알릴 수 있다.
    char* reverse = new char [len+1];

    for(int i=0; i<len; i++){
        reverse[i] = src[len-i-1];
    }

    reverse[len] = '\0'; //NULL하면 warning뜸. 여튼 문자의 끝임을 알려준다.
    return reverse;
}

int main()
{   
    cout << "enter a word without a blank" << endl;
    char text[] = {};
    cin >> text;

    char* words = ReverseWord(text,strlen(text));

    cout << "reversed word : " << words << endl;

    delete [] words;
    words = NULL;

    return 0;
}