//
// Created by aldin on 16/03/2025.
//

#ifndef STACK_TPP
#define STACK_TPP

template<typename Data>
void Stack<Data>::push(const Data& data) {
    // your code
}

template<typename Data>
Data Stack<Data>::pop() {
    // your code
}

template<typename Data>
const Data& Stack<Data>::peek() const {
    // your code
}

template<typename Data>
bool Stack<Data>::is_empty() const {
    // your code
}

template<typename Data>
int Stack<Data>::size() const {
    // your code
}

template<typename Data>
void Stack<Data>::reverse() {
    // your code
}

template<typename Data>
Stack<Data>::~Stack() {
    // your code
}

template<typename Data>
Stack<Data>::Stack(std::initializer_list<Data> stack) {
    // your code
}

template<typename Data>
Stack<Data>::Stack(const Stack &src) {
    // your code
}

template<typename Data>
Stack<Data> &Stack<Data>::operator=(const Stack &src) {
    // your code
}

template<typename Data>
Stack<Data>::Stack(Stack &&src) noexcept {
    // your code
}

template<typename Data>
Stack<Data> &Stack<Data>::operator=(Stack &&src) noexcept {
    // your code
}

#endif //STACK_TPP
