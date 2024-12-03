//
// Created by Bryannsss.
//

#ifndef NODE_H
#define NODE_H

#include <iostream>

template<class T>
struct Node {
    T data;
    Node *left;
    Node *right;

    explicit Node(const T &data)
        : data(data), left(nullptr), right(nullptr) {
    }

    friend std::ostream &operator<<(std::ostream &os, const Node *other) {
        const auto aux = other == nullptr ? T(-1) : other->data;
        os << aux;
        return os;
    }
};

#endif //NODE_H
