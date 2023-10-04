#pragma once
#include "iostream"
#include "cstdlib"

struct node {
    int item;
    node *next;

    node(int x, node *t) {
        item = x;
        next = t;
    }
};

typedef node *link;

void PrintJosephSolution(int num_people, int num_skipped);