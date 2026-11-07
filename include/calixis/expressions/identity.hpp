#pragma once
#include "../expression_node.hpp"
#include "../variable.hpp"

namespace calixis {

    template<typename T>
    class identity: public expression_node<T> {
    public:
        explicit identity(variable x) {}
    };

}
