
  #include<bits/stdc++.h>
  using namespace std;
  class Rectangle{
       private:
          int a;
       protected:
          int b;
       public:
           
           int c;
        //  To access a and b by setter 
        //    void seta(int a){
        //         this->a=a;
        //    }
        //    void setb(int b){
        //         this->b=b;
        //    }
           void myfun(){
              cout<<" Value is : "<< a <<"&"<< b<<"&"<<c<<endl;
           }
      
  };
  class Derived:public Rectangle{
      
     public:   void derivedfunction(){
          
        //    cout<< "Values are :"<< a << b << c;    
        //   a is not accessible from here

          cout<<": Values accessable "<< b << "&"<< c<<endl;;
      }
       
  };
  int main(){

      Derived ob;
    //   Access of a and b is not allowed 
    //   ob.a=12;
    //   ob.b=20;
      ob.c=30;

     //  accessable by seta and b 
    //    ob.seta(10);
    //   ob.setb(20);
   
      ob.myfun();
      ob.derivedfunction();

      cout<<ob.c<<endl;


         
      
    
                      
   
                   
      return 0;
  }