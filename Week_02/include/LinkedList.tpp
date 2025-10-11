//
// Created by aldin on 10/03/2025.
//

#ifndef LINKEDLIST_TPP
#define LINKEDLIST_TPP
#include <stdexcept>
#include <iterator>

template<typename Data>
void LinkedList<Data>::add_to_front(const Data& data) {
    // your code
}

template<typename Data>
void LinkedList<Data>::remove_from_front() {
    // your code
}

template<typename Data>
void LinkedList<Data>::add_to_back(const Data& data) {
    // your code
}

template<typename Data>
void LinkedList<Data>::remove_from_back() {
    // your code
}

template<typename Data>
Data& LinkedList<Data>::get(int index) {
    // your code
}

template<typename Data>
int LinkedList<Data>::count() const {
    // your code
}

template<typename Data>
void LinkedList<Data>::reverse() {
    // your code
}

template<typename Data>
class LinkedList<Data>::Iterator : public std::iterator<std::forward_iterator_tag, Data> {
private:
    Node<Data>* current;
public:
    explicit Iterator(Node<Data>* current) : current(current) {}
    Data& operator*() {
        // your code
    }
    Iterator& operator++() {
        // your code
    }

    Iterator operator++(int) {
        // your code
    }

    bool operator==(const Iterator& other) const {
        // your code
    }

    bool operator!=(const Iterator& other) const {
        // your code
    }
};

template<typename Data>
typename LinkedList<Data>::Iterator LinkedList<Data>::begin() {
    // your code
}

template<typename Data>
typename LinkedList<Data>::Iterator LinkedList<Data>::end() {
    // your code
}

template<typename Data>
const Data& LinkedList<Data>::operator[](int index) const {
    // your code
}

template<typename Data>
Data& LinkedList<Data>::operator[](const int index) {
    // your code
}

template<typename Data>
LinkedList<Data>::~LinkedList() {
    // your code
}

template<typename Data>
LinkedList<Data>::LinkedList(const LinkedList<Data> &src) {
    // your code
}

template<typename Data>
LinkedList<Data> &LinkedList<Data>::operator=(const LinkedList<Data> &src) {
    // your code
}

template<typename Data>
LinkedList<Data>::LinkedList(LinkedList<Data> &&src) noexcept {
    // your code
}

template<typename Data>
LinkedList<Data> &LinkedList<Data>::operator=(LinkedList<Data> &&src) noexcept {
    // your code
}

template<typename Data>
LinkedList<Data>::LinkedList(std::initializer_list<Data> list) {
    // your code
}

#endif //LINKEDLIST_TPP
