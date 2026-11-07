#pragma once
#include "value.hpp"
#include "variable.hpp"
#include "nodes/expression_node.hpp"
#include "nodes/cos_node.hpp"
#include "nodes/identity_node.hpp"

namespace calixis {

    template<typename T>
    auto cos(std::unique_ptr<expression_node<T>> inner) {
        return std::make_unique<cos_node<T>>(std::move(inner));
    }

    template<typename T>
    auto identity(variable x) {
        return std::make_unique<identity_node<T>>(std::move(x));
    }

}
