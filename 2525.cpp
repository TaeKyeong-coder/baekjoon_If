#include<iostream>
using namespace std;

/*
KOI ���ڿ����� �ǰ��� ���� ���ִ� ������������ �丮�� �����ϰ� ����� �ΰ����� ������ �����Ϸ��� �Ѵ�.
�ΰ����� ������ ����ϴ� ����� ������ ���� ���� ���� ��Ḧ �ΰ����� ���쿡 ������ �ȴ�. 
�׷��� �ΰ����� ������ ���챸�̰� ������ �ð��� �� ������ �ڵ������� ����Ѵ�. 

����, KOI ������ �ΰ����� ���� �ո鿡�� ����ڿ��� ������������ �丮�� ������ �ð��� �˷� �ִ� ������ �ð谡 �ִ�. 

�����������̸� �����ϴ� �ð��� ���챸�̸� �ϴ� �� �ʿ��� �ð��� �д����� �־����� ��,
���챸�̰� ������ �ð��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.*/

int main() {
	int hour, min, cookT;
	cin >> hour >> min;
	cin >> cookT;

	min = min + cookT;

	int finishHour, finishMin;

	if (min >= 60) {
		finishMin = (min % 60);
		finishHour = ((min / 60) + hour);
		if (finishHour > 23) {
			finishHour = finishHour % 24;
		}
	}

	else {
		finishMin = min;
		finishHour = hour;
	}
	cout << finishHour << " " << finishMin;

	return 0;
}