    //
    // Created by rafaelst on 25/03/25.
    //
    #pragma once
    #include "BST_Node.h"


    class BST_traverse {
    protected:
        BST_Node* root;

    public:
        BST_traverse();
        void destroy(BST_Node* currentNode);
        ~BST_traverse();
        bool insert(int value);
        bool contains(int value);
    };



