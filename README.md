  # Introduction

[![42 PUSH-SWAP (Emotional)](https://img.youtube.com/vi/Ey9xK9bJIPM/0.jpg)](https://www.youtube.com/watch?v=Ey9xK9bJIPM)

**Click thumbnail to redirect to youtube**

The Push_swap project is a very simple and highly effective algorithm project: data will need to be sorted. You have at your disposal a set of int values, 2 stacks and a set of instructions to manipulate both stacks.
Your goal ? Write a program in C called push_swap which calculates and displays on the standard output the smallest program using Push_swap instruction language that sorts the integer arguments received.

Easy? We’ll see about that...

  # General Instructions

• This project will only be corrected by actual human beings. You are therefore free to organize and name your files as you wish, although you need to respect some requirements listed below.

• The executable file must be named push_swap.

• You must submit a Makefile. That Makefile needs to compile the project and must contain the usual rules. It can only recompile the program if necessary.

• If you are clever, you will use your library for this project, submit also your folder libft including its own Makefile at the root of your repository. Your Makefile will have to compile the library, and then compile your project.

• Global variables are forbidden.

• Your project must be written in C in accordance with the Norm.

• You have to handle errors in a sensitive manner. In no way can your program quit in an unexpected manner (Segmentation fault, bus error, double free, etc).

• Neither program can have any memory leaks.

• Within your mandatory part you are allowed to use the following functions:
  ◦ write 
  ◦ read
  ◦ malloc 
  ◦ free
  ◦ exit
  
  # Mandatory part
  
Game rules

• The game is composed of 2 stacks named a and b. 

• To start with:
  ◦ the stack a contains a random amount of negative and/or positive numbers which cannot be duplicated.
  ◦ b is empty
  
• The goal is to sort in ascending order numbers into stack a.

• To do this you have the following operations at your disposal:
sa : swap a - swap the first 2 elements at the top of stack a. Do nothing if there is only one or no elements).

sb : swap b - swap the first 2 elements at the top of stack b. Do nothing if there is only one or no elements).

ss : sa and sb at the same time.

pa : push a - take the first element at the top of b and put it at the top of a. Do nothing if b is empty.

pb : push b - take the first element at the top of a and put it at the top of b. Do nothing if a is empty.

ra : rotate a - shift up all elements of stack a by 1. The first element becomes the last one.

rb : rotate b - shift up all elements of stack b by 1. The first element becomes the last one.

rr : ra and rb at the same time.

rra : reverse rotate a - shift down all elements of stack a by 1. The last element becomes the first one.

rrb : reverse rotate b - shift down all elements of stack b by 1. The last element becomes the first one.

rrr : rra and rrb at the same time.

  # The “push_swap” program.
  
• You have to write a program named push_swap which will receive as an argument the stack a formatted as a list of integers. The first argument should be at the top of the stack (be careful about the order).

• The program must display the smallest list of instructions possible to sort the stack a, the smallest number being at the top.

• Instructions must be separated by a ’\n’ and nothing else.

• The goal is to sort the stack with the minimum possible number of operations. During defence we’ll compare the number of instructions your program found with a maximum number of operations tolerated. If your program either displays a list too big or if the list isn’t sorted properly, you’ll get no points.

• If no parameters are specified, the program must not display anything and give the prompt back.

• In case of error, you must display Error followed by a ’\n’ on the standard error. Errors include for example: some arguments aren’t integers, some arguments are bigger than an integer, and/or there are duplicates.

# Final Result : 84%.
