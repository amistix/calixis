#pragma once
#include "../expression_node.hpp"
#include <cmath>

namespace calixis {

    template<typename T>
    class cos: public expression_node<T> {
    public:
        using expression_node<T>::expression_node;
    protected:
        value<T> apply(value<T> x) override {
            return value<T>(std::cos(x.get()));
        }
    };

}
