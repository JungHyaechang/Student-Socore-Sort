#include <iostream>
using namespace std;

// �������� �������� �Լ�
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
// �������� �������� �Լ�
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

// �л����� ������ ���հ� ����� ���ϴ� �Լ�
int avr(int arr[], int size) {

    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    cout << "�л����� ������ ���� : " << sum << endl;

    return (sum / size);
}

int main(void)
{
    int numofStudent;

    cout << "����ϰ� ���� �л��� ���� �Է��ϼ��� : ";
    cin >> numofStudent;

    int* score = new int[numofStudent]; // �����迭 �Ҵ�

    for (int i = 0; i < numofStudent; i++) {
        cout << i + 1 << "��° �л��� ���� : ";
        cin >> score[i];
    }

    cout << "�л����� ���� ��� : " << avr(score, numofStudent) << endl;

    bool TrueFalse;
    cout << "���ϴ� ���� ����� ���ϼ���.(0 �Ǵ� 1�� �Է�) 0=��������, 1=�������� : \n";
    cin >> TrueFalse;

    switch (TrueFalse) {
    case 0:
        cout << "�л�" << numofStudent << "���� �������� ���� ���� : \n";
        upbubblesort(score, numofStudent);
        for (int i = 0; i < numofStudent; i++) {
            cout << score[i] << " ";
        }
        break;
    case 1:
        cout << "�л�" << numofStudent << "���� �������� ���� ���� : \n";
        downbubblesort(score, numofStudent);
        for (int i = 0; i < numofStudent; i++) {
            cout << score[i] << " ";
        }
        break;
    default:
        cout << "�߸� �Է��ϼ̽��ϴ�.";
    }

    delete[] score;

    return 0;
}