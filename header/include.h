#ifndef BIN_TREE
#define BIN_TREE

typedef struct  Node{
    int data;
    struct Node *left;
    struct Node *right;
}Node;


typedef struct bintree
{
    Node *root;
    Node* (*creatNode)(int data);
    void (*preorder)(Node *root);
    void (*inorder)(Node *root);
    void (*postorder)(Node *root);
}bintree;


void __init__(bintree *t_btree);
Node* creatNode(Node *t_node, int data);
void preorder(Node *root);
void inorder(Node *root);
void postorder(Node *root);

#endif  