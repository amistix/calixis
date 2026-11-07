#include <atomic>
#include <cstdint>

namespace calixis {

class variable {
public:
    variable() : id_(next_id()) {}

    std::uint64_t get_id() const {
        return id_;
    }

private:
    static std::uint64_t next_id() {
        static std::atomic<std::uint64_t> count{0};
        return ++count;
    }

    const std::uint64_t id_;
};

}
