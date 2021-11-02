#include "iostream"
#include "array"

using namespace std;

static const int N = 1000;

// weighted quick union with complete path compression

int mainFive() {
    int p, q;
    array<int, N> id{};
    // stores number of nodes in a tree, allowing to connect a smaller tree to a greater tree,
    // thus preventing the expansion of longer roots in the tree.
    array<int, N> sz{};
    // step 01: fill the array with consecutive values and sz array with 1
    for (int i = 0; i < N; ++i) {
        id[i] = i;
        sz[i] = 1;
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

        // tracks the root node of the tree
        int root;

        // check the number of nodes in the trees and select a smaller one
        // then update the number of nodes in the greater tree
        if (sz[i] < sz[j]) {
            id[i] = j;
            sz[j] += sz[i];
            root = j;
        } else {
            id[j] = i;
            sz[i] += sz[j];
            root = i;
        }
        // here we compress the paths
        i = p; // start from the beginning
        while (i != id[i]) { // until reaching the root node
            int parent = id[i]; // get the parent of the node
            id[i] = root; // set root as this node's parent
            i = parent; // proceed to deal with the parent of this node.
        }

        j = q;
        while (j != id[j]) {
            int parent = id[j];
            id[j] = root;
            j = parent;
        }

        cout << " " << p << " " << q << endl;
    }
    return 0;
}

