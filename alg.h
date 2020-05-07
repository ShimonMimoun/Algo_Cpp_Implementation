#pragma once
#include <algorithm>
#include <vector>
#include <iostream>
#include <numeric>
#include <string>
#include <functional>
using namespace std;



/**
 * Add_n (b, e, n)
 * The algorithm receives an iterator b for the startning of a container, 
 * an iterator e for the end of a container and a positive number n.
 * The algorithm connects the first n organs and saves the first place amount in the container, connects n
 * The organs follow and saves the amount in second place in the container, and so on.
 * The returned value is an iterator for the end (one after the sum).
 * If the empty container the returned value is e.
 * If the number of organs does not divide completely by n, the last sum will be the connection of 1) to 1-n)
 * The remaining.
 */

// Template Classs 
template <class T,class V>
T Add_n(T start,T end ,V const current){
//save the main elements to know where I am during each moment 
  V current_t = current;
  T start_t = start;
//Help variable to tell and know parameters during launch
  auto flag_count =0;
  //Save if the length is divisible by my current digit
  bool flag_mod=(end-start)%current==0;

  if (flag_mod){//if flag_mod==0? (False)
  
  //Rest of division with current 
      auto cond=((end-start)/current);
 // For until reaching my cond value
      for(auto iter =0;iter<cond;iter++){
     // as long as my division is greater than 0 continues
        while(current_t>0){
            flag_count =flag_count+*start_t;
            current_t--;start_t++;
            }
    // I save my information and reset the help variables
        *start =flag_count;
        ///resest values
         flag_count =0;current_t =current;
         start++;
        
        
      }
  }else{//flag_mode is true 

    //Rest of division with current 
     auto cond=(end-start)/current;
 // For until reaching my cond value
     for(auto iter =0;iter<cond;iter++){
// as long as my division is greater than 0 continues
        while(current_t>0){
            flag_count =flag_count+*start_t;
            current_t--;
            start_t++;}


        // I save my information and reset the help variables
        *start = flag_count;
        flag_count =0;
        current_t =current;
        start++;
        
       }
      
     /*
     template< class InputIt, class T >
     T accumulate( InputIt first, InputIt last, T init );
     
     *Computes the sum of the given value init and the elements in the range [first, last).
     *The first version uses operator+ to sum up the elements, the second version uses the given binary function op,
     * both applying std::move to their operands on the left hand side
     * 
     */
       *start=accumulate(start_t,end,0);
       start=start+1;
  }
//Returns the iterator once it is modified by our algorithm
return start;

}

/*
P = Transpose (b, e)
The algorithm receives an iterator b to the beginning of the container 
and an iterator e to the end of the container.
The algorithm switches between two adjacent organs, between organ 0 and organ 1,
between organ 2 and organ 3, and so on.
If the number of organs is not even, the last one will not be replaced.
If the number of organs is even or the container is empty, the returned value is e.
If the number of organs is not equal, the returned value is 1 - e.
For swapping, you can use the swap_iter algorithm.


int ia[] = {1,2,3,4,5,6,7,8,9};
int * p = Transpose(begin(ia), end(ia));

Result:{2,1,4,3,6,5,8,7,9}


*/
//Template Class with one Type 
template <class T>
T Transpose(T start, T end){
   
if((end-start)%2==0)
{

/*
template< class ForwardIt1, class ForwardIt2 >
void iter_swap( ForwardIt1 a, ForwardIt2 b );
Swaps the values of the elements the given iterators are pointing to.
*/

    while(start!=end){iter_swap(start+1, start);start++;start++;}
    return end;
    }else{while(start!=end-1){iter_swap(start+1, start);start++;start++;}

    return end-1;
    }
    
}

/*
Transform (b, e, o, f)

The algorithm gets an iterator b to the beginning of the container, an iterator to the end 
of a container, a third iterator o to the beginning
Another container and function f that accepts two parameters.
The algorithm invokes the function f on the first two organs in the first container (organ 0 and organ 1).
And keeps the result in the first organ of the second container, the algorithm runs the function on two
The following organs in the first container (organ 2 and organ 3) and save the result 
in the second organ of the second container,And so on.
If the number of organs equal the value returned is an iterator to one place after 
the last organ in the other container.
If the container is empty or the number of organs is not equal, the algorithm 
will not calculate the returned function and value
There will be an iterator for the beginning of the second tank.

*/

// three different types of classes
template<class T1, class T2, class T3>
T2 Transform(T1 b1, T1 e1, T2 b2,T3 current_o)
{   
  
  auto flag_odd=(e1-b1)%2;

// check if the length is even or odd
    if(flag_odd==0)
    {

// As long as I don't narrate at the end of my list
    while (b1!=e1) {
        *(b2++)=current_o(*b1,*(b1+1));
        b1++;b1++;
        }
//end while
return b2;
}//else return b2 As he is
return b2;

}