#pragma once
#ifndef calcul_h
#define calcul_h

#include <iostream>
#include <stack>
#include <string>
#include <sstream>
#include <functional>
#include <map>
#include <limits>
#include <ios> 
#include <ctype.h>
#include "dll_read.h"


class calcul
{
private:
    std::stack <double> number;
    std::stack <std::string> operation;
    std::map <std::string, int> oper_priority;//mathematical operations priorities
    std::map <std::string, std::function<void(double, double)>> function;//correlation of a mathematical operation and what it does
    dll_read dll;
    bool check_neg(char c);//checking whether the number is negative
    void is_number(char c);//checking whether a number is
    void is_standart(char c);//checking whether it is a standard operation
    bool is_nonstandart(char c);//checking whether it is a non-standard operation
    bool is_brecket(char c);//checking whether the bracket is closing
    void oper();//processing of a single mathematical operation
    int nonstandart();//working with non-standard functions
    void deleteStacksEr();//clearing stacks if an error occurred when evaluating an expression (exception handling)
    void processing_oper(std::string c);//processing of mathematical operations, namely checking for the emptiness of the stack and the priority of the mathematical operation
    void expr_incor();//clearing stacks when an expression is entered incorrectly
    template <typename T>
    void clearStack(std::stack <T>& s);

public:
    calcul();
    void validation();//checking exceptions from dynamic libraries
    void readthread();//reading an expression from a stream
    void maths();//perform mathematical operations and is responsible for the output of the result to the console
    ~calcul();
};
#endif