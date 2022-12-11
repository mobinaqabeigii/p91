#include <iostream>
#include <conio.h>

using namespace std;

int array[10] = { 11,2,54,86,90,3,45,63,20 };
int temp;

void sort(){

for (int i = 0; i < 10; i++)
{
for (int j = i + 1; j < 10; j++)
{
if (array[i] < array[j])
{
temp = array[i];
array[i] = array[j];
array[j] = temp;
}
}
}
}

void show(){

for (int i = 0; i < 10; i++) cout << array[i] << ", ";
}

int main()
{

sort();
show();

cout<<"\nEnter number :";
cin>> array[9];

sort();
show();
}