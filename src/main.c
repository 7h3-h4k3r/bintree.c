#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "../header/include.h"

int main(){
    bintree *t_tree = (bintree*)malloc(sizeof(bintree));
    __init__(t_tree);
    t_tree->root = t_tree->creatNode(10);
    t_tree->root->left = t_tree->creatNode(20);
    t_tree->root->right = t_tree->creatNode(30);
    t_tree->root->left->left = t_tree->creatNode(40);
    t_tree->root->left->right = t_tree->creatNode(50);
    t_tree->preorder(t_tree->root);
}