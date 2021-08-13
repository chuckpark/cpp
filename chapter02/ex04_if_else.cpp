#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int x = 120;

    if(x == 100) {
        cout << "x가 100입니다." << endl;
    }
    else {
        cout << "x가 100이 아닙니다" << endl;
    }

    // 한 줄이기 때문에 {}생략 가능
    // if(x == 100)
    //     cout << "x가 100입니다." << endl;
    // else
    //     cout << "x가 100이 아닙니다" << endl;
}