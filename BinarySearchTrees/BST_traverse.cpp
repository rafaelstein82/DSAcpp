        //
        // Created by rafaelst on 25/03/25.
        //

        #include <iostream>
        #include "BST_traverse.h"

        class BST_Node;

        BST_traverse::BST_traverse() {

            root = nullptr;
        }

        void destroy(BST_Node* currentBST_Node) {
            if (currentBST_Node->left) destroy(currentBST_Node->left);
            if (currentBST_Node->right) destroy(currentBST_Node->right);
            delete currentBST_Node;
        }

        BST_traverse::~BST_traverse() { destroy(root); }


        bool BST_traverse::insert(int value) {
            BST_Node* newBST_Node = new BST_Node(value);
            if (root == nullptr) {
                root = newBST_Node;
                return true;
            }
            BST_Node* temp = root;
            while(true) {
                if (newBST_Node->value == temp->value) return false;
                if (newBST_Node->value < temp->value) {
                    if (temp->left == nullptr) {
                        temp->left = newBST_Node;
                        return true;
                    }
                    temp = temp->left;
                } else {
                    if (temp->right == nullptr) {
                        temp->right = newBST_Node;
                        return true;
                    }
                    temp = temp->right;
                }
            }
        }

        bool BST_traverse::contains(int value) {
            if (root == nullptr) return false;
            BST_Node* temp = root;
            while (temp) {
                if (value < temp->value) {
                    temp = temp->left;
                } else if (value > temp->value) {
                    temp = temp->right;
                } else {
                    return true;
                }
            }
            return false;
        }
