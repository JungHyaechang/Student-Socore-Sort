#include <iostream>
using namespace std;

// 오름차순 버블정렬 함수
void upbubblesort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
// 내림차순 버블정렬 함수
void downbubblesort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// 학생들의 점수의 총합과 평균을 구하는 함수
int avr(int arr[], int size) {

    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    cout << "학생들의 점수의 총합 : " << sum << endl;

    return (sum / size);
}

int main(void)
{
    int numofStudent;

    cout << "계산하고 싶은 학생의 수를 입력하세요 : ";
    cin >> numofStudent;

    int* score = new int[numofStudent]; // 동적배열 할당

    for (int i = 0; i < numofStudent; i++) {
        cout << i + 1 << "번째 학생의 점수 : ";
        cin >> score[i];
    }

    cout << "학생들의 점수 평균 : " << avr(score, numofStudent) << endl;

    bool TrueFalse;
    cout << "원하는 정렬 방식을 택하세요.(0 또는 1를 입력) 0=오름차순, 1=내림차순 : \n";
    cin >> TrueFalse;

    switch (TrueFalse) {
    case 0:
        cout << "학생" << numofStudent << "명의 오름차순 성적 정리 : \n";
        upbubblesort(score, numofStudent);
        for (int i = 0; i < numofStudent; i++) {
            cout << score[i] << " ";
        }
        break;
    case 1:
        cout << "학생" << numofStudent << "명의 내림차순 성적 정리 : \n";
        downbubblesort(score, numofStudent);
        for (int i = 0; i < numofStudent; i++) {
            cout << score[i] << " ";
        }
        break;
    default:
        cout << "잘못 입력하셨습니다.";
    }

    delete[] score;

    return 0;
}