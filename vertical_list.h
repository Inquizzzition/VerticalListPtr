//
// Created by Inquisition on 12.04.2023.
//

#ifndef VERTICALLISTPTR_VERTICAL_LIST_H
#define VERTICALLISTPTR_VERTICAL_LIST_H
#include "node.h"
#include <iostream>

class vertical_list {
private:
    size_t size;
    node* first;                            // указатель на первый элемент списка
    node* last;                             // указатель на последний элемент списка
public:
    vertical_list();                        // конструктор
    bool is_empty();                        // проверяет, есть ли в списке элементы
    void push_back(std::string &val);       // добавляет новый элемент в список
    void print();                           // печатает все элементы через пробел
    void pop_first();                       // удаляет первый элемент за O(1)
    void pop_back();                        // удаляет последний элемент за O(n)
    void clear();                           // удаляет все элементы
    size_t get_size();                      // возвращает размер списка
    node* operator[](const size_t index);   // возращает элемент по индексу
};


#endif //VERTICALLISTPTR_VERTICAL_LIST_H
