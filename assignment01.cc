/* 	Justin McLain
	Z1910087
	CSCI 340- PE1
	
	I certify that this is my own work and where appropriate an extension 
	of the starter code provided for the assignment.
*/
#include "assignment01.h"

using namespace std;
// Add needed constants

void genRndNums(vector<int>& v, int vec_size,int seed){
   srand(seed);
   for(int i = 0; i < vec_size; i++){
       v.push_back((rand()+1)%1000);
   }
}

void printVec(const vector<int>& v,int vec_size){
   int NO_ITEMS = 12,ITEM_W = 5;
   for(int i = 0; i < vec_size; i++){
       if((i > 0)&&(i % (NO_ITEMS)==0)){
           cout<<"\n";
       }
       cout<<v[i]<<setw(ITEM_W);  
   }
}

int 
main() 
{
// Declare vector v

// Generate random numbers to fill vector v	

// Using STL sort sort v
	
// Print vector of sorted random numbers

    return 1;
}


