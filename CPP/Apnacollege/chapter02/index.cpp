#include<iostream> 
#include "functions.h"
#include<string>


using namespace std;

int main(){


    //  data type 

    int int_value=65;
    bool bool_value=false;
    char char_value='A';
    double double_value=34.999;
    float float_value=34.6;

   
    
    cout<<"Type of :"<<sizeof(int_value)<<" " << "int Value "   << int_value<<endl;
    cout<<"Type of :"<<sizeof(bool_value)<<" " << "boolean  Value "   << bool_value<<endl;
    cout<<"Type of :"<<sizeof(char_value)<<" " << "character Value "   << char_value<<endl;  
    cout<<"Type of :"<<sizeof(double_value)<<" " << "double Value "   << double_value<<endl;
    cout<<"Type of :"<<sizeof(float_value)<<" " << "float  Value "   << float_value<<endl;


    //  conversion and typcasting 

     //   typcasting 
    int new_double_value=double_value;
    char new_int_vaue=int_value;

     cout<<"into int from double "<<new_double_value<<endl;
     cout<<"into char from int "<<new_int_vaue<<endl;

   
    // conversion 
    double new_double_value02=int_value;
    int new_int_vaue02=char_value;

     cout<<"into double from int "<<new_double_value02<<endl;
     cout<<"into int from char "<<new_int_vaue02<<endl;



    //   operator

    //  arithmatic  
     
      cout<<"Use of + :"<<add(12,23)<<endl;
      cout<<"Use of - :"<<subtract(12,23)<<endl;
       cout<<"Use of * :"<<multiply(12,23)<<endl;
       cout<<"Use of / :"<<divide(12,23)<<endl;
       cout<<"use of % :"<<module(12,2)<<endl;

    //     comparison 

    int a=30;
    int b=32;

    cout << "Use of < : " << lessThan(a, b) << endl;
    cout << "Use of <= : " << lessThanOrEqual(a, b) << endl;
    cout << "Use of > : " << greaterThan(a, b) << endl;
    cout << "Use of >= : " << greaterThanOrEqual(a, b) << endl;
    cout << "Use of == : " << equal(a, b) << endl;
    cout << "Use of != : " << notEqual(a, b) << endl;


    //  logical 
   bool x = true;
    bool y = false;

    cout << "Use of && (AND) : " <<logicalAnd(x, y) << endl;
    cout << "Use of || (OR) : " <<logicalOr(x, y) << endl;
    cout << "Use of ! (NOT) : " <<logicalNot(x) << endl;


    //   problem 01 


    cout<<"Sum of two are"<<SumOftwo(a,b)<<endl;


    // uniary operator 

    // ++   

     
      int c=20;
      cout<<" 1 "<<c<<endl;
      cout<<" 2 "<<++c<<endl;
      cout<<" 3 "<<c<<endl;
      c=20;
      cout<<" 4 "<<c<<endl;
      cout<<" 5 "<<c++<<endl;
      cout<<" 6 "<<c<<endl;

    
    
    //  -- 

    //  same for -- 

    

   
    









    return 0;
}