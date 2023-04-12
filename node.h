//
// Created by Inquisition on 12.04.2023.
//
#ifndef VERTICALLISTPTR_NODE_H
#define VERTICALLISTPTR_NODE_H

#include <string>

//узел односвязанного списка

struct node {
    std::string val;                                  // значение
    node* next;                                       // указатель на следующий узел
    node(std::string &val);                            // конструктор

};


#endif //VERTICALLISTPTR_NODE_H
