//
// Created by evan cornish on 9/30/18.
//

#ifndef TESTING_STRUCTS_TEST_H
#define TESTING_STRUCTS_TEST_H


typedef struct node_str * NODE;

struct node_str{
    int data;
    NODE * next;
};


NODE test_node();

#endif //TESTING_STRUCTS_TEST_H
