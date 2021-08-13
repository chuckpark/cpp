#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
    bool b;

    b = (1 == 2);

    cout<< std::boolalpha; // 부울린을 true, false로 출력
    // cout << boolalpha; // 2번째 라인에 std를 썼기 때문에 생략 가능

    cout << b << endl;

    return 0;
}