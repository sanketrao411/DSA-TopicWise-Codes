#include <iostream>
using namespace std;

int check(int arrdeck1[], int arrdeck2[], int l1, int l2) {
    int ptr1 = 0, ptr2 = 0;
    for (int i = 0; i < 100; i++) {
        if(arrdeck1[l1-1]==0 || arrdeck2[l2-1]==0)
        break;
        if (arrdeck1[i] > arrdeck2[i]) {
            arrdeck1[l1] = arrdeck2[i];
            arrdeck1[i] = 0;
            arrdeck2[i] = 0;
            ptr1++;
            l1++;
        } else if (arrdeck1[i] < arrdeck2[i]) {
            arrdeck2[l2] = arrdeck1[i];
            arrdeck2[i] = 0;
            arrdeck1[i] = 0;
            ptr1++;
            l2++;
        }
    }
    for (int i = ptr1; i < 100; i++) {
        cout<<arrdeck1[i]<<" ";
        if (arrdeck1[i] != 0)
            return 2;
    }
    for (int i = ptr1; i < 100; i++) {
        if (arrdeck2[i] != 0)
            return 1;
    }
    return 0;
}

int main() {
    int n;
    cin >> n;
    string deck1, deck2;
    int l1 = 3;
    int l2 = 3;

    for (int i = 1; i <= n; i++) {
        cin >> deck1 >> deck2;
        
        int arrdeck1[100] = {0};
        int arrdeck2[100] = {0};

        for (int j = 0; j < l1; ++j) {
            if (deck1.at(j) == '2')
                arrdeck1[j] = 2;
            else if (deck1.at(j) == '3')
                arrdeck1[j] = 3;
            else if (deck1.at(j) == '4')
                arrdeck1[j] = 4;
            else if (deck1.at(j) == '5')
                arrdeck1[j] = 5;
            else if (deck1.at(j) == '6')
                arrdeck1[j] = 6;
            else if (deck1.at(j) == '7')
                arrdeck1[j] = 7;
            else if (deck1.at(j) == '8')
                arrdeck1[j] = 8;
            else if (deck1.at(j) == '9')
                arrdeck1[j] = 9;
            else if (deck1.at(j) == 'T')
                arrdeck1[j] = 10;
            else if (deck1.at(j) == 'J')
                arrdeck1[j] = 11;
            else if (deck1.at(j) == 'Q')
                arrdeck1[j] = 12;
            else if (deck1.at(j) == 'K')
                arrdeck1[j] = 13;
            else if (deck1.at(j) == 'A')
                arrdeck1[j] = 14;
        }

        for (int j = 0; j < l2; ++j) {
            if (deck2.at(j) == '2')
                arrdeck2[j] = 2;
            else if (deck2.at(j) == '3')
                arrdeck2[j] = 3;
            else if (deck2.at(j) == '4')
                arrdeck2[j] = 4;
            else if (deck2.at(j) == '5')
                arrdeck2[j] = 5;
            else if (deck2.at(j) == '6')
                arrdeck2[j] = 6;
            else if (deck2.at(j) == '7')
                arrdeck2[j] = 7;
            else if (deck2.at(j) == '8')
                arrdeck2[j] = 8;
            else if (deck2.at(j) == '9')
                arrdeck2[j] = 9;
            else if (deck2.at(j) == 'T')
                arrdeck2[j] = 10;
            else if (deck2.at(j) == 'J')
                arrdeck2[j] = 11;
            else if (deck2.at(j) == 'Q')
                arrdeck2[j] = 12;
            else if (deck2.at(j) == 'K')
                arrdeck2[j] = 13;
            else if (deck2.at(j) == 'A')
                arrdeck2[j] = 14;
        }

        int result = check(arrdeck1, arrdeck2, l1, l2);
        if (result == 1) {
            cout << "player 1" << endl;
        } else if (result == 2) {
            cout << "player 2" << endl;
        } else {
            cout << "draw" << endl;
        }
    }

    return 0;
}
