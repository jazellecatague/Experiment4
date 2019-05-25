#include<iostream>
using namespace std;

main()

{
	
int arraySize;

cout << "Bubble Sorting..." << endl;
cout << "Enter the array size: ";
cin >> arraySize;
cout << "Enter the " << arraySize << " elements" << endl;

int elements[arraySize];
	
for (int a = 0; a < arraySize; a++)

{ 

cin >> elements[a];

}

cout << "Your data: ";
for (int a = 0; a < arraySize; a++)

{
	
cout << elements[a] << ", ";

}

cout << endl;

int numHolder;
for (int i = 0; i < arraySize; i++)

{
	
for (int j = i + 1; j < arraySize; j++)

{
	
if (elements[i] > elements[j])

{
	
numHolder = elements[i];
elements[i] = elements[j];
elements[j] = numHolder;

}
}
}

cout << "After using bubble sort method..." << endl;
cout << "Sorted data: ";
for (int a = 0; a < arraySize; a++)

{

cout << elements[a] << ", ";
	
}
}
