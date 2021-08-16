#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
    int number;

    cout << "숫자를 입력하세요:";
    cin >> number;


// break 있는거
//     switch(number) {
//         case 0:
//             cout << "zero\n";
//             break;
//         case 1:
//             cout <<"one\n";
//             break;
//         case 2:
//             cout <<"two\n";
//             break;
//         default:
//             cout <<"many\n";
//             break;
//     }

//     return  0;
// }


    switch(number) {
            case 0:
                cout << "zero\n";
            case 1:
                cout <<"one\n";
            case 2:
                cout <<"two\n";
            default:
                cout <<"many\n";
        }

        return  0;
    }