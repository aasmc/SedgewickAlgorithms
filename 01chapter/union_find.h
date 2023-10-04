#pragma once
#include "vector"

class UnionFind {
public:
    explicit UnionFind(int size);

    int Find(int p);

    void Union(int p, int q);

    bool Connected(int p, int q);

    int ComponentSize(int p);

    [[nodiscard]] int NumComponents() const;

private:
    void PrepareArrays();
    void CompressPath(int p, int root);

private:
    int size_;
    int num_components_;
    std::vector<int> ids_;
    std::vector<int> sizes_;
};