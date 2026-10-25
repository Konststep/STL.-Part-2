#include <iostream>
#include <vector>
#include <list>
#include <set>
#include <string>

template <typename Container>
void print_container(const Container& container) {

    auto it = container.begin();
    auto end = container.end();

    if (it == end) {
        std::cout << "Контейнер пуст." << std::endl;
        return;
    }

    std::cout << *it;
    it++;

    while (it != end) {
        std::cout << ", " << *it;
        it++;
    }
    std::cout << std::endl;
}

int main() {
   
    std::set<std::string> test_set = {"one", "two", "three", "four", "five", "six" };
    std::cout << "Set: ";
    print_container(test_set);

    std::list<std::string> test_list = { "one", "two", "three", "four", "five", "six" };
    std::cout << "List: ";
    print_container(test_list);

    std::vector<std::string> test_vector = { "one", "two", "three", "four", "five", "six" };
    std::cout << "Vector: ";
    print_container(test_vector);

    return 0;
}