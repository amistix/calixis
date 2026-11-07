#pragma once
#include "../value.hpp"
#include <memory>

namespace calixis {

    template<typename T>
    class expression_node {
    public:
        expression_node() = default;

        explicit expression_node(
            std::unique_ptr<expression_node<T>> inner_node
        )
            : inner_node_(std::move(inner_node)) {}

        virtual ~expression_node() = default;

        virtual value<T> substitute(value<T> x) {
            if (inner_node_) {
                return apply(inner_node_->substitute(std::move(x)));
            }

            return apply(std::move(x));
        }

    protected:
        virtual value<T> apply(value<T> x) = 0;

    private:
        std::unique_ptr<expression_node<T>> inner_node_;
    };

}
