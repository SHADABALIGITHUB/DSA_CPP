#include "functions.h"
#include<iostream>
#include<string>

using namespace std;

void SquareCounting(int n){

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }

}



void SquareABCD(int n){

    
     for(int i=1;i<=n;i++){
        char value='A';

        for(int j=1;j<=n;j++){
            cout<<char(value+j-1)<<" ";
        }
        cout<<endl;
    }

}



void SquareCountingCountinue(int n){

     int start=1;
     for(int i=1;i<=n;i++){
        
        for(int j=1;j<=n;j++){
            if(start<10){
                cout<<0<<start<<' ';
            }
            else{
            cout<<start<<' ';
            }
            start++;
        }
        cout<<endl;
    }


}



void Trianglestar(int n){

     for(int i=1;i<=n;i++){
        
        for(int j=1;j<=i;j++){

            cout<<" * ";
            
        }
        cout<<endl;
    }

}


void TriangleCounting(int n){


 for(int i=1;i<=n;i++){
        
        for(int j=1;j<=i;j++){

            cout<<i<<' ';
            
        }
        cout<<endl;
    }
}


void TriangleCounting02(int n)
{
     for(int i=1;i<=n;i++){
        
        for(int j=1;j<=i;j++){

            cout<<j<<' ';
            
        }
        cout<<endl;
    }

}

void ReverseTriangleCounting(int n){

    for(int i=1;i<=n;i++){
        
        for(int j=i;j>=1;j--){

            cout<<j<<' ';
            
        }
        cout<<endl;
    }

}


void FloydsTriangle(int n){

     int value=1;

     for(int i=1;i<=n;i++){
        
        for(int j=1;j<=i;j++){

            cout<<value<<' ';
            value++;
            
        }
        cout<<endl;
    }


}


 void InvertedTriangle(int n){

     for(int i=1;i<=n;i++){
        
        for(int j=1;j<=(n-i+1);j++){

            cout<<i<<' ';
            
            
        }
        cout<<endl;
    }

 }

 void spaceInvertedTriangle(int n){

    for(int i=1;i<=n;i++){
        
        for(int j=1;j<=n;j++){
 
             if(j<i){
                cout<<" - ";
             }
            else {
             cout<<' '<<i<<' ';
            }
            

            
            
            
        }
        cout<<endl;
    }

 }

 void PyramidPattern(int n){



       for(int i=1;i<=n;i++){

        for(int j=1;j<=(n-i);j++){

              cout<<" - "; 
 
            
        }
        for(int j=1;j<=i;j++){

            cout<<' '<<j<<' ';
        }


        
        for(int j=i-1;j>=1;j--){

            cout<<' '<<j<<' ';
        }
        cout<<endl;
    }


      

 }


 void rotatedHoloSquare(int n){

     for(int i=1;i<=n;i++){

        for(int j=1;j<=(n-i);j++){

              cout<<" - "; 
 
            
        }
        for(int j=1;j<=1;j++){

            cout<<" * ";
        }

        for(int j=1;j<i;j++){

              cout<<" - "; 
 
            
        }
        for(int j=1;j<=(i-2);j++){
             cout<<" - ";
        }

        for(int j=1;j<=1;j++){
            
            if(i!=1)
            cout<<" * ";
        }

      

       



        
       
        cout<<endl;

        


    }

    for(int i=2;i<=n;i++){

      for(int j=2;j<=i;j++){
            cout<<" - ";
        }

      for(int j=1;j<=1;j++){
        //   if(i!=1)
          cout<<" * ";
      }
      for(int j=1;j<=(n-i);j++){
             cout<<" - ";
      }
      for(int j=1;j<=(n-i-1);j++){
            cout<<" - ";
      }
      for(int j=1;j<=1;j++){
        if(i!=n)
        cout<<" * ";
      }
      



      cout<<endl;


    }

 }




 void butterflyPattern(int n){
       
       for(int i=1;i<=n;i++){

          for(int j=1;j<=i;j++){
             cout<<"*";
          }
          for(int j=1;j<=(n-i);j++){
             cout<<" ";
          }
          for(int j=1;j<=(n-i);j++){
             cout<<" ";
          }
           for(int j=1;j<=i;j++){
             cout<<"*";
          }





          cout<<endl;



       }


          for(int i=1;i<=n;i++){

          for(int j=1;j<=(n-i);j++){
             cout<<"*";
          }
          for(int j=1;j<=i;j++){
             cout<<" ";
          }
          for(int j=1;j<=i;j++){
             cout<<" ";
          }
           for(int j=1;j<=n-i;j++){
             cout<<"*";
          }





          cout<<endl;



       }
 }