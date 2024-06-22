#include <bits/stdc++.h>

using namespace std;


int main() {
    char arr[100][100], crr[16][100] = {"Happy", "birthday", "to", "you", "Happy", "birthday", "to", "you", "Happy", "birthday", "to", "Rujia", "Happy", "birthday", "to", "you"};
    int num, j = 0, k = 0, line, count = 0;

    cin >> num;

    if (1<= num <= 100) {
        if (num % 16)
            line = ((num / 16) + 1) * 16;
        else
            line = num;


        for (int i = 0; i < num; i++)
            cin >> arr[i];

        for (k = 0;;) {
            cout << arr[j++] << ": " << crr[k++] << "\n";
            ++count;
            if (count == line)
                break;
            if (j == num)
                j = 0;
            if (k == 16)
                k = 0;
        }
    } else {
        return 0;
    }
    return 0;
}

