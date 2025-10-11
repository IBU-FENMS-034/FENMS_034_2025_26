//
// Created by aldin on 12/02/2025.
//

#pragma once

template<typename Key, typename Value>
BinarySearchTree<Key, Value>::~BinarySearchTree() {
    // your code
}

template<typename Key, typename Value>
void BinarySearchTree<Key, Value>::delete_tree(Node<Key, Value> *x) {
    // your code
}

template<typename Key, typename Value>
BinarySearchTree<Key, Value>::BinarySearchTree(const BinarySearchTree<Key, Value> &src) {
    // your code
}

template<typename Key, typename Value>
BinarySearchTree<Key, Value> &BinarySearchTree<Key, Value>::operator=(const BinarySearchTree<Key, Value> &src) {
    // your code
}

template<typename Key, typename Value>
Node<Key, Value>* BinarySearchTree<Key, Value>::copy_tree(Node<Key, Value> *x) {
    // your code
}

template<typename Key, typename Value>
BinarySearchTree<Key, Value>::BinarySearchTree(BinarySearchTree<Key, Value> &&src) noexcept {
    // your code
}

template<typename Key, typename Value>
BinarySearchTree<Key, Value> &BinarySearchTree<Key, Value>::operator=(BinarySearchTree<Key, Value> &&src) noexcept {
    // your code
}

template<typename Key, typename Value>
BinarySearchTree<Key, Value>::BinarySearchTree(std::initializer_list<std::pair<Key, Value> > list) {
    // your code
}

template<typename Key, typename Value>
Value BinarySearchTree<Key, Value>::get(Key key) {
    // your code
}

template<typename Key, typename Value>
int BinarySearchTree<Key, Value>::size() const {
    // your code
}

template<typename Key, typename Value>
int BinarySearchTree<Key, Value>::size(Node<Key, Value> *x) const {
    // your code
}

template<typename Key, typename Value>
void BinarySearchTree<Key, Value>::put(Key key, Value value) {
    // your code
}

template<typename Key, typename Value>
Node<Key, Value> *BinarySearchTree<Key, Value>::put(Node<Key, Value> *x, Key key, Value value) {
    // your code
}

template<typename Key, typename Value>
Key BinarySearchTree<Key, Value>::find_min() {
    // your code
}

template<typename Key, typename Value>
Node<Key, Value> *BinarySearchTree<Key, Value>::find_min(Node<Key, Value> *x) {
    // your code
}

template<typename Key, typename Value>
Key BinarySearchTree<Key, Value>::find_max() {
    // your code
}

template<typename Key, typename Value>
Node<Key, Value> *BinarySearchTree<Key, Value>::find_max(Node<Key, Value> *x) {
    // your code
}

template<typename Key, typename Value>
int BinarySearchTree<Key, Value>::rank(Key key) {
    // your code
}

template<typename Key, typename Value>
int BinarySearchTree<Key, Value>::rank(Node<Key, Value> *x, Key key) {
    // your code
}

template<typename Key, typename Value>
void BinarySearchTree<Key, Value>::delete_min() {
    // your code
}

template<typename Key, typename Value>
Node<Key, Value> *BinarySearchTree<Key, Value>::delete_min(Node<Key, Value> *x) {
    // your code
}

template<typename Key, typename Value>
void BinarySearchTree<Key, Value>::delete_any(Key key) {
    // your code
}

template<typename Key, typename Value>
Node<Key, Value> *BinarySearchTree<Key, Value>::delete_any(Node<Key, Value> *x, Key key) {
    // your code
}

template<typename Key, typename Value>
void BinarySearchTree<Key, Value>::inorder() {
    // your code
}

template<typename Key, typename Value>
void BinarySearchTree<Key, Value>::inorder(Node<Key, Value> *x) {
    // your code
}

template<typename Key, typename Value>
void BinarySearchTree<Key, Value>::preorder() {
    // your code
}

template<typename Key, typename Value>
void BinarySearchTree<Key, Value>::preorder(Node<Key, Value> *x) {
    // your code
}

template<typename Key, typename Value>
void BinarySearchTree<Key, Value>::postorder() {
    // your code
}

template<typename Key, typename Value>
void BinarySearchTree<Key, Value>::postorder(Node<Key, Value> *x) {
    // your code
}









