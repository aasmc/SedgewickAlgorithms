#include "singly_linked_list.h"

link freelist;

void construct(int n) {
    freelist = new node[n + 1];
    for (int i = 0; i < n; ++i) {
        freelist[i].next = &freelist[i + 1];
    }
    freelist[n].next = 0;
}

Node new_node(int i) {
    link x = remove_first_from_list(freelist);
    x->item = i;
    x->next = x;
    return x;
}

void return_to_free(Node n) {
    insert(freelist, n);
}

void insert(Node x, Node t) {
    t->next = x->next;
    x->next = t;
}

Node remove_first_from_list(Node x) {
    link t = x->next;
    x->next = t->next;
    return t;
}

Node next(Node x) {
    return x->next;
}

Item item(Node x) {
    return x->item;
}


link reverse(link x) {
    link current = x;
    link new_head = 0;
    while (current != 0) {
        link temp = current->next;
        current->next = new_head;
        new_head = current;
        current = temp;
    }
    return new_head;
}

link sort(link unsorted) {
    // create a dummy head node, pointing to the head of the incoming list
    node heada;
    heada.next = unsorted;
    heada.item = 0;
    link a = &heada;
    // dummy head node, pointing to the real head of the sorted list
    node headb;
    headb.next = 0;
    headb.item = 0;
    link b = &headb;
    link u, from_sorted;
    // traverse the unsorted list from start to end
    for(link from_unsorted = a->next; from_unsorted != 0; from_unsorted = u) {
        u = from_unsorted->next;
        // traverse the sorted list from start to end
        for(from_sorted = b; from_sorted->next != 0; from_sorted = from_sorted->next) {
            // stop when next element in the sorted list is greater than current
            // list in unsorted list
            if (from_sorted->next->item > from_unsorted->item) {
                break;
            }
        }
        // insert element from unsorted list to the correct position in sorted list
        from_unsorted->next = from_sorted->next;
        from_sorted->next = from_unsorted;
    }
    // since we use a head pointer to start of the sorted list, we need
    // to use b->next
    return b->next;
}