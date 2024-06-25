#include<bits/stdc++.h>
using namespace std;
class Complex{
    private:
        int real;
        int  img;

     
    public:  
        Complex(int real=0,int img=0){
            this->real=real;
            this->img=img;
            
        }
        void printComplex(){

            cout<<"Real :"<<real<<" Imaginary :"<<img<<endl;
             
        }
        Complex operator+(Complex c){
              
              Complex temp;
              
              temp.real=real+c.real;
              temp.img=img+c.img;
              return temp;

        }


       

};
int main(){

     Complex s(12,78);
     Complex f(8,2);
     s.printComplex();
     Complex d=s + f;
     d.printComplex();

                    
 
                 
    return 0;
}