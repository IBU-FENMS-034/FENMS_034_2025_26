//
// Created by aldin on 12/02/2025.
//

#pragma once
#include <stdexcept>

template<typename Data>
BinaryHeap<Data>::BinaryHeap(bool is_max) {
    // your code
}

template<typename Data>
BinaryHeap<Data>::BinaryHeap(std::initializer_list<Data> list, bool is_max) {
    // your code
}

template<typename Data>
BinaryHeap<Data>::BinaryHeap(const BinaryHeap &src) {
    // your code
}

template<typename Data>
BinaryHeap<Data> &BinaryHeap<Data>::operator=(const BinaryHeap &src) {
    // your code
    throw std::logic_error("BinaryHeap::operator=() is not implemented yet");
}

template<typename Data>
BinaryHeap<Data>::BinaryHeap(BinaryHeap &&src) noexcept {
    // your code
}

template<typename Data>
BinaryHeap<Data> &BinaryHeap<Data>::operator=(BinaryHeap &&src) noexcept {
    // your code
    return *this;
}

template<typename Data>
BinaryHeap<Data>::~BinaryHeap() {
    // your code
}

template<typename Data>
void BinaryHeap<Data>::insert(const Data &data) {
    // your code
}

template<typename Data>
void BinaryHeap<Data>::swim(int k) {
    // your code
}

template<typename Data>
Data BinaryHeap<Data>::poll() {
    // your code
    throw std::logic_error("BinaryHeap::poll() is not implemented yet");
}

template<typename Data>
void BinaryHeap<Data>::sink(int k) {
    // your code
}

template<typename Data>
Data BinaryHeap<Data>::peek() {
    // your code
    throw std::logic_error("BinaryHeap::peek() is not implemented yet");
}

template<typename Data>
bool BinaryHeap<Data>::is_empty() const {
    // your code
    throw std::logic_error("BinaryHeap::is_empty() is not implemented yet");
}

template<typename Data>
int BinaryHeap<Data>::size() const {
    // your code
    throw std::logic_error("BinaryHeap::size() is not implemented yet");
}

template<typename Data>
void BinaryHeap<Data>::resize(int capacity) {
    // your code
}

template<typename Data>
bool BinaryHeap<Data>::less(int a, int b) {
    // your code
    throw std::logic_error("BinaryHeap::less() is not implemented yet");
}

template<typename Data>
void BinaryHeap<Data>::swap(int a, int b) {
    // your code
}



