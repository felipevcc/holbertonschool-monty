<div align="center">
  <h1>C - Stacks, Queues - LIFO, FIFO</h1>
  <img src="https://i.imgur.com/Vky3aOi.png">
</div>

## Description
Monty 0.98 is a scripting language that is first compiled into Monty byte codes (Just like Python). It relies on a unique stack, with specific instructions to manipulate it. The goal of this project is to create an interpreter for Monty ByteCodes files.

## Usage
The compilation file is `monty`, you can run this with the following command:
```
./monty <file.m>
```
Example:
```
$ cat bytecodes/00.m
push 1
push 2
push 3
pall

$ ./monty bytecodes/00.m
3
2
1
```

## Opcode list
| Opcode | Functionality |
|---------------- | -----------|
| **push** | Add element to the 'top' of stack and 'end' of queue |
| **pall** | Print every member of the structure |
| **pint** | Prints the member value at the top of stack |
| **pop** | Remove element from 'top' of stack and 'end' of queue|
| **swap** | Swaps the order  of the 1st and 2nd elements in stack |
| **add** | Add top two member values |
| **nop** | Opcode should do nothing |

## Code Style
[Betty Style](https://github.com/holbertonschool/Betty) was implemented for all files.

## Authors
| [<img src="https://avatars.githubusercontent.com/u/95534180?v=4" width=85><br><sub> Felipe Villamizar </sub>](https://github.com/felipevcc) | [<img src="https://avatars.githubusercontent.com/u/106930148?s=100&v=4" width=85><br><sub> Andres Rodriguez </sub>](https://github.com/Andres98100) |
| :---: | :---: |
