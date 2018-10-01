//
// Created by evan cornish on 9/30/18.
//
#include <stdlib.h>
#include "test.h"

struct node_str{
    int data;
    NODE * next;
};


NODE test_node(){
    NODE test = (NODE)malloc(sizeof(struct node_str));
    return test;
}