#include <iostream>
using namespace std;

char* ReverseString(const char* src, int len){
    cout << "src : " << src << endl;
    char *reverse = new char [len+1];//왜 +1을 해줄까?

    for(int i=0; i<len; i++){
        cout << "src[" << len-i-1 << "] : " << src[len-i-1] << endl;
        reverse[i] = src[len-i-1];
    }

    reverse[len] = NULL; //왜냐하면 마지막은 NULL값이 들어가야 문자열의 끝을 알릴 수 있다.
    cout << "reverse : " << reverse << endl;
    return reverse;
}

int main()
{   
    // char *ch = new char [20];
    // cout << "enter a word";
    // cin >> ch;

    // char *words = ReverseString(ch,20);

    char ch[11] = "enterAword";
    cout << "ch : " << ch << endl;

    char *words = ReverseString(ch,11);
    cout << "words : " << words << endl;


    delete [] words;
    words = NULL;

    return 0;
}