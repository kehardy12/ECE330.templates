// Fig. 8.13: fig08_13.cpp
// Selection sort with pass-by-reference. This program puts values into an 
// array, sorts them into ascending order and prints the resulting array.
#include <iostream> 
#include <iomanip>

#include "template.h"

using namespace std;

int main()
{
   const int arraySize = 10;
   int a[ arraySize ] = { 2, 6, 4, 8, 10, 12, 89, 68, 45, 37 };

   cout << "Data items in original order\n";

   for ( int i = 0; i < arraySize; ++i )
      cout << setw( 4 ) << a[ i ];

   Sort<int> array(a,arraySize);

   const int floatSize = 4;
   float b[ floatSize] = { 3.5, 7.6, 5.5, 3.4 };	
	
   array.selectionSort(); // sort the array

   cout << "\nData items in ascending order\n";

   for ( int j = 0; j < arraySize; ++j )
      cout << setw( 4 ) << a[ j ];

   cout << endl;
	
   //printing float numbers 
	
   cout << "Data items in original order\n";
   for ( int i = 0; i < floatSize; ++i )
	cout  << setw( 4 ) << b[ i ];
   
   Sort<float> floatarray(b, floatSize);
   floatarray.selectionSort();
 
   cout << "\nData items in ascending order\n";
   for ( int j = 0; j < floatSize; ++j )
	cout << setw( 4 ) << b[ j ];

   cout << endl;


} // end main


/**************************************************************************
 * (C) Copyright 1992-2012 by Deitel & Associates, Inc. and               *
 * Pearson Education, Inc. All Rights Reserved.                           *
 *                                                                        *
 * DISCLAIMER: The authors and publisher of this book have used their     *
 * best efforts in preparing the book. These efforts include the          *
 * development, research, and testing of the theories and programs        *
 * to determine their effectiveness. The authors and publisher make       *
 * no warranty of any kind, expressed or implied, with regard to these    *
 * programs or to the documentation contained in these books. The authors *
 * and publisher shall not be liable in any event for incidental or       *
 * consequential damages in connection with, or arising out of, the       *
 * furnishing, performance, or use of these programs.                     *
 **************************************************************************/
