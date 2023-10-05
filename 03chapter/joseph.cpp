#include "joseph.h"
#include "singly_linked_list.h"


void PrintJosephSolution(int num_people, int num_skipped) {
    construct(num_people);
    Node t, x;
    int i;
    for(i = 2, x = new_node(1); i <= num_people; ++i) {
        t = new_node(i);
        insert(x, t);
        x = t;
    }
    while (x != next(x)) {
        for(i = 1; i < num_skipped; ++i) {
            x = next(x);
        }
        return_to_free(remove_first_from_list(x));
    }
    std::cout << item(x) << std::endl;
}
