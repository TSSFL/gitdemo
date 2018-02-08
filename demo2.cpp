//This is a git usage demo2
#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

int main (){
       const int rows = 6;
       const int cols = 6;
       int Total = 0;
       double average = 0.0;
       int grades[rows][cols] = {{89, 98, 78, 79, 100, 96},    //initialization of 6 by 6 array
                              {97, 87, 77, 80,90, 95},
                              {86, 88, 99, 94, 92, 84},
                              {75, 85, 81, 83, 98, 90},
                              {80, 76, 77, 89, 96, 77},
                              {90,80,78,91, 93, 100}};
                             
      for (int r = 0; r < rows; ++r) {cout<<"Student"<<" "<<r+1<<" "<<"Marks"<<" : ";
                                   for (int c = 0; c < cols; ++c){
                                   cout<<grades[r][c]<<" ";
                                   Total += grades[r][c];
                                   }
                                     
                             average = Total/cols;
                             cout<<"Average is"<<" "<<average<<endl;
                             Total = 0;
                             average = 0.0; 
                    } 
    return 0;
     }

