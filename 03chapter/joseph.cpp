#include "joseph.h"

void PrintJosephSolution(int num_people, int num_skipped) {
    link t = new node(1, 0);
    t->next = t;
    link x = t;
    int i;
    for(i = 2; i <= num_people; ++i) {
        // insert to the last position of the cyclic linked list
        x = (x->next = new node(i, t));
    }
    while (x != x->next) {
        for(i = 1; i < num_skipped; ++i) {
            x = x->next;
        }
        x->next = x->next->next;
    }
    std::cout << x->item << std::endl;
}