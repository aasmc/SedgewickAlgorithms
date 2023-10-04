#include "iostream"
#include "array"
using namespace std;

static const int N = 1000;

// quick union, slow find

int mainTwo() {
    int p, q;
    array<int, N> id{};
    // step 01: fill the array with consecutive values
    for (int i = 0; i < N; ++i) {
        id[i] = i;
    }

    while (cin >> p >> q) {
        int i, j;
        // when handling the p-q pair we traverse the array starting from index i = p
        // until we meet an element at id[i] == i. The same happens for j = q.
        // and if i != j, we set id[i] = j. Basically, we have a tree of components that may be
        // connected. Connected components form a set, where one component points to another one, and the set has no
        // cycles. When component points to itself (id[i] = i), then this is the last component in the set.
        // So we start checking from p and find the last component. Then we start checking from q and find the last
        // component. If the components are equal (j == j) then p and q are connected, so we skip the pair.
        // if the last components are not equal, then p and q are not connected, so we connect them
        // together (id[i] = j) and print the pair p-q.
        for (i = p; i != id[i]; i = id[i]);
        for (j = q; j != id[j]; j = id[j]);
        if (i == j) continue;
        id[i] = j;
        cout << " " << p << " " << q << endl;
    }
    return 0;
}
