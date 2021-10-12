#include <iostream>  //header
using namespace std; //standard

int main() //execution begins
{
    int raw;                                    //declaring a variable name raw
    cout << "enter the number of raws" << endl; //printing a line
    cin >> raw;                                 //taking input from user
    /* we have to print a star system looks like this for raw=5
    *
   ***
  *****
 *******
*********
*********
 *******
  *****
   ***
    *
        in this pattern we have to use three inner loop
        1st for spaces
        2nd for left side upper stars
        3rd for right side upper stars */
    for (int i = 1; i <= raw; i++) //this is outer most loop to print the raws
    {
        for (int j = 1; j <= raw - i; j++) //1st inner loop to print the spaces
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++) //2nd inner loop to print the left side stars
        {
            cout << "*";
        }
        for (int j = 2; j <= i; j++) //3rd inner loop to print the right side stars
        {
            cout << "*";
        }
        cout << endl; //moving to the next line
    }
    //  revers the code for downward pattern
    for (int i = raw; i >= 1; i--)
    {
        for (int j = 1; j <= raw - i; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        for (int j = 2; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
