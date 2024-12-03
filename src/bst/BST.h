//
// Created by Bryannsss.
//

#ifndef BST_H
#define BST_H

#include <iostream>
#include "../node/Node.h"

template<class T>
class BST {
public:
    BST() : root(nullptr) {
    }

    ~BST() {
        destroy(root);
    }

    int size() {
        return size(root);
    }

    int height() {
        return height(root);
    }

    void insert(const T &data) {
        root = insert(data, root);
    }

    Node<T> *search(const T &data) {
        return search(data, root);
    }

    void inorder() {
        std::cout << "Inorder: ";
        inorder(root);
        std::cout << "\n";
    }

    void preorder() {
        std::cout << "Preorder: ";
        preorder(root);
        std::cout << "\n";
    }

    void postorder() {
        std::cout << "Postorder: ";
        postorder(root);
        std::cout << "\n";
    }

private:
    Node<T> *root;

    int size(Node<T> *node) {
        if (node == nullptr)
            return 0;
        return 1 + size(node->left) + size(node->right);
    }

    int height(Node<T> *node) {
        if (node == nullptr)
            return 0;
        return 1 + std::max(height(node->left), height(node->right));
    }

    Node<T> *insert(const T &data, Node<T> *node) {
        if (node == nullptr)
            return new Node<T>(data);

        if (data < node->data)
            node->left = insert(data, node->left);
        else
            node->right = insert(data, node->right);

        return node;
    }

    Node<T> *search(const T &data, Node<T> *node) {
        if (data == node->data)
            return node;

        if (data < node->data)
            return search(data, node->left);
        return search(data, node->right);
    }

    void destroy(Node<T> *node) {
        if (node == nullptr)
            return;

        destroy(node->left);
        destroy(node->right);
        delete node;
    }

    void inorder(Node<T> *node) {
        if (node == nullptr)
            return;

        inorder(node->left);
        std::cout << node->data << " ";
        inorder(node->right);
    }

    void preorder(Node<T> *node) {
        if (node == nullptr)
            return;

        std::cout << node->data << " ";
        inorder(node->left);
        inorder(node->right);
    }

    void postorder(Node<T> *node) {
        if (node == nullptr)
            return;

        inorder(node->left);
        inorder(node->right);
        std::cout << node->data << " ";
    }
};

#endif //BST_H
