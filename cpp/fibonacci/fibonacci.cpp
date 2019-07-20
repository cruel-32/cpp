//동적 프로그래밍
//큰 문제의 해답에 그보다 작은 해답이 포함되어 있을때 프로그램 속도를 비약적으로 향상시킨다.

#include <stdio.h>

int nArr[100] = {0};

int fibonacci(int n){
    if(nArr[n] != 0){
        return nArr[n];
    } else {
        if(n <= 2){
            nArr[n] = 1;
        } else {
            nArr[n] = fibonacci(n-1) + fibonacci(n-2);
        }
        return nArr[n];
    }

};

int main(){
    int n = 10;
    printf("%d는 %d입니다", n, fibonacci(n));
    return 0;
}