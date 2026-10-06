//
// Created by aldin on 14/02/2025.
//

#include "../include/Graph.h"

#include <fstream>
#include <stdexcept>

Graph::Graph(int V) {
    // your code
}

Graph::Graph(const char *file_path) {
    // your code
}

Graph::~Graph() {
    // your code
}

Graph::Graph(const Graph &src) {
    // your code
}

Graph &Graph::operator=(const Graph &src) {
    // your code
    throw std::logic_error("Graph::operator=() is not implemented yet");
}

Graph::Graph(Graph &&src) noexcept {
    // your code
}

Graph &Graph::operator=(Graph &&src) noexcept {
    // your code
    return *this;
}

void Graph::add_edge(int u, int v) {
    // your code
}

int Graph::get_E() const {
    // your code
    throw std::logic_error("Graph::get_E() is not implemented yet");
}

int Graph::get_V() const {
    // your code
    throw std::logic_error("Graph::get_V() is not implemented yet");
}

std::vector<int> &Graph::get_adj(const int v) const {
    // your code
    throw std::logic_error("Graph::get_adj() is not implemented yet");
}


