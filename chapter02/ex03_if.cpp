#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
    int x =100;

    // 한 줄이면 중괄호 생략가능 (있어도 상관없음)
    if(x == 100) 
        cout << "x가 100입니다." << endl;
    
    //  두 줄부턴 반드시 중괄호 있어야함
    if(x == 100) {
        cout << "x의 값을 출력합니다." << endl;
        cout << "x가 100입니다." << endl;
    }

    return 0;
}