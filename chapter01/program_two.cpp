#include "iostream"

using namespace std;

static const int N = 10;

// quick find, slow union

int main() {
    int p, q, id[N];
    // step 01: fill the array with consecutive values
    for (int i = 0; i < N; ++i) {
        id[i] = i;
    }

    while (cin >> p >> q) {
        int i, j;
        for (i = p; i != id[i]; i = id[i]);
        for (j = q; j != id[j]; j = id[j]);
        if (i == j) continue;
        id[i] = j;
        cout << " " << p << " " << q << endl;
    }
}
