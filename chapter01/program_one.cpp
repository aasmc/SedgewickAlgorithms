#include "iostream"
#include "array"

static const int N = 1000;
using namespace std;

// quick find, slow union

int mainOne() {
    array<int, N> id{};
    int i, p, q;
    // step 01: fill the array with consecutive values
    for (i = 0; i < N; ++i) {
        id[i] = i;
    }

    while (cin >> p >> q) {
        int t = id[p];
        // if the elements are equal, then there's a connection between them
        if (t == id[q]) continue;
        // go through all the array and change elements equal to id[p] to id[q]
        for (i = 0; i < N; ++i) {
            if (id[i] == t) {
                id[i] = id[q];
            }
        }
        cout << " " << p << " " << q << endl;
    }
    return 0;
}


























