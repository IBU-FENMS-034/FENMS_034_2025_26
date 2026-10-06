//
// Created by aldin on 10/03/2025.
//

#ifndef LINKEDLIST_TPP
#define LINKEDLIST_TPP
#include <cstddef>
#include <iostream>
#include <iterator>
#include <stdexcept>

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
    throw std::logic_error("LinkedList::get() is not implemented yet");
}

template<typename Data>
const Data& LinkedList<Data>::get(int index) const {
    // your code
    throw std::logic_error("LinkedList::get() is not implemented yet");
}

template<typename Data>
int LinkedList<Data>::count() const {
    // your code
    throw std::logic_error("LinkedList::count() is not implemented yet");
}

template<typename Data>
void LinkedList<Data>::reverse() {
    // your code
}

template<typename Data>
class LinkedList<Data>::Iterator {
private:
    Node<Data>* current;
public:
    using iterator_category = std::forward_iterator_tag;
    using value_type = Data;
    using difference_type = std::ptrdiff_t;
    using pointer = Data*;
    using reference = Data&;

    explicit Iterator(Node<Data>* current) : current(current) {}
    Data& operator*() {
        // your code
        throw std::logic_error("LinkedList::Iterator::operator*() is not implemented yet");
    }
    Iterator& operator++() {
        // your code
        throw std::logic_error("LinkedList::Iterator::operator++() is not implemented yet");
    }

    Iterator operator++(int) {
        // your code
        throw std::logic_error("LinkedList::Iterator::operator++() is not implemented yet");
    }

    bool operator==(const Iterator& other) const {
        // your code
        throw std::logic_error("LinkedList::Iterator::operator==() is not implemented yet");
    }

    bool operator!=(const Iterator& other) const {
        // your code
        throw std::logic_error("LinkedList::Iterator::operator!=() is not implemented yet");
    }
};

template<typename Data>
typename LinkedList<Data>::Iterator LinkedList<Data>::begin() {
    // your code
    throw std::logic_error("LinkedList::begin() is not implemented yet");
}

template<typename Data>
typename LinkedList<Data>::Iterator LinkedList<Data>::end() {
    // your code
    throw std::logic_error("LinkedList::end() is not implemented yet");
}

template<typename Data>
const Data& LinkedList<Data>::operator[](int index) const {
    // your code
    throw std::logic_error("LinkedList::operator[]() is not implemented yet");
}

template<typename Data>
Data& LinkedList<Data>::operator[](const int index) {
    // your code
    throw std::logic_error("LinkedList::operator[]() is not implemented yet");
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
    throw std::logic_error("LinkedList::operator=() is not implemented yet");
}

template<typename Data>
LinkedList<Data>::LinkedList(LinkedList<Data> &&src) noexcept {
    // your code
}

template<typename Data>
LinkedList<Data> &LinkedList<Data>::operator=(LinkedList<Data> &&src) noexcept {
    // your code
    return *this;
}

template<typename Data>
LinkedList<Data>::LinkedList(std::initializer_list<Data> list) {
    // your code
}

#endif //LINKEDLIST_TPP
