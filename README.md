# DynamicStack
**C program to illustrate the working of Dynamic Stack , performing two major operations on it i.e. PUSH() and POP()**
            
The main operations with stacks are:           
* STACK-PUSH(S,x) is the insertion operation for stacks.          
* STACK-POP(S) is the removal operation for stacks.           
* STACK-EMPTY(S) is an operation that checks if a stack is empty or not.        

1. A stack can be implemented using an array S[1..n]. In the implementation there is a
special field top[S] that is called the top of the stack. It represents the index of the
element that has been inserted the most recently into the stack. Thus, at a certain
moment in time the stack S contains the following elements S[1], S[2], …, S[top[S]].   

2. If top[S] = 0 then the stack is empty. Of course, initially we have to assure that top[S]
is set to 0.

3. Whenever we are trying to pop an element from an empty stack we have a stack
underflow. 

4. Whenever we are trying to push an element onto a stack and top[S] = n we have a
stack overflow.    

5. Clearly, an underflow has to be always reported as an error. For an overflow we have
two choices: either to report it as an error or to try to work out the situation by
increasing dynamically the size of the array S. In what follows we ignore potential
stack overflows.
