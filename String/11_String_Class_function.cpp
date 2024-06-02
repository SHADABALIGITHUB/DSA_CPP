#include<iostream>
#include<string>

using namespace std;
int main(){
                    
     string  str;
      cout<<"Enter The string : "<<endl;
     
     getline(cin,str);

    
    //  fucntion 

    // 1. str.length() : return the length of the string

    cout<<str.length()<<endl; 

    // 2. str.size() : return the length of the string

    cout<<str.size()<<endl;

    // 3. str.capacity() : return the capacity of the string

    cout<<str.capacity()<<endl;

    // 4. str.resize() : resize the string

    str.resize(10);

    cout<<str<<endl;

    // 5. str.clear() : clear the string

    str.clear();

    cout<<str<<endl;

    // 6. str.empty() : return true if string is empty

    cout<<str.empty()<<endl;

    // 7. str.shrink_to_fit() : shrink the capacity of the string

    str.shrink_to_fit();

    cout<<str.capacity()<<endl;

    // 8. str.reserve() : reserve the capacity of the string

    str.reserve(100);

    cout<<str.capacity()<<endl;

    // 9. str.swap() : swap the string

    string str1="Hello";

    str.swap(str1);

    cout<<str<<endl;

    cout<<str1<<endl;

    // 10. str.at() : return the character at the given position

    cout<<str.at(0)<<endl;

    // 11. str.front() : return the first character of the string

    cout<<str.front()<<endl;

    // 12. str.back() : return the last character of the string


    cout<<str.back()<<endl;

    // 13. str.push_back() : add the character at the end of the string

    str.push_back('a');

    cout<<str<<endl;

    // 14. str.pop_back() : remove the character from the end of the string


    str.pop_back();


    cout<<str<<endl;

    // 15. str.append() : append the string

    str.append("Hello");


    cout<<str<<endl;

    // 16. str.insert() : insert the string

    str.insert(0,"Hi");

    cout<<str<<endl;

    // 17. str.erase() : erase the string


    str.erase(0,2);

    cout<<str<<endl;

    // 18. str.replace() : replace the string

    str.replace(0,2,"Hello");


    cout<<str<<endl;

    // 19. str.find() : find the string

    cout<<str.find("Hello")<<endl;

    // 20. str.rfind() : find the string from the end


    cout<<str.rfind("Hello")<<endl;


    // 21. str.substr() : return the substring

    cout<<str.substr(0,2)<<endl;

    // 22. str.compare() : compare the string

    cout<<str.compare("aello")<<endl;

    // 23. str.c_str() : return the c style string

    cout<<str.c_str()<<endl;
                 
    return 0;
}