//
// Created by aldin on 16/03/2025.
//

#ifndef QUEUE_TPP
#define QUEUE_TPP
#include <stdexcept>

template<typename Data>
void Queue<Data>::enqueue(const Data& data) {
    // your code
}

template<typename Data>
Data Queue<Data>::dequeue() {
    // your code
    throw std::logic_error("Queue::dequeue() is not implemented yet");
}

template<typename Data>
const Data &Queue<Data>::peek() const {
    // your code
    throw std::logic_error("Queue::peek() is not implemented yet");
}

template<typename Data>
bool Queue<Data>::is_empty() const {
    // your code
    throw std::logic_error("Queue::is_empty() is not implemented yet");
}

template<typename Data>
int Queue<Data>::size() const {
    // your code
    throw std::logic_error("Queue::size() is not implemented yet");
}

template<typename Data>
void Queue<Data>::reverse() {
    // your code
}

template<typename Data>
Queue<Data>::~Queue() {
    // your code
}

template<typename Data>
Queue<Data>::Queue(std::initializer_list<Data> queue) {
    // your code
}

template<typename Data>
Queue<Data>::Queue(const Queue &src) {
    // your code
}

template<typename Data>
Queue<Data> &Queue<Data>::operator=(const Queue &src) {
    // your code
    throw std::logic_error("Queue::operator=() is not implemented yet");
}

template<typename Data>
Queue<Data>::Queue(Queue &&src) noexcept {
    // your code
}

template<typename Data>
Queue<Data> &Queue<Data>::operator=(Queue &&src) noexcept {
    // your code
    return *this;
}

#endif //QUEUE_TPP
