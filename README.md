<h3>SimplestRecursionCountdown.c</h3>

This program is a very very simple example of recursion. It is useful to remember two of the most
essencial aspects of a recursive function: it must call itself and must have a stop condition.

<h3>SimpleRecursionCountUpwards.c</h3>

This also is a very very simple example of recursion, but inside the recursive
function, instead of printing the number and them invokind the recursive call,
now we make the recursive call first and then print the message.<br>
This is interesting because the printing will only be made when the recursive
calls are terminated, this means that the top most functions on the stack
will be terminated first, and thus they will be printed first.<br>
So instead of an descending order, like our previous example, we get an
ascending other.