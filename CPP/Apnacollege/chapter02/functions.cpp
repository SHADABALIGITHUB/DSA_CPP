#include "functions.h"
#include<iostream>
#include<string>


  int add(int a, int b) {
        return a + b;
    }

    int subtract(int a, int b) {
        return a - b;
    }

    int multiply(int a, int b) {
        return a * b;
    }

    double divide(double a, double b) {
        return b != 0 ? a / b : 0; // Simple error handling
    }
    int module(int a,int b){
        return a%b;
    }

     // Comparison functions
    bool lessThan(int a, int b) {
        return a < b;
    }

    bool lessThanOrEqual(int a, int b) {
        return a <= b;
    }

    bool greaterThan(int a, int b) {
        return a > b;
    }

    bool greaterThanOrEqual(int a, int b) {
        return a >= b;
    }

    bool equal(int a, int b) {
        return a == b;
    }

    bool notEqual(int a, int b) {
        return a != b;
    }

    // Logical functions
    bool logicalAnd(bool a, bool b) {
        return a && b; // Logical AND
    }

    bool logicalOr(bool a, bool b) {
        return a || b; // Logical OR
    }

    bool logicalNot(bool a) {
        return !a; // Logical NOT
    }

    int SumOftwo(int a,int b){
        return a+b;
    }