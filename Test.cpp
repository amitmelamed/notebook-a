//
// Created by lucas on 21/03/2022.
//
#include "doctest.h"
#include "Notebook.hpp"
#include <string>

using namespace ariel;

TEST_CASE("bad input"){
    SUBCASE("out of bounds"){
        Notebook notebook;
        CHECK_THROWS(notebook.write(50,90,105,ariel::Direction::Horizontal,"out of bound"));
        CHECK_THROWS(notebook.write(50,90,200,ariel::Direction::Vertical,"out of bound"));
        CHECK_THROWS(notebook.read(10,10,105,Direction::Vertical,30));
        CHECK_THROWS(notebook.read(10,10,105,Direction::Horizontal,30));
        CHECK_THROWS(notebook.erase(50,20,10,ariel::Direction::Horizontal,105));
        CHECK_THROWS(notebook.erase(50,20,60,ariel::Direction::Horizontal,46));
        CHECK_THROWS(notebook.write(101,90,105,ariel::Direction::Horizontal,"out of bound"));
        CHECK_THROWS(notebook.write(102,90,200,ariel::Direction::Vertical,"out of bound"));
        CHECK_THROWS(notebook.read(103,10,105,Direction::Vertical,30));
        CHECK_THROWS(notebook.read(104,102,1205,Direction::Horizontal,30));
        CHECK_THROWS(notebook.erase(50,20,150,ariel::Direction::Horizontal,105));
        CHECK_THROWS(notebook.erase(50,220,610,ariel::Direction::Horizontal,46));
    }
    SUBCASE("negative input"){
        Notebook notebook;
        CHECK_THROWS(notebook.write(-10,10,10,Direction::Horizontal,"123"));
        CHECK_THROWS(notebook.write(10,-10,10,Direction::Horizontal,"123"));
        CHECK_THROWS(notebook.write(10,10,-10,Direction::Horizontal,"123"));
        CHECK_THROWS(notebook.read(-10,10,10,Direction::Horizontal,10));
        CHECK_THROWS(notebook.read(10,-10,10,Direction::Horizontal,10));
        CHECK_THROWS(notebook.read(10,10,-10,Direction::Horizontal,10));
        CHECK_THROWS(notebook.read(10,10,10,Direction::Horizontal,-10));
        CHECK_THROWS(notebook.erase(-10,10,10,Direction::Horizontal,10));
        CHECK_THROWS(notebook.erase(10,-10,10,Direction::Horizontal,10));
        CHECK_THROWS(notebook.erase(10,10,-10,Direction::Horizontal,10));
        CHECK_THROWS(notebook.erase(10,10,10,Direction::Horizontal,-10));
    }

}
TEST_CASE("good input"){
    Notebook notebook;
    CHECK_NOTHROW(notebook.write(10,10,10,ariel::Direction::Horizontal,"best test"));
    CHECK_NOTHROW(notebook.write(20,20,20,ariel::Direction::Horizontal,"int the world"));
    CHECK_NOTHROW(notebook.write(30,30,30,ariel::Direction::Horizontal,"give me 100"));
    CHECK_NOTHROW(notebook.write(40,40,40,ariel::Direction::Vertical,"I LOVE BOYS"));
    CHECK_NOTHROW(notebook.erase(40,40,40,ariel::Direction::Vertical,11));
    CHECK_NOTHROW(notebook.read(10,10,10,ariel::Direction::Horizontal,9));
    CHECK_NOTHROW(notebook.read(20,20,20,ariel::Direction::Horizontal,13));
    CHECK_NOTHROW(notebook.read(30,30,30,ariel::Direction::Horizontal,11));
}
