# 2D Vector Lib (vector_libc)

While learning more about vectors and their operations, I wanted to see it in action so I created a very rudimentary library for 2 dimensional vectors.

With the respective arithmetic being:
* Addition  
* Subtraction
* Division
* Multiplication

And functions for:
* The dot product
* The length (magnitude)
* Distance between two vectors
* Normalizing a Vector

To run the project:
!Note - I'm using zig's c compiler you will need to update the makefile to use your compiler and flags etc:

```
make && ./vec

or

make run
```

![Screenshot](image/output.png)

Clean up can be done with ```make clean```
