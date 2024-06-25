#include<iostream>
using namespace std;


int Min(int a, int b, int c){
    return a<b&&a<c?a:b<a&&b<c?b:c;
}
int Min(int a,int b){
    if(a<b){
        return a;
    }
    return b;
}
float Min(float a,float b){
     if(a<b){
        return a;
    }
    return b;
}



int main()
{
    cout<<Min(10,5)<<endl;
    cout<<Min(12,7,9)<<endl;

    cout<<Min(18.0f,9.0f)<<endl;

    return 0;
}

