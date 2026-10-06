//
// Created by aldin on 15/02/2025.
//

#include "../include/EdgeWeightedGraph.h"

#include <fstream>
#include <stdexcept>

EdgeWeightedGraph::EdgeWeightedGraph(int V) {
    // your code
}

EdgeWeightedGraph::EdgeWeightedGraph(const char *file_path) {
    // your code
}

EdgeWeightedGraph::~EdgeWeightedGraph() {
    // your code
}

EdgeWeightedGraph::EdgeWeightedGraph(const EdgeWeightedGraph &src) {
    // your code
}

EdgeWeightedGraph &EdgeWeightedGraph::operator=(const EdgeWeightedGraph &src) {
    // your code
    throw std::logic_error("EdgeWeightedGraph::operator=() is not implemented yet");
}

EdgeWeightedGraph::EdgeWeightedGraph(EdgeWeightedGraph &&src) noexcept {
    // your code
}

EdgeWeightedGraph &EdgeWeightedGraph::operator=(EdgeWeightedGraph &&src) noexcept {
    // your code
    return *this;
}

void EdgeWeightedGraph::add_edge(int u, int v, double w) {
    // your code
}

int EdgeWeightedGraph::get_E() const {
    // your code
    throw std::logic_error("EdgeWeightedGraph::get_E() is not implemented yet");
}

int EdgeWeightedGraph::get_V() const {
    // your code
    throw std::logic_error("EdgeWeightedGraph::get_V() is not implemented yet");
}

std::vector<Edge> &EdgeWeightedGraph::get_adj(const int v) const {
    // your code
    throw std::logic_error("EdgeWeightedGraph::get_adj() is not implemented yet");
}

std::vector<Edge> EdgeWeightedGraph::get_all_edges() const {
    // your code
    throw std::logic_error("EdgeWeightedGraph::get_all_edges() is not implemented yet");
}



