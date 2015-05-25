#include <iostream>
#include "LList.h"

using namespace std;

void test_node();

int main()
{
    test_node();
    return 0;
}

void test_node(){
    LList*   node_list = new LList();

    node_list->add_node(3, 4);
    node_list->add_node(7, 9);
    node_list->add_node(0, 43);
    node_list->add_node(101, 404);

    cout << "+========+" << endl;
    cout << "|  List  |" << endl;
    cout << "+========+" << endl;
    cout << "Forwards: " << endl;
    node_list->print_list_forward();
    cout << endl << "Backwards: " << endl;
    node_list->print_list_backward();

    cout << endl;
    delete node_list;
}
