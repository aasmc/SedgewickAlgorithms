#pragma once

typedef int Item;
struct node {
    Item item;
    node *next;
};

typedef node *link;
typedef link Node;

void construct(int);
Node new_node(int);
void return_to_free(Node);
void insert(Node, Node);
Node remove_first_from_list(Node x);
Node next(Node);
Item item(Node);

link reverse(link x);

link sort(link unsorted);