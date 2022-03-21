

#include <string>
#include "Direction.hpp"

namespace ariel {
    class Notebook {

    public:
        void write(int page, int row, int col, Direction dir, std::string text);
        std::string read(int page, int row, int col, Direction dir, int len);
        void erase(int page, int row, int col, Direction dir, int len);
        void show(int page);
    };
}