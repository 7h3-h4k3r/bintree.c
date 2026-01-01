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
void _inorder(Node *root){
    if (root==NULL)return;
    _inorder(root->left);
    printf("%d ",root->data);
    _inorder(root->right);
}

void _postorder(Node *root){
    if (root==NULL)return;
    _postorder(root->left);
    _postorder(root->right);
    printf("[%d] ",root->data);
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
    t_tree->inorder =  _inorder;  
    t_tree->postorder =  _postorder;   
}