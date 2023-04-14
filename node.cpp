//
// Created by Inquisition on 12.04.2023.
//

#include "node.h"

node::node(std::string &val):
    val(val),
    next(nullptr)
{}

node::~node() {
    free(next);
}


