/**
 * Demo program for notebook exercise.
 * 
 * Author: Erel Segal-Halevi
 * Edited by: Tal Zichlinsky
 * Since : 2022-01
 */

#include "Notebook.hpp"
#include "Direction.hpp"

using ariel::Direction;

#include <iostream>
#include <stdexcept>

using namespace std;

int main() {
    ariel::Notebook notebook;
    notebook.write(11, 14, 5, Direction::Horizontal,
                   "412442");
    notebook.write(11, 18, 5, Direction::Horizontal,
                   "41242");
    notebook.write(11, 15, 30, Direction::Vertical, "abcde");
    notebook.erase(11, 17, 30, ariel::Direction::Vertical, 9);
    notebook.show(11);
}
