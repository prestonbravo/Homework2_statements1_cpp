//������� 1.
#include <iostream>
using namespace std;

int main() {
    int a, sum = 0;

    cout << "������� ����� a: ";
    cin >> a;

    for (int i = a; i <= 500; i++) {
        sum += i;
    }

    cout << "����� ����� �� " << a << " �� 500 ����� " << sum << endl;

    return 0;
}

//������� 2.
#include <iostream>
using namespace std;

int main() {
    int x, y;

    cout << "������� ����� x: ";
    cin >> x;

    cout << "������� ���������� ������� y: ";
    cin >> y;

    int result = 1;

    for (int i = 0; i < y; i++) {
        result *= x;
    }

    cout << x << " � ������� " << y << " ����� " << result << endl;

    return 0;
}

//������� 3.
#include <iostream>
using namespace std;

int main() {
    int sum = 0;
    int count = 0;

    for (int i = 1; i <= 1000; i++) {
        sum += i;
        count++;
    }

    cout << "������� �������������� ����� �� 1 �� 1000 ����� " << (float)sum / count << endl;

    return 0;
}

//������� 4.
#include <iostream>
using namespace std;

int main() {
    int a, result = 1;

    cout << "������� ����� a: ";
    cin >> a;

    if (a >= 1 && a <= 20) {
        for (int i = a; i <= 20; i++) {
            result *= i;
        }
    }
    else {
        cout << "�������� �������� a. ������� ����� �� 1 �� 20." << endl;
    }

    cout << "������������ ����� �� " << a << " �� 20 ����� " << result << endl;

    return 0;
}

//������� 5. ������ �������:
#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 10; i++) {
        cout << i << " * 9 = " << i * 9 << endl;
    }

    return 0;
}
//������� ��� ��������� ������ �����:
#include <iostream>
using namespace std;

int main() {
    int k;
    cout << "������� �������� k: ";
    cin >> k;

    for (int i = 1; i <= 10; i++) {
        cout << i << " * " << k << " = " << i * k << endl;
    }

    return 0;
}

//������� 6.
#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "������� �����: ";
    cin >> num;

    for (int i = 0; i <= num; i++) {
        cout << i << " ";
    }

    return 0;
}

//������� 7. 
#include <iostream>
using namespace std;

int main() {
    int min, max;
    cout << "������� ������� ���������: ";
    cin >> min >> max;

    if (min > max) {
        cout << "�������� �������� ������ ���������. ������� ������� � ������� �����������." << endl;
        return 0;
    }

    for (int i = min; i <= max; i++) {
        if (i % 2 == 0) {
            cout << i << " ";
        }
        else if (i % 7 == 0) {
            cout << i << " ";
        }
        else {
            cout << i << " ";
        }
    }

    cout << endl;

    return 0;
}

//������� 8.
#include <iostream>
using namespace std;

int main() {
    int min, max;
    cout << "������� ������� ���������: ";
    cin >> min >> max;

    if (min > max) {
        cout << "�������� �������� ������ ���������. ������� ������� � ������� �����������." << endl;
        return 0;
    }

    int sum = 0;

    for (int i = min; i <= max; i++) {
        sum += i;
    }

    cout << "����� ����� �� " << min << " �� " << max << " ����� " << sum << endl;

    return 0;
}

//������� 9. 
#include <iostream>
using namespace std;

int main() {
    int num, sum = 0;

    cout << "������� �����: ";
    cin >> num;

    while (num != 0) {
        sum += num;
        cout << "������� �����: ";
        cin >> num;
    }

    if (sum != 0) {
        cout << "����� ����� ����� " << sum << endl;
    }
    else {
        cout << "�� ����� ������ ����. ����� ����� 0." << endl;
    }

    return 0;
}