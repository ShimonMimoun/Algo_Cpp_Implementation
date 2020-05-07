# Algorithm With Cpp 

## Test 

#### Add_n (b, e, n)

The algorithm receives an iterator b for the startning of a container, an iterator e for the end of a container and a positive number n.
The algorithm connects the first n organs and saves the first place amount in the container, connects n
The organs follow and saves the amount in second place in the container, and so on.
The returned value is an iterator for the end (one after the sum).
If the empty container the returned value is e.
If the number of organs does not divide completely by n, the last sum will be the connection of 1) to 1-n)
The remaining.

#### Transpose

P = Transpose (b, e)
The algorithm receives an iterator b to the beginning of the container and an iterator e to the end of the container.
The algorithm switches between two adjacent organs, between organ 0 and organ 1, between organ 2 and organ 3, and so on.
If the number of organs is not even, the last one will not be replaced.If the number of organs is even or the container is empty, the returned value is e.If the number of organs is not equal, the returned value is 1 - e.
For swapping, you can use the swap_iter algorithm.

int ia[] = {1,2,3,4,5,6,7,8,9};
int * p = Transpose(begin(ia), end(ia));

Result:{2,1,4,3,6,5,8,7,9}

#### Transform 

Transform (b, e, o, f)

The algorithm gets an iterator b to the beginning of the container, an iterator to the end  of a container, a third iterator o to the beginning
Another container and function f that accepts two parameters. The algorithm invokes the function f on the first two organs in the first container (organ 0 and organ 1). And keeps the result in the first organ of the second container, the algorithm runs the function on two
The following organs in the first container (organ 2 and organ 3) and save the result in the second organ of the second container,And so on.
If the number of organs equal the value returned is an iterator to one place after the last organ in the other container.
If the container is empty or the number of organs is not equal, the algorithm will not calculate the returned function and value
There will be an iterator for the beginning of the second tank.
