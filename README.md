*This project has been created as part of the 42 curriculum by vpolard*

```
                        __                                                       
                       /\ \                                                      
 _____   __  __    ____\ \ \___              ____  __  __  __     __     _____   
/\ '__`\/\ \/\ \  /',__\\ \  _ `\           /',__\/\ \/\ \/\ \  /'__`\  /\ '__`\ 
\ \ \L\ \ \ \_\ \/\__, `\\ \ \ \ \         /\__, `\ \ \_/ \_/ \/\ \L\.\_\ \ \L\ \
 \ \ ,__/\ \____/\/\____/ \ \_\ \_\        \/\____/\ \___x___/'\ \__/.\_\\ \ ,__/
  \ \ \/  \/___/  \/___/   \/_/\/_/  _______\/___/  \/__//__/   \/__/\/_/ \ \ \/ 
   \ \_\                            /\______\                              \ \_\ 
    \/_/                            \/______/                               \/_/ 
```

### Boundaries

The main goal is to sort a list of disordered number respecting some constraints.  
The first one is using exactly two stacks. The other is using only the moves bellow:  
  - Push the top element of a stack on top of the other stack.
  - Swap the first and second elements of a stack
  - Bring the bottom element to the top of the stack
  - Bring the top element to the bottom of the stack

### Directory

```
push-swap
|-- lib             // Libraby-like functions  (e.g. ft_putstr, ft_atoi...)
|-- operations      // Allowed moves associated functions (e.g. pa, rrb...)
`-- tools           // Additional stack manipulation functions (e.g. constructors, find_median)
```

### Structures

As an object-oriented program could be structured, there is : 
- A `package` used to manipulate conditionize and validate arguments.
- Some `stack`s build up from `package`'s data to sort arguments. 

# Instructions

```bash
$ git clone <repository_address> push_swap_correction
$ cd push_swap_correction
$ make
$ ./push_swap <arg_one> <arg_two> <...> # e.g. 81 7 63 1 98 23 42 4 17 12 91
```

**Note** : arguments are considered valid as long as each one represents whole number that can fit in an `int`. There should not have any duplicated argument. Obviously, sorting starts from at least two numbers.

<!-- # Resources --->
