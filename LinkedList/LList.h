#ifndef LLIST_H
#define LLIST_H


#include <iostream>

struct node
{
    int     x;
    int     y;
    node*   prev;
    node*   next;
};

class LList
{
    public:
        LList();                        // Default Constructor
        LList(int, int);                // Constructor
        void    add_node(int, int);     // Adds a node to the linked list
        void    print_list_forward();
        void    print_list_backward();

        virtual ~LList();               // Destructor
    protected:
    private:
        node*   node_head;
        node*   node_tail;
        node*   current_node;
        void    clear_list();
};

#endif // LLIST_H
