#include<bits/stdc++.h>
using namespace std;
class Square{
    private:
        int side;
    public:
        void setSide(int s){
            if(s<0){
                cout<<"side can't be negative"<<endl;
                return;
            }
            side=s;
        }
        int getSide(){
            return side;
        }
        int area(){
            return side*side;
        }
};
int main(){
     
    Square s;
    s.setSide(5);
    cout<<s.getSide()<<endl;
    cout<<s.area()<<endl;

    return 0;
}