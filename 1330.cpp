/*A가 B보다 큰 경우에는 '>'를 출력한다.
A가 B보다 작은 경우에는 '<'를 출력한다.
A와 B가 같은 경우에는 '=='를 출력한다.*/
#include <iostream>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;
    if (A > B) cout << ">";
    else if (A < B) cout << "<";
    else if (A == B) cout << "==";

    return 0;
}