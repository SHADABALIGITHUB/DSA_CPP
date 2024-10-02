#ifndef FUNCTIONS_H
#define FUNCTIONS_H
#include <string>
#include<bits/stdc++.h>


std::pair<int,int> largestSmallest(int arr[],int n);

int change(int &b);
int search(int a[],int size,int t);
void reverseArray(int a[],int size);
std::pair<int,long long int> sumAndProductArray(int a[],int size);
int uniqueArray(int a[],int size);
int * intersectionArray(int a[],int second[],int size,int size2,int &res_size);


#endif // FUNCTIONS_H
