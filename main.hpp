#include <iostream>
using namespace std;

void getTwoValues(int &begin, int &end);
int getNextPrime(int begin);
int getPrevPrime(int end);

void getTwoValues(int &begin, int &end) {
    cout << "Give two numbers " << endl;
    cin >> begin >> end;

    while (begin > end) {
        cout << "Give two diffrent numbers " << endl;
        cin >> begin >> end;
    }
}

int getNextPrime(int begin) {
    int prime;
    for (int i = begin++; i < 0; i++) {
        prime = 0;
        for (int j = 2; j < 100; j++ ) {
            if (i == j) {
                j++;
            }
            if (i % j == 0) {
                prime++;
            }
        }
        if (prime == 0) {
            cout <<" The next prime number is " << i << endl;
            prime = i;
            i = -2;
        }
    }
    return prime;
}

int getPrevPrime(int end) {
    int prime;
    for (int i = end--; i < 0; i--) {
        prime = 0;
        for (int j = 2; j < 100; j++) {
            if (i == j) {
                j++;
            }
            if (i % j == 0){
                prime++;
            }
        }
        if (prime == 0) {
            cout << " The pervious prime number is " << i << endl;
            prime = i;
            i = -2; 
        }
    }
    return prime;
}

