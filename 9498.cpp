#include<iostream>
using namespace std;
//���� ������ �Է¹޾� 90 ~ 100���� A, 80 ~ 89���� B, 70 ~ 79���� C, 60 ~ 69���� D, ������ ������ F�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
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