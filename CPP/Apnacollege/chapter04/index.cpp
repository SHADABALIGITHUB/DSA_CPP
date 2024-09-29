#include<iostream> 
#include "functions.h"
#include<string>


using namespace std;

int main(){

   
     int n=5;


    //   patterns

    //   problem 1 

        // 1 2 3 4 5 
        // 1 2 3 4 5 
        // 1 2 3 4 5 
        // 1 2 3 4 5 
        // 1 2 3 4 5 

     SquareCounting(n);

     cout<<endl<<endl;

       
    //    problem 2

        // A B C D E 
        // A B C D E 
        // A B C D E 
        // A B C D E 
        // A B C D E  

     SquareABCD(n);

     cout<<endl<<endl;

    //  probelem 3 

       // 01 02 03 04 05 
       // 06 07 08 09 10 
       // 11 12 13 14 15 
       // 16 17 18 19 20 
       // 21 22 23 24 25 


     SquareCountingCountinue(n);


     cout<<endl<<endl;

//   problem 4 

     
//  * 
//  *  * 
//  *  *  * 
//  *  *  *  * 
//  *  *  *  *  * 


     Trianglestar(n);

      cout<<endl<<endl;

// problem 5

// 1 
// 2 2 
// 3 3 3 
// 4 4 4 4 
// 5 5 5 5 5 

     TriangleCounting(n);

     cout<<endl<<endl;


// problem 6

// 1 
// 1 2 
// 1 2 3 
// 1 2 3 4 
// 1 2 3 4 5 

     TriangleCounting02(n);

     cout<<endl<<endl;


// probelem 7

// 1 
// 2 1 
// 3 2 1 
// 4 3 2 1 
// 5 4 3 2 1 


     ReverseTriangleCounting(n);
     
     cout<<endl<<endl;


//  problem 8


// 1 
// 2 3 
// 4 5 6 
// 7 8 9 10 
// 11 12 13 14 15 

     FloydsTriangle(n);

     cout<<endl<<endl;

// extra problem 

// 1 1 1 1 1 
// 2 2 2 2 
// 3 3 3 
// 4 4 
// 5 


     InvertedTriangle(n);


      cout<<endl<<endl;


//  problem 9

//  1  1  1  1  1 
//  -  2  2  2  2 
//  -  -  3  3  3 
//  -  -  -  4  4 
//  -  -  -  -  5 

     spaceInvertedTriangle(n);

      cout<<endl<<endl;



    //    problem 10 

//  -  -  -  -  1 
//  -  -  -  1  2  1 
//  -  -  1  2  3  2  1 
//  -  1  2  3  4  3  2  1 
//  1  2  3  4  5  4  3  2  1 

    PyramidPattern(n);


     cout<<endl<<endl;


    //    problem 11


//  -  -  -  -  * 
//  -  -  -  *  -  * 
//  -  -  *  -  -  -  * 
//  -  *  -  -  -  -  -  * 
//  *  -  -  -  -  -  -  -  * 
//  -  *  -  -  -  -  -  * 
//  -  -  *  -  -  -  * 
//  -  -  -  *  -  * 
//  -  -  -  -  * 



   rotatedHoloSquare(n); 

    cout<<endl<<endl;


// problem 12 

//         *        *
//         **      **
//         ***    ***
//         ****  ****
//         **********
//         ****  ****
//         ***    ***
//         **      **
//         *        *
    butterflyPattern(n);

    cout<<endl<<endl;














    return 0;
}