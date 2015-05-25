#include "LList.h"
#include <iostream>

//=====================================================================================
//Constructors

LList::LList()
{
    // Create a new node and make it the head node
    node_head = new node;

    // Set the data for the head node
    node_head->x    = 0;
    node_head->y    = 0;
    node_head->prev = nullptr;
    node_head->next = nullptr;

    // set the current node to the head (it cant be anything else if the list has only one node)
    current_node = node_head;
}

LList::LList(int x, int y)
{
    // Create a new node and make it the head node
    node_head = new node;

    // Set the data for the head node
    node_head->x    = x;
    node_head->y    = y;
    node_head->prev = nullptr;
    node_head->next = nullptr;

    // set the current node to the head
    current_node = node_head;
}

//=====================================================================================

void LList::add_node(int x, int y){
    // save a temporary previous node
    node*   temp_prev = current_node;

    // Create the new node and assign the pointer to it in the current node
    current_node->next = new node;

    // move to the new node
    current_node = current_node->next;

    //assign the proper pointers
    current_node->prev = temp_prev;
    current_node->next = nullptr;

    // assign the data for the new node
    current_node->x = x;
    current_node->y = y;

    // as this will be the latest entry, it will always be the tail node
    node_tail = current_node;
}

void LList::print_list_forward(){
    node*   print_node = node_head;
    int i = 1;

    while(print_node != NULL){
        std::cout << i << std::endl << "x = " << print_node->x << std::endl << "y = " << print_node->y << std::endl;
        print_node = print_node->next;
        i++;
    }
}

void LList::print_list_backward(){
    node*   print_node = node_tail;
    int i = 1;

    while(print_node != NULL){
        std::cout << i << std::endl << "x = " << print_node->x << std::endl << "y = " << print_node->y << std::endl;
        print_node = print_node->prev;
        i++;
    }
}

void LList::clear_list(){
    // Create a new node to hold the current head
    node*   del_node = node_head;

    while(del_node != NULL){
        // Shift the current head to the next entry in the list
        node_head = node_head->next;

        // Delete the previous head node
        delete del_node;

        // Assign the delete node to the new head
        del_node = node_head;
    }
    node_tail = node_head = NULL;
}

LList::~LList()
{
    clear_list();
}
