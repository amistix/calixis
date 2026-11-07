#include <utility>

namespace calixis {

    template<typename T>
    class value {
    public:
        explicit value(T data)
            : data_(std::move(data)) {}
        virtual ~value() = default;

        T get() const { return data_; }
    private:
        const T data_;
    };

}
