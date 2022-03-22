

#include <string>
#include "Direction.hpp"
#include <vector>
#include <iterator>
#include <map>
using namespace std;
namespace ariel {

    class Page{


    };
    class Notebook {
    private:
        map<int, Page> pagesMap;
    public:
        Notebook();
        void write(unsigned int page, unsigned int row, unsigned int col, Direction dir, string text);
        string read(unsigned int page, unsigned int row, unsigned int col, Direction dir, unsigned int len);
        void erase(unsigned int page, unsigned int row, unsigned int col, Direction dir, unsigned int len);
        void show(unsigned int page);
    };
}