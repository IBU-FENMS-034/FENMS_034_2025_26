//
// Created by aldin on 14/02/2025.
//

#include "../include/Digraph.h"

#include <fstream>
#include <vector>
#include <stdexcept>

Digraph::Digraph(int V) {
    // your code
}

Digraph::Digraph(const char *file_path) {
    // your code
}

Digraph::~Digraph() {
    // your code
}

Digraph::Digraph(const Digraph &src) {
    // your code
}

Digraph &Digraph::operator=(const Digraph &src) {
    // your code
    throw std::logic_error("Digraph::operator=() is not implemented yet");
}

Digraph::Digraph(Digraph &&src) noexcept {
    // your code
}

Digraph &Digraph::operator=(Digraph &&src) noexcept {
    // your code
    return *this;
}

void Digraph::add_edge(int u, int v) {
    // your code
}

int Digraph::get_E() const {
    // your code
    throw std::logic_error("Digraph::get_E() is not implemented yet");
}

int Digraph::get_V() const {
    // your code
    throw std::logic_error("Digraph::get_V() is not implemented yet");
}

std::vector<int> &Digraph::get_adj(const int v) const {
    // your code
    throw std::logic_error("Digraph::get_adj() is not implemented yet");
}

Digraph Digraph::reverse() const {
    // your code
    throw std::logic_error("Digraph::reverse() is not implemented yet");
}

