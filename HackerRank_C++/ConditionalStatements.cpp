/*----------------------------------------------------------------------- 

https://www.hackerrank.com/challenges/c-tutorial-for-loop/problem?isFullScreen=true

A for loop is a programming language statement which allows code to be repeatedly executed.

The syntax is

for ( <expression_1> ; <expression_2> ; <expression_3> )
    <statement>
expression_1 is used for intializing variables which are generally used for controlling the terminating flag for the loop.
expression_2 is used to check for the terminating condition. If this evaluates to false, then the loop is terminated.
expression_3 is generally used to update the flags/variables.
A sample loop is

for(int i = 0; i < 10; i++) {
    ...
}
In this challenge, you will use a for loop to increment a variable through a range.

Input Format

You will be given two positive integers,  and  (), separated by a newline.

Output Format

For each integer  in the inclusive interval :

If , then print the English representation of it in lowercase. That is "one" for , "two" for , and so on.
Else if  and it is an even number, then print "even".
Else if  and it is an odd number, then print "odd".
Note: 

Sample Input

8
11
Sample Output

eight
nine
even
odd
----------------------------------------------------------------------- 
*/

#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    
    //  Taking Data from user:
    int a, b;
    cin >> a >> b;
    
    //  Array of strings:
    std::string numbers[] = {   "zero", "one", "two", "three", "four",
                                "five", "six", "seven", "eight", "nine"     };

    // Accessing and printing the array elements
    for (int i = a; i <= b; i++) 
    {
        if( i>9 && (i%2==0) )       // even
        {
            std::cout << "even" << std::endl;
        }
        else if( i>9 && (i%2==1) )   // odd
        {
            std::cout << "odd" << std::endl;
        }
        else
        {
            std::cout << numbers[i] << std::endl;
        }
    }

    
    return 0;
}
