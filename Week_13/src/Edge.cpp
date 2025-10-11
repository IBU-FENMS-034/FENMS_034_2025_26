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
}

int Edge::get_v() const {
    // your code
}

double Edge::get_weight() const {
    // your code
}

int Edge::other(int vertex) const {
    // your code
}

std::ostream &operator<<(std::ostream &os, const Edge &edge) {
    os << "[(" << edge.u << "," << edge.v << "): " << edge.weight << "]";
    return os;
}


