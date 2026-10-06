//
// Created by aldin on 13/02/2025.
//

#pragma once
#include <stdexcept>

template<typename Key, typename Value>
RedBlackTree<Key, Value>::~RedBlackTree() {
    // your code
}

template<typename Key, typename Value>
void RedBlackTree<Key, Value>::delete_tree(Node<Key, Value> *x) {
    // your code
}

template<typename Key, typename Value>
RedBlackTree<Key, Value>::RedBlackTree(std::initializer_list<std::pair<Key, Value> > list) {
    // your code
}

template<typename Key, typename Value>
RedBlackTree<Key, Value>::RedBlackTree(const RedBlackTree<Key, Value> &src) {
    // your code
}

template<typename Key, typename Value>
RedBlackTree<Key, Value> &RedBlackTree<Key, Value>::operator=(const RedBlackTree<Key, Value> &src) {
    // your code
    throw std::logic_error("RedBlackTree::operator=() is not implemented yet");
}

template<typename Key, typename Value>
Node<Key, Value>* RedBlackTree<Key, Value>::copy_tree(Node<Key, Value> *x) {
    // your code
    throw std::logic_error("RedBlackTree::copy_tree() is not implemented yet");
}

template<typename Key, typename Value>
RedBlackTree<Key, Value>::RedBlackTree(RedBlackTree<Key, Value> &&src) noexcept {
    // your code
}

template<typename Key, typename Value>
RedBlackTree<Key, Value> &RedBlackTree<Key, Value>::operator=(RedBlackTree<Key, Value> &&src) noexcept {
    // your code
    return *this;
}

template<typename Key, typename Value>
Value RedBlackTree<Key, Value>::get(Key key) {
    // your code
    throw std::logic_error("RedBlackTree::get() is not implemented yet");
}

template<typename Key, typename Value>
int RedBlackTree<Key, Value>::size() const {
    // your code
    throw std::logic_error("RedBlackTree::size() is not implemented yet");
}

template<typename Key, typename Value>
int RedBlackTree<Key, Value>::size(Node<Key, Value> *x) const {
    // your code
    throw std::logic_error("RedBlackTree::size() is not implemented yet");
}

template<typename Key, typename Value>
Node<Key, Value> *RedBlackTree<Key, Value>::rotate_left(Node<Key, Value> *h) {
    // your code
    throw std::logic_error("RedBlackTree::rotate_left() is not implemented yet");
}

template<typename Key, typename Value>
Node<Key, Value> *RedBlackTree<Key, Value>::rotate_right(Node<Key, Value> *h) {
    // your code
    throw std::logic_error("RedBlackTree::rotate_right() is not implemented yet");
}

template<typename Key, typename Value>
void RedBlackTree<Key, Value>::flip_colors(Node<Key, Value> *h) {
    // your code
}


template<typename Key, typename Value>
bool RedBlackTree<Key, Value>::is_red(Node<Key, Value> *x) const {
    // your code
    throw std::logic_error("RedBlackTree::is_red() is not implemented yet");
}

template<typename Key, typename Value>
void RedBlackTree<Key, Value>::put(Key key, Value value) {
    // your code
}

template<typename Key, typename Value>
Node<Key, Value> *RedBlackTree<Key, Value>::put(Node<Key, Value> *x, Key key, Value value) {
    // your code
    throw std::logic_error("RedBlackTree::put() is not implemented yet");
}

template<typename Key, typename Value>
Node<Key, Value> *RedBlackTree<Key, Value>::fix_up(Node<Key, Value>* h) {
    // your code
    throw std::logic_error("RedBlackTree::fix_up() is not implemented yet");
}

template<typename Key, typename Value>
Key RedBlackTree<Key, Value>::find_min() {
    // your code
    throw std::logic_error("RedBlackTree::find_min() is not implemented yet");
}

template<typename Key, typename Value>
Node<Key, Value> *RedBlackTree<Key, Value>::find_min(Node<Key, Value> *x) {
    // your code
    throw std::logic_error("RedBlackTree::find_min() is not implemented yet");
}

template<typename Key, typename Value>
Node<Key, Value> *RedBlackTree<Key, Value>::move_red_left(Node<Key, Value> *h) {
    // your code
    throw std::logic_error("RedBlackTree::move_red_left() is not implemented yet");
}

template<typename Key, typename Value>
Node<Key, Value> *RedBlackTree<Key, Value>::move_red_right(Node<Key, Value> *h) {
    // your code
    throw std::logic_error("RedBlackTree::move_red_right() is not implemented yet");
}

template<typename Key, typename Value>
void RedBlackTree<Key, Value>::delete_min() {
    // your code
}

template<typename Key, typename Value>
Node<Key, Value> *RedBlackTree<Key, Value>::delete_min(Node<Key, Value> *h) {
    // your code
    throw std::logic_error("RedBlackTree::delete_min() is not implemented yet");
}

template<typename Key, typename Value>
void RedBlackTree<Key, Value>::delete_any(Key key) {
    // your code
}

template<typename Key, typename Value>
Node<Key, Value> *RedBlackTree<Key, Value>::delete_any(Node<Key, Value> *h, Key key) {
    // your code
    throw std::logic_error("RedBlackTree::delete_any() is not implemented yet");
}



