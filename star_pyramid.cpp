#include <iostream>
using namespace std;

int main(){
   int rows, i, star, space;

   cout << "Enter number of rows: ";
   cin >> rows;

   for(i = 1; i <= rows; i++) {
      for(space = i; space < rows; space++){
         cout << " ";
      }
      for(star = 1; star <= (2 * i - 1); star++){
         cout << "*";
      }

      cout << "\n";
   }

   return 0;
}