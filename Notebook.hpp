

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
        void write(int page, int row, int col, Direction dir, string text);
        string read(int page, int row, int col, Direction dir, int len);
        void erase(int page, int row, int col, Direction dir, int len);
        void show(int page);
    };
}