#include<iostream>
using namespace std;
//시험 점수를 입력받아 90 ~ 100점은 A, 80 ~ 89점은 B, 70 ~ 79점은 C, 60 ~ 69점은 D, 나머지 점수는 F를 출력하는 프로그램을 작성하시오.
int main() {
    int score;
    cin >> score;
    if ((score > 89) && (score < 101))
        cout << "A";
    else if ((score < 90) && (score > 79))
        cout << "B";
    else if ((score < 80) && (score > 69))
        cout << "C";
    else if ((score < 70) && (score > 59))
        cout << "D";
    else
        cout << "F";

    return 0;
}