# the fizzbuzz exercise

many interviews launch with a fizzbuzz question.
we have chosen to include it here because as a programmer,
you'll see and hear about it so often that it will
invade your dreams.

## the exercise

write a program that displays the numbers 0-100, with
the following modifications:

* if a number is divisible by three, write 'fizz'
* if a number is divisible by five, write 'buzz'
* if a number is divisible by both three and five, write 'fizzbuzz'

we've provided a basic framework inside which you can
write the meat of the solution; all you have to do is
finish the exercise.

## in C

in C, you'll need to write the solution as part of a `main`
function in a C source file. we've called this file `fizzbuzz.c`,
and have set up the `main` function with no body.

## setting up

you should have the a C compiler available for your platform
in order to compile and run the solution.

### ubuntu

check to see if gcc is installed:

`which gcc`

if nothing is found, install it with:

`sudo apt install -y gcc`

### mac os x+

check to see if the XCode command line tools are installed:

`xcode-select -p`

if not, install with:

`xcode-select --install`

### cloning this repo

if you have `git` installed (and you should), you can clone
this repo with:

`git clone git@github.com:cribsheets/fizzbuzz-c`

a new directory called `fizzbuzz-c/` will appear in your
current directory.

## running the tests

this branch includes a minimal copy of the Unity test framework in the `unity` directory.
you can find out more about Unity at
[http://www.throwtheswitch.org/unity/](http://www.throwtheswitch.org/unity/).

here, the tests have already been written for you, but you'll need to compile
the test program yourself. whether you use `gcc` or `cc`, compiling
the tests looks like this:

ubuntu: `gcc -o test-fizzbuzz test-fizzbuzz.c fizzbuzzfunctions.c unity/src/unity.c`
mac: `cc -o test-fizzbuzz test-fizzbuzz.c fizzbuzzfunctions.c unity/src/unity.c`

if everything successfully compiles, run the tests as follows:

`./test-fizzbuzz`

initially, three of the tests will fail, and three will pass.

## writing the solution

to write a solution to this exercise, you should first update the
`is_fizz`, `is_buzz`, and `is_fizzbuzz` functions in `fizzbuzzfunctions.c`
to behave correctly. you'll then _use_ those functions in `fizzbuzz.c` to
create a solution.

## compiling the program

if you're moving in a C direction, you should get used to
compiling the source files. in this project, you can
compile your solution with:

ubuntu: `gcc -o fizzbuzz fizzbuzz.c fizzbuzzfunctions.c`
mac: `cc -o fizzbuzz fizzbuzz.c fuzzbuzzfunctions.c`

the `-o fizzbuzz` tells the compiler to output an executable
called `fizzbuzz`.

## running the program

if your program compiles successfully, you should have an
executable file in your directory called `fizzbuzz`. (okay, 
you could've named that whatever.) run this file with:

`./fizzbuzz`

if you've completed the exercise, you should see a list
of numbers, with 3, 6, 9, 12, etc. replaced by the word 'fizz',
5, 10, 20, etc. replaced by 'buzz', and 0, 15, 30, 45, etc. 
replaced by fizzbuzz. congrats! you're ready for your first
lame interview question.

## a tested solution

you can view a solution to this problem satisfying the tests in the
`with-tests-solutions` branch, as `fizzbuzz-tested.c` and 
`fizzbuzzfunctions-tested.c`. they are by no means
intended to be the optimal or most clever solutions, but they
satisfy the rules of the exercise.

to see the solutions branch:

`git checkout with-tests-solutions`

to return to the `with-tests` branch:

`git checkout with-tests`

(or just look it up on GitHub.)

## can you do better?

if you have a particularly clever solution, let us know!
we'll add it to the 'clever solutions' section.
