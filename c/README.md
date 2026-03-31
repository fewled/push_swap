# C Documenation

<br>
	
### Directory
```
push-swap
|-- algo            // Sorting logic and optimization tricks
|-- lib             // Libraby-like functions and additional tools(e.g. ft_putstr, ft_atoi...)
|-- operations      // Allowed moves associated functions (e.g. pa, rrb...)
`-- types           // Allocation and freeing logic for various types
```

### Types

As an object-oriented program could be structured, there is : 
- A `package` used to manipulate conditionize and validate arguments.
- Some `stack`s build up from `package`'s data to sort arguments.
- Some `move`s that stores data under observation to emulate the execution of an operation.

### Instructions

```bash
$ git clone https://github.com/fewled/push_swap push_swap
$ cd push_swap/c
$ make
$ ./push_swap <arg_one> <arg_two> <...> # e.g. 81 7 63 1 98 23 42 4 17 12 91
```
