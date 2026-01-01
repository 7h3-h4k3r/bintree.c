#include<stdio.h>
#include <string.h>
#include <stdlib.h>
#include "../header/include.h"



Node* _creatNode(int data){
    Node *new_node = (Node*)malloc(sizeof(Node));
    if (new_node==NULL){
        printf("Memory Allocation Failed");
        return NULL;
    }

    new_node->data = data;
    new_node->left = NULL;
    new_node->right = NULL;
}

void _preorder(Node *root){
    if (root==NULL){
        return;
    }
    printf("[%d] ",root->data);
    _preorder(root->left);
    _preorder(root->right);
}


void __init__(bintree *t_tree){
    t_tree->root;
    t_tree->creatNode = _creatNode;
    t_tree->preorder =  _preorder;    
}