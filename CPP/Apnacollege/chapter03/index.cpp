#include<iostream> 
#include "functions.h"
#include<string>


using namespace std;

int main(){


  //   if lse 

  if(20>30){
    
    cout<<"If Block Run"<<endl;
  }else{
    cout<<"Else Block Run"<<endl;
  }

  //  grading system 

  int marks=50;
  // cout<<"Enter the marks you Get :"<<endl;
  // cin>>marks;

  cout<<"Your Grade is : "<<gradingSystem(marks)<<endl;

 
  //  problem upper case or lower case character 

   char data='A';
  //  cout<<"Enter only one character Please :"<<endl;
  //  cin>>data;


   cout<<"Your character is :"<<checkLowOrHigh(data)<<endl;


  //   ternary statement 


   cout<<"Use of ternary :"<<(true?"True":"False")<<endl;



  //   while loops 
   int count;
   int base=10;

  //    something bad loop if base is not here it's infinite loop

    while(count=30){

      if(base==1){
        break;
      }

      cout<<count<<" ";
      count++;
      base--;
      
    }
   cout<<endl;

    for(int i=0;i<30;i++){
      cout<<i<<" ";
    }

    cout<<endl;




    //  problem sum 1 to n using loop  


    cout<<"Sum is :"<<Sum(10)<<endl;


    //  problem odd sum only 

    cout<<"Sum is :"<<OddSum(10)<<endl;




    //   do while loop

  
    bool check;

    do{

      check=false;
      cout<<"works loop"<<endl;

    } while(check);



    //  skipping prime or not prime already done 
    //  here maam explain that  we have to check only root n * root n highest factor to check prime 
    //  so use loop as for(int i=0;i*i<=n;i++)  



    //   nested loop 


     printSquareStar(5);




  







    return 0;
}