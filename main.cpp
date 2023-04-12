
#include "vertical_list.h"


int main() {
    system("color 0A");
    std::string a = "a";
    std::string b = "b";
    std::string c = "c";
    std::string d = "d";
    std::string e = "e";
    std::cout << "creating list...                      ";
    vertical_list test_list;
    std::cout << "success\n";
    std::cout << "adding 3 elements...                  ";
    test_list.push_back(a);
    test_list.push_back(b);
    test_list.push_back(c);
    test_list.push_back(d);
    test_list.push_back(e);
    std::cout << "success\n";
    std::cout << "elements:\n";
    test_list.print();
    std::cout << "testing pop_first()...                ";
    test_list.pop_first();
    std::cout << "success\n";
    std::cout << "elments after pop_first():\n";
    test_list.print();
    std::cout << "testing pop_back()...                 ";
    test_list.pop_back();
    std::cout << "success\n";
    std::cout << "elments after pop_back():\n";
    test_list.print();
    std::cout << "testing clear()...                    ";
    test_list.clear();
    std::cout << "success\n";
    std::cout << "elments after clear():\n";
    test_list.print();

}
