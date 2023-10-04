#include "union_find.h"
#include "iostream"

using namespace std;

UnionFind::UnionFind(int size) : size_(size),
                                 sizes_(size),
                                 ids_(size),
                                 num_components_(size) {
    PrepareArrays();
}

void UnionFind::PrepareArrays() {
    for (int i = 0; i < size_; ++i) {
        ids_[i] = i;
        sizes_[i] = 1;
    }
}

void UnionFind::CompressPath(int p, int root) {
    int i = p;
    while (i != ids_[i]) {
        int parent = ids_[i];
        ids_[i] = root;
        i = parent;
    }
}

int UnionFind::Find(int p) {
    int root = p;
    while (root != ids_[root]) {
        root = ids_[root];
    }
    CompressPath(p, root);
    return root;
}

bool UnionFind::Connected(int p, int q) {
    return Find(p) == Find(q);
}

int UnionFind::ComponentSize(int p) {
    int rootOfP = Find(p);
    return sizes_[rootOfP];
}

void UnionFind::Union(int p, int q) {
    if (Connected(p, q)) {
        return;
    }
    int rootOfP = Find(p);
    int rootOfQ = Find(q);
    if (sizes_[rootOfP] < sizes_[rootOfQ]) {
        sizes_[rootOfQ] += sizes_[rootOfP];
        ids_[rootOfP] = rootOfQ;
        sizes_[rootOfP] = 0;
    } else {
        sizes_[rootOfP] += sizes_[rootOfQ];
        ids_[rootOfQ] = rootOfP;
        sizes_[rootOfQ] = 0;
    }
    --num_components_;
}

int UnionFind::NumComponents() const {
    return num_components_;
}

int main() {
    int size = 1000;
    int p, q;
    UnionFind unionFind{size};
    while (cin >> p >> q) {
        if (!unionFind.Connected(p, q)) {
            unionFind.Union(p, q);
            cout << " " << p << " " << q << endl;
        }
    }
    return 0;
}