#include <bits/stdc++.h>
using namespace std;

char line[201];

void recursive(int a, int b) {
    line[a * 4] = '\0';
    cout << line << "\"����Լ��� ������?\"\n";
    if (a == b) {
        cout << line << "\"����Լ��� �ڱ� �ڽ��� ȣ���ϴ� �Լ����\"\n";
    }
    else {
        cout << line << "\"�� ����. �������� �� �� ����⿡ �̼��� ��� ������ ����� ������ �־���.\n";
        cout << line << "���� ������� ��� �� ���ο��� ������ ������ �߰�, ��� �����Ӱ� ����� �־���.\n";
        cout << line << "���� ���� ��κ� �ǾҴٰ� �ϳ�. �׷��� ��� ��, �� ���ο��� �� ���� ã�ƿͼ� ������.\"\n";
        line[a * 4] = '_';
        recursive(a + 1, b);
        line[a * 4] = '\0';
    }
    cout << line << "��� �亯�Ͽ���.\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    memset(line, '_', sizeof(char) * 201);

    cout << "��� �� ��ǻ�Ͱ��а� �л��� ������ �������� ã�ư� ������.\n";
    recursive(0, n);
}