//
// Created by aldin on 15/02/2025.
//

#include "../include/Edge.h"

#include <stdexcept>

Edge::Edge(int u, int v, double w) {
    // your code
}

int Edge::get_u() const {
    // your code
    throw std::logic_error("Edge::get_u() is not implemented yet");
}

int Edge::get_v() const {
    // your code
    throw std::logic_error("Edge::get_v() is not implemented yet");
}

double Edge::get_weight() const {
    // your code
    throw std::logic_error("Edge::get_weight() is not implemented yet");
}

int Edge::other(int vertex) const {
    // your code
    throw std::logic_error("Edge::other() is not implemented yet");
}

std::ostream &operator<<(std::ostream &os, const Edge &edge) {
    os << "[(" << edge.u << "," << edge.v << "): " << edge.weight << "]";
    return os;
}


