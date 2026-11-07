#pragma once
#include "expression_node.hpp"
#include "../variable.hpp"

namespace calixis {

    template<typename T>
    class identity_node: public expression_node<T> {
    public:
        using expression_node<T>::expression_node;
        explicit identity_node(variable x) {}
    protected:
        value<T> apply(value<T> x) override {
            return x;
        }
    };

}
